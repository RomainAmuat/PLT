// Generated by dia2code
#ifndef STATE__ETAT__H
#define STATE__ETAT__H

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

namespace state {
  class ListeElements;
  class GrilleElements;
  class Combat;
  class Visiteur;
  class Personnage;
  class Statique;
  class Heros;
  class Observable;
  class IVisiteur;
}

#include "ListeElements.h"
#include "GrilleElements.h"
#include "Combat.h"
#include "Visiteur.h"
#include "TypeID.h"
#include "Observable.h"
#include "IVisiteur.h"

namespace state {

  /// class Etat - 
  class Etat : public state::Observable {
    // Associations
    // Attributes
  protected:
    ListeElements personnages;
    GrilleElements grille;
    Combat combat;
    bool enCombat;
    Visiteur visiteur;
    int mapActuel;
    // Operations
  public:
    Etat ();
    ~Etat ();
    TypeID getStatutGrille (int i, int j);
    Personnage& getRefPersonnage (int n);
    int getIdPersonnage (int i, int j);
    void loadGrille (int n);
    GrilleElements& getGrille ();
    bool getEnCombat ();
    void setEnCombat (bool b);
    void rajouterPerso (char e);
    void enleverPerso (int i);
    Combat& getRefCombat ();
    int  getMapActuel ();
    void setMapActuel (int i);
    ListeElements& getPerso ();
    int getPersoSize ();
    int getGrilleSize ();
    Statique& getTile (int i);
    Heros& getRefHeros (int id);
    sf::Vector2f getGrilleCoord (int x, int y);
    sf::Vector2f getCoordTile (int x, int y);
    sf::Vector2f getGrilleTile (int id);
    int getIdTile (int i, int j);
    void clearPersos ();
    void clearGrille ();
    void addPerso (Personnage * p);
    void notifyObserver ();
  };

};

#endif
