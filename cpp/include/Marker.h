#pragma once

#include "Color.h"
#include "BadMarkerState.h"

namespace marker {
    
    class Marker {
        private: const Color color;
        private: bool capped;
        public: Marker(Color _color);
        public: Color getColor() const;
        public: bool isCapped() const;
        public: void setCapped(bool _capped);
        public: void draw() const;
        public: ~Marker();
        public: static const BadMarkerState BAD_MARKER_CAPPED_DRAW;
    };
}