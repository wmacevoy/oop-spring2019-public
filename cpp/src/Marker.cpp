#include "Marker.h"

#include <iostream>

namespace marker {
    
        Marker::Marker(Color _color)
          : WritingUtensil(_color), capped(true) 
        {
            std::cout << "made " << getColor() << " marker @" << ((void*) this) << std::endl;
        } 
    
        bool Marker::isCapped() const {
            return capped;
        }
    
        void Marker::setCapped(bool _capped) {
            capped = _capped;
        }
        
        void Marker::write() const {
            if (!isCapped()) {
                std::cout << "drawing in " << getColor() << std::endl;
            } else {
                throw BAD_MARKER_CAPPED_DRAW;
            }
        }

        std::shared_ptr<WritingUtensil> Marker::clone() const {
            Marker *copy = new Marker(getColor());
            copy->setCapped(isCapped());
            return std::shared_ptr<WritingUtensil>(copy);
        }
        
        Marker::~Marker() {
            std::cout << "destructing marker@" 
                        << ((void*) this) << std::endl; 
        }
        
        const BadMarkerState Marker::BAD_MARKER_CAPPED_DRAW("drawing with capped marker is bad");
} // namespace marker