#include "../engine.h"
#include "../state.h"
#include <vector>

using namespace state;
using namespace engine;
 
/* Params : 
0 -> nummero de la nouvelle map 
Toudoux : Clear les perso d'Etat, clear la grille
Regle renvoyant les monstres sous formes de std::vector<Personnages&>
*/
void ChangerMap::run (Etat* e, std::vector<int> params) {
  	// On commence par sauvegarder les personnages joueurs
	std::vector<Personnage *> persos;
  	for (int i = (e->getPerso()).size() - 1; i >= 0; --i) {
	    	Personnage& ptmp = e->getRefPersonnage(i);
	      	if (ptmp.getTypePersonnage() == TypePersonnage(HEROS) || ptmp.getTypePersonnage() == TypePersonnage(HEROINE)) {
			persos.push_back(&ptmp);  
		}
  	}
  
  	// Inserer ici la commande pour clear les personnages d'Etat
  
  	std::vector <Personnage *> pmonstre;
	// Inserer ic la commande pour obtenir la liste de monstre
	
	for (auto d : pmonstre) 
		persos.push_back (d);
  
	for (int i = 0; i < persos.size(); ++i) {
		// Inserer ici la commande pour ajouter un perso à Etat avec un passage par référence
	}
  	
  	e->setMapActuel(params[0]);
}