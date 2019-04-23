#include "Marker.h"
#include "Pencil.h"
#include "PencilMarker.h"
#include "vec.hpp"
#include <thread>
#include <mutex>
#include <vector>

class WUFactory
{
  public:
    virtual marker::WritingUtensil *create() = 0;

  public:
    virtual ~WUFactory() {}
};

class PencilBuilder : public WUFactory
{
  private:
    marker::Color color;

  public:
    PencilBuilder *setColor(marker::Color _color)
    {
        color = _color;
        return this;
    }

  public:
    PencilBuilder(marker::Color _color = marker::Color::BLACK)
        : color(_color) {}

  public:
    virtual marker::WritingUtensil *create() override
    {
        return new marker::Pencil(color);
    }
};

template <typename Object, typename Factory>
class Lazy
{
  private:
    Factory *factory;

  private:
    Object *object;

  private:
    std::mutex mutex;

  public:
    Lazy(Factory *_factory)
    {
        factory = _factory;
        object = 0;
    }

  public:
    Object *item()
    {
        if (object == 0)
        {
            std::lock_guard<std::mutex> lock(mutex);
            if (object == 0)
            {
                object = dynamic_cast<Object *>(factory->create());
            }
            return object;
        }
    };

    std::vector<marker::WritingUtensil *>
    fill(WUFactory &factory)
    {
        int size = 24;
        std::vector<marker::WritingUtensil *> ans(size, 0);
        for (int i = 0; i < size; ++i)
        {
            ans[i] = factory.create();
        }
    }

    typedef Lazy<marker::Pencil, PencilBuilder> LazyPencil;

    using namespace marker;

#include <memory>

    void drawLine(const Marker &marker)
    {
        marker.write();
    }

    typedef std::shared_ptr<marker::WritingUtensil> WUP;
    typedef std::shared_ptr<marker::Pencil> PP;
    typedef std::shared_ptr<marker::Marker> MP;
    typedef std::shared_ptr<marker::PencilMarker> PMP;
    int main()
    {
        graphics::IVec3 iv3;

        iv3[0] = 2;

        PencilBuilder pb;
        pb.setColor(Color::RED);
        std::vector<WritingUtensil *> redBox = fill(pb);

        std::vector<WritingUtensil *> redBox2 = redBox;

        LazyPencil lp(&pb);

        std::cout << "lazy:" << std::endl;
        lp.item()->write();
        lp.item()->write();

        std::shared_ptr<marker::WritingUtensil> dupPencil = lp.item()->clone();
        dupPencil->write();

        pb.setColor(Color::GREEN);
        std::vector<WritingUtensil *> greenBox = fill(pb);

        PencilMarker *greenPencilMarker = new PencilMarker(Color::GREEN);

        // BAD
        WritingUtensil *greenWritingUtensilBroken =
            (WritingUtensil *)greenPencilMarker;

        // GOOD
        WritingUtensil *greenWritingUtensilFixed =
            dynamic_cast<WritingUtensil *>(greenPencilMarker);

        delete greenPencilMarker;

        PMP pm(new PencilMarker(Color::RED));
        pm->setColor(Color::BLUE);
        pm->setCapped(false);
        pm->write();
        MP greenMarkerSP(new Marker(Color::GREEN));
        Marker *redMarkerPtr = new Marker(Color::RED);
        Marker blackMarker(Color::BLACK);
        // blackMarker.setCapped(false);
        redMarkerPtr->setCapped(false);
        greenMarkerSP->setCapped(false);
        drawLine(blackMarker);
        redMarkerPtr->write();
        greenMarkerSP->write();
        delete redMarkerPtr;
    }