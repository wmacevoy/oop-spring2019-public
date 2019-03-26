#include "Marker.h"
#include "Pencil.h"
#include "PencilMarker.h"

using namespace marker;

#include <memory>

void drawLine(const Marker &marker) {
    marker.write();
}

typedef std::shared_ptr < marker::WritingUtensil > WUP;
typedef std::shared_ptr < marker::Pencil > PP;
typedef std::shared_ptr < marker::Marker > MP;
typedef std::shared_ptr < marker::PencilMarker > PMP;
int main() {
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