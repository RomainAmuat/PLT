// Generated by dia2code
#ifndef STATE__VIDE__H
#define STATE__VIDE__H


namespace state {
  class IVisiteur;
  class Statique;
}

#include "TypeID.h"
#include "Statique.h"

namespace state {

  /// class Vide - 
  class Vide : public state::Statique {
    // Operations
  public:
    Vide (int i, int j);
    bool isAcces ();
    TypeID getTypeID ();
    void accepte (IVisiteur& v);
  };

};

#endif
