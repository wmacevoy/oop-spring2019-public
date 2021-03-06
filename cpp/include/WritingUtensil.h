#pragma once
#include <memory>
#include "Color.h"

namespace marker {
    class WritingUtensil {
        public: WritingUtensil(Color color=Color::BLACK);

        public: virtual Color getColor() const;
        public: virtual void setColor(Color color);
        public: virtual void write() const=0;
        virtual std::shared_ptr<WritingUtensil> clone() const = 0;        
        public: virtual ~WritingUtensil();

        private: Color color;
    };

}