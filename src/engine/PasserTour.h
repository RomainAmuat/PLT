// Generated by dia2code
#ifndef ENGINE__PASSERTOUR__H
#define ENGINE__PASSERTOUR__H

#include "../state.h"
#include <vector>

namespace state {
  class Etat;
};
namespace engine {
  class Action;
}

#include "Action.h"

namespace engine {

  /// class PasserTour - 
  class PasserTour : public engine::Action {
    // Operations
  public:
    void run (state::Etat* e, std::vector<int> params);
  };

};

#endif
