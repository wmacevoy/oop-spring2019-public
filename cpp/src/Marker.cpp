#include "Marker.h"

#include <iostream>

namespace marker {
    
        Marker::Marker(Color _color)
          : color(_color), capped(true) 
        {
        } 

        Color Marker::getColor() const {
            return color;
        }
    
        bool Marker::isCapped() const {
            return capped;
        }
    
        void Marker::setCapped(bool _capped) {
            capped = _capped;
        }
        
        void Marker::draw() const {
            if (!isCapped()) {
                std::cout << "drawing in " << getColor() << std::endl;
            } else {
                throw BAD_MARKER_CAPPED_DRAW;
            }
        }

        Marker::~Marker() {
            std::cout << "destructing marker@" 
                        << ((void*) this) << std::endl; 
        }
        
        const BadMarkerState Marker::BAD_MARKER_CAPPED_DRAW("drawing with capped marker is bad");
} // namespace marker