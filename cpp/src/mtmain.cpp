#include <thread>
#include <math.h>
#include <vector>
#include <memory>
#include <string>
#include <unistd.h>
#include "Pencil.h"

using namespace marker;

Pencil gPencil(Color::BLACK);

struct PencilPusher
{
    std::string name;
    std::thread *myThread;
    bool running;
    Pencil &pencil;
    PencilPusher(const std::string &_name, Pencil &_pencil)
        : name(_name), pencil(_pencil)
    {
        running = true;
        myThread = new std::thread(&PencilPusher::run, this);
    }
    ~PencilPusher()
    {
        running = false;
        myThread->join();
        delete myThread;
    }
    void run()
    {
        while (running)
        {
            switch (rand() % 3)
            {
            case 0:
                pencil.setColor(Color::RED);
                break;
            case 1:
                pencil.setColor(Color::GREEN);
                break;
            case 2:
                pencil.setColor(Color::BLUE);
                break;
            }

            pencil.write();

            usleep(rand() % 1000000);
        }
    }
};

int main(int argc, char *argv[])
{
    std::vector<std::shared_ptr<PencilPusher>> pushers;

    for (int i = 0; i < 10; ++i)
    {
        std::string name = "pusher # ";
        name.append(std::to_string(i));
        pushers.push_back(std::shared_ptr<PencilPusher>(
            new PencilPusher(name, gPencil)
        ));
    }
    sleep(10);
    return 0;
}