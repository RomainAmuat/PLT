// Generated by dia2code
#ifndef HEROS__H
#define HEROS__H

/// class Heros - 
class Heros : public Personnage {
  // Attributes
protected:
  int experience;
  // Operations
public:
  Heros (int i, int j, int exp);
  bool isJoueur ();
  TypeID getTypeID ();
  int const getExp ();
  void setExp (int const Exp);
  void accepte (IVisiteur& v);
};

#endif
