// Generated by dia2code
#ifndef ENGINE__ATTAQUEDISTANCE__H
#define ENGINE__ATTAQUEDISTANCE__H

#include "../state.h"
#include <vector>

namespace state {
  class Etat;
};
namespace engine {
  class Attaquer;
}

#include "Attaquer.h"

namespace engine {

  /// class AttaqueDistance - 
  class AttaqueDistance : public engine::Attaquer {
    // Operations
  public:
    void run (state::Etat* e, std::vector<int> params);
  };

};

#endif
