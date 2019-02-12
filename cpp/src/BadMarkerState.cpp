#include "BadMarkerState.h"

namespace marker {
    
        BadMarkerState::BadMarkerState(std::string _problem) {
            problem = _problem;
        } 

        std::string BadMarkerState::getProblem() {
            return problem;
        }
    
        void BadMarkerState::setProblem(std::string _problem) {
            problem = _problem;
        }

} // namespace marker