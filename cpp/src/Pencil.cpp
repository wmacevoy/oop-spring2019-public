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

        std::shared_ptr<WritingUtensil> Pencil::clone() const {
            Pencil *copy = new Pencil(getColor());
            return std::shared_ptr<WritingUtensil>(copy);
        }

        Pencil::~Pencil() {
            std::cout << "destructing pencil@" 
                        << ((void*) this) << std::endl; 
        }
} // namespace marker