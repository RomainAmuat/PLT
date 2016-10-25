// Generated by dia2code
#ifndef ENGINE__REGLES__H
#define ENGINE__REGLES__H

#include "../state.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <vector>

namespace state {
  class Etat;
}

#include "state/Etat.h"

namespace engine {

  /// class Regles - 
  class Regles {
    // Operations
  public:
    bool peutDeplacer (state::Etat* e, int id, int newX, int newY);
    bool peutEntrerCombat (state::Etat* e, int id);
    bool peutChangerMap (state::Etat* e, int id);
    bool peutQuitterCombat (state::Etat* e, int id);
    bool peutAttaquer (state::Etat* e, int id);
    bool peutPasserTour (state::Etat* e, int id, sf::Clock clk);
    bool peutAccederMenu (state::Etat* e);
    bool peutAccederInfoPerso (state::Etat* e);
    bool peutAugmenterNiv (state::Etat* e, int id);
    int augmenterPM (state::Etat* e, int id);
    int augmenterPA (state::Etat* e, int id);
    int augmenterPV (state::Etat* e, int id);
    int augmenterForce (state::Etat* e, int id);
    std::vector<state::Personnage&> defMonstreCarte (state::Etat* e);
    int defTailleCarte (state::Etat* e);
    int defCarteSuiv (state::Etat* e);
  };

};

#endif
