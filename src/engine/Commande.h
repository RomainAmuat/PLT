// Generated by dia2code
#ifndef ENGINE__COMMANDE__H
#define ENGINE__COMMANDE__H

#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <vector>

namespace state {
  class Etat;
};
namespace engine {
  class Regles;
  class ListeCommandes;
  class Action;
}

#include "Regles.h"
#include "ListeCommandes.h"
#include "Action.h"

namespace engine {

  /// class Commande - 
  class Commande {
    // Associations
    // Attributes
  public:
    state::Etat* etat;
    std::string type;
    sf::Time temps;
    std::vector<int> params;
    int id;
    // Operations
  public:
    Commande (state::Etat* e, std::string type, sf::Time t, std::vector<int> params, int id);
    ~Commande ();
    void run ();
    std::string const getType ();
    void setType (std::string cmd);
    std::vector<int> getParams ();
    int getId ();
    std::string serialize (int epoque);
  };

};

#endif
