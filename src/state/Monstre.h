// Generated by dia2code
#ifndef MONSTRE__H
#define MONSTRE__H

/// class Monstre - 
class Monstre : public Personnage {
  // Operations
public:
  Monstre (int i, int j, int nv);
  bool isJoueur ();
  TypeID getTypeID ();
  void accepte (IVisiteur& v);
};

#endif
