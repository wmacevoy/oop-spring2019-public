#include "Color.h"

namespace marker {
    std::ostream& operator<<(std::ostream &out, const Color &color) {
        switch(color) {
            case BLACK: out << "BLACK"; break;
            case RED: out << "RED"; break;
            case GREEN: out << "GREEN"; break;
            case BLUE: out << "BLUE"; break;
            case BROWN: out << "BROWN"; break;
            default:
                throw std::logic_error("missing color");
        }
        return out;
    }

}