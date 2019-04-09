#pragma once

#include <iostream>

namespace marker {
enum Color {
    BLACK,
    RED,
    GREEN,
    BLUE,
    BROWN
};

std::ostream& operator<<(std::ostream &out, const Color &color);

} // namespace marker

