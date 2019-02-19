#pragma once

#include <string>

namespace marker {
    class BadMarkerState {
        private: std::string problem;
        public: BadMarkerState(const std::string &_problem);
        public: std::string getProblem() const;
        public: void setProblem(const std::string &_problem);
    };
} // namespace marker