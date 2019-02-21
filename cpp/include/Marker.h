#pragma once

#include "Color.h"
#include "BadMarkerState.h"

namespace marker {
    
    class Marker {
        private: bool capped;
        private: const Color color;
        public: Marker(Color _color);
        public: Color getColor();
        public: void setColor(Color _color);
        public: bool isCapped();
        public: void setCapped(bool _capped);
        public: void draw();
        public: static BadMarkerState BAD_MARKER_CAPPED_DRAW;
    };
}