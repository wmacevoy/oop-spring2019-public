#include "WritingUtensil.h"

namespace marker {
   Color WritingUtensil::getColor() const {
       return color;
   }

   WritingUtensil::WritingUtensil(Color _color)
    : color(_color) 
    {

    }
    
    WritingUtensil::~WritingUtensil() {
        
    }
}