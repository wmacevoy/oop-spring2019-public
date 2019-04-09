#include "Pencil.h"

#include <iostream>

namespace marker {
    
        Pencil::Pencil(Color _color)
          : WritingUtensil(_color)
        {
            std::cout << "made " << getColor() << " pencil at " << (void*) (this) << std::endl;
        } 
        
        void Pencil::write() const {
            std::cout << "sketching in " << getColor() << std::endl;
        }

        Pencil::~Pencil() {
            std::cout << "destructing pencil@" 
                        << ((void*) this) << std::endl; 
        }
} // namespace marker