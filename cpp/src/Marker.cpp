#include "Marker.h"

#include <iostream>

namespace marker {
    
        Marker::Marker(Color _color) {
          color= _color;
          capped = true;
        } 

        Color Marker::getColor() {
            return color;
        }
    
        void Marker::setColor(Color _color) {
            color = _color;
        }
    
        bool Marker::isCapped() {
            return capped;
        }
    
        void Marker::setCapped(bool _capped) {
            capped = _capped;
        }
        
        void Marker::draw() {
            if (!isCapped()) {
                std::cout << "drawing in " << getColor() << std::endl;
            } else {
                throw BAD_MARKER_CAPPED_DRAW;
            }
        }
        
        BadMarkerState Marker::BAD_MARKER_CAPPED_DRAW("drawing with capped marker is bad");
} // namespace marker