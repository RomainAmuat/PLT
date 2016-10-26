// Generated by dia2code
#ifndef STATE__MONSTRE__H
#define STATE__MONSTRE__H


namespace state {
  class IVisiteur;
  class Personnage;
}

#include "TypePersonnage.h"
#include "TypeID.h"
#include "Personnage.h"

namespace state {

  /// class Monstre - 
  class Monstre : public state::Personnage {
    // Operations
  public:
    Monstre (int i, int j, int nv);
    Monstre (int i, int j, int nv, TypePersonnage type);
    bool isJoueur ();
    TypeID getTypeID ();
    void accepte (IVisiteur& v);
  };

};

#endif
