// Generated by dia2code
#ifndef STATE__OBSERVABLE__H
#define STATE__OBSERVABLE__H

#include <vector>

namespace state {
  class Etat;
};
namespace render {
  class Observer;
}

#include "Etat.h"
#include "render/Observer.h"

namespace state {

  /// class Observable - 
  class Observable : public state::Etat {
    // Associations
    // Attributes
  public:
    std::vector<observer> observers;
    // Operations
  public:
    void notifyObserver ( );
    void registerObserver (observer obs);
  };

};

#endif