#include "PencilMarker.h"

#include <iostream>

namespace marker {
    
        PencilMarker::PencilMarker(Color _color)
          : WritingUtensil(_color), Pencil(_color), Marker(_color)
        {
            std::cout << "_color=" << _color << std::endl;
            std::cout << "made " << getColor() << " pencil-marker at " << (void*) (this) << std::endl;
        } 
    
        void PencilMarker::write() const {
            Pencil::write();
            Marker::write();
        }

        PencilMarker::~PencilMarker() {
            std::cout << "destructing pencil marker " << ((void*) this) << std::endl; 
        }
} // namespace markePencil(_color)