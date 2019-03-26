#pragma once

#include "Color.h"
#include "BadMarkerState.h"
#include "Marker.h"
#include "Pencil.h"

namespace marker {
    
    class PencilMarker : public Pencil, public Marker {
        public: PencilMarker(Color _color);
        public: void write() const override;
        public: ~PencilMarker();
    };
}