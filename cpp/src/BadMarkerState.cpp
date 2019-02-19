#include "BadMarkerState.h"

namespace marker {
    // std::string problem = "problem on line ";
    // problem.append(lineno);
    // BadMakerState bad(problem);

        BadMarkerState::BadMarkerState(const std::string &_problem) 
          : problem(_problem)
        {
        } 

        std::string BadMarkerState::getProblem() const {
            return problem;
        }
    
        void BadMarkerState::setProblem(const std::string &_problem) {
            problem = _problem;
        }

} // namespace marker