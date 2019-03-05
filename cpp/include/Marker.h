#pragma once

#include "Color.h"
#include "BadMarkerState.h"
#include "WritingUtensil.h"

namespace marker {
    
    class Marker : public WritingUtensil {
        private: bool capped;
        public: Marker(Color _color);
        public: bool isCapped() const;
        public: void setCapped(bool _capped);
        public: void write() const override;
        public: ~Marker();
        public: static const BadMarkerState BAD_MARKER_CAPPED_DRAW;
    };
}