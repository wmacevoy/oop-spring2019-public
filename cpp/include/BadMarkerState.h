#pragma once

#include <string>

namespace marker {
    class BadMarkerState {
        private: std::string problem;
        public: BadMarkerState(std::string _problem);
        public: std::string getProblem();
        public: void setProblem(std::string _problem);
    };
} // namespace marker