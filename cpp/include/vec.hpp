#pragma once

namespace graphics {
    template <typename T,int N> class Vec {
    private: T data[N];
    public: const T& operator[](int i) const {
        return data[i];
    }

    public: T& operator[](int i) {
        return data[i];
    }

    };

    typedef Vec<int,3> IVec3;
    typedef Vec<float,3> FVec3;

    typedef Vec<int,2> IVec2;
    typedef Vec<float,2> FVec2;
}