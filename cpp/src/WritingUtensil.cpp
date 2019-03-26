#include "WritingUtensil.h"

#include <iostream>

namespace marker {
   Color WritingUtensil::getColor() const {
       return color;
   }

   void WritingUtensil::setColor(Color _color) {
       color = _color;
   }

   WritingUtensil::WritingUtensil(Color _color)
    : color(_color) 
    {
        std::cout << "made wu at " << (void*) (this) << std::endl;
    }
    
    WritingUtensil::~WritingUtensil() {
        
    }
}