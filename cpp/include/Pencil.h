#pragma once

#include "Color.h"
#include "BadMarkerState.h"
#include "WritingUtensil.h"

namespace marker {
    
    class Pencil : public virtual WritingUtensil {
        public: Pencil(Color _color);
        public: void write() const override;
        public: std::shared_ptr<WritingUtensil> clone() const;        
        public: ~Pencil();
    };
}