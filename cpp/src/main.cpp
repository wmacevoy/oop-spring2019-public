#include "Marker.h"

using namespace marker;

#include <memory>

void drawLine(const Marker &marker) {
    marker.write();
}

int main() {
    std::shared_ptr < Marker > greenMarkerSP(new Marker(Color::GREEN));
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