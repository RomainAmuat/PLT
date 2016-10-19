#include "RenduPerso.h"
#include <iostream>

/* Temps en milliseconde durant lequel un sprite sera affiche */
#define TEMPS_SPRITE 500
/* Nombre de sprite dans une periode complete. Ne prend pas en compte le sprite a l'arret */
#define NB_SPRITE 2

using namespace render;
using namespace state;

int valeurEntiere (float a) {
	if (a >= 0) {
		int i = 0;
		while (i < a)
			i++;
		if (i == a) {
			return a;
		}
		else {
			return i-1;
		}
	}
	else {
		return 0;
	}
}

void RenduPerso::dessin (sf::RenderWindow& w, state::Etat* e, int id, sf::Clock& cl, sf::RenderStates rs){
	int nb_perso = (e->getPerso()).size();
	std::cout << "RenduPerso.cpp : Lancement du renduPerso. Il y a " << nb_perso << " elements a afficher" << std::endl;

	vertices.clear();
	vertices.setPrimitiveType(sf::Quads);
	vertices.resize(nb_perso * 4);
	
	std::cout << "RenduPerso.cpp : On a cree, redimensionner et redefinit le VertexArray" << std::endl;

	for (int i = 0; i < nb_perso; ++i) {
		Personnage& p = (e->getRefPersonnage(i));
		int h_sprite = 0;
		int l_sprite = 0;
		int x_sprite = p.getX();
		int y_sprite = p.getY();

		sf::Vertex* quad = &vertices[i];

		int tmpDeplacement = p.getTimer();
		bool enDeplacement = p.getEnDeplacement();
		Direction dir = p.getDirection();
		sf::Time t = cl.getElapsedTime();
		TypePersonnage tp = p.getTypePersonnage();

		int spr_hauteur = 3;
		int spr_longueur = 0;

		if (dir == SUD)
			spr_hauteur = 0;
		else if (dir == EST)
			spr_hauteur = 1;
		else if (dir == OUEST)
			spr_hauteur = 2;

		spr_longueur = valeurEntiere((t.asMilliseconds() % (NB_SPRITE * TEMPS_SPRITE)) / TEMPS_SPRITE);
		std::cout << "RenduPerso.cpp : On a obtenu les infos necessaires au choix de la texture" << std::endl;

		switch (tp) {
			case HEROS:
				quad[0].texCoords = sf::Vector2f(80,190);
				quad[1].texCoords = sf::Vector2f(130,190);
				quad[2].texCoords = sf::Vector2f(80,140);
				quad[3].texCoords = sf::Vector2f(130,140);
				h_sprite = 25;
				l_sprite = 25;
				std::cout << "RenduPerso.cpp : On a defini les texCoords" << std::endl;
			break;

			case HEROINE:
				quad[0].texCoords = sf::Vector2f(711,0);
				quad[1].texCoords = sf::Vector2f(0,0);
				quad[2].texCoords = sf::Vector2f(0,0);
				quad[3].texCoords = sf::Vector2f(0,0);
				h_sprite = 32;
				l_sprite = 32;
			break;

			case MONSTRE1:
				quad[0].texCoords = sf::Vector2f(711,0);
				quad[1].texCoords = sf::Vector2f(0,0);
				quad[2].texCoords = sf::Vector2f(0,0);
				quad[3].texCoords = sf::Vector2f(0,0);
				h_sprite = 32;
				l_sprite = 32;
			break;

			case MONSTRE2:
				quad[0].texCoords = sf::Vector2f(711,0);
				quad[1].texCoords = sf::Vector2f(0,0);
				quad[2].texCoords = sf::Vector2f(0,0);
				quad[3].texCoords = sf::Vector2f(0,0);
				h_sprite = 32;
				l_sprite = 32;
			break;

			case MONSTRE3:
				quad[0].texCoords = sf::Vector2f(711,0);
				quad[1].texCoords = sf::Vector2f(0,0);
				quad[2].texCoords = sf::Vector2f(0,0);
				quad[3].texCoords = sf::Vector2f(0,0);
				h_sprite = 32;
				l_sprite = 32;
			break;

			case MONSTRE4:
				quad[0].texCoords = sf::Vector2f(711,0);
				quad[1].texCoords = sf::Vector2f(0,0);
				quad[2].texCoords = sf::Vector2f(0,0);
				quad[3].texCoords = sf::Vector2f(0,0);
				h_sprite = 32;
				l_sprite = 32;
			break;

			case BOSS:
				quad[0].texCoords = sf::Vector2f(711,0);
				quad[1].texCoords = sf::Vector2f(0,0);
				quad[2].texCoords = sf::Vector2f(0,0);
				quad[3].texCoords = sf::Vector2f(0,0);
				h_sprite = 32;
				l_sprite = 32;
			break;
		}	  
              	
		quad[0].position = sf::Vector2f(x_sprite - l_sprite, y_sprite+h_sprite);
                quad[1].position = sf::Vector2f(x_sprite + l_sprite, y_sprite+h_sprite);
                quad[2].position = sf::Vector2f(x_sprite - l_sprite, y_sprite-h_sprite);
                quad[3].position = sf::Vector2f(x_sprite + l_sprite, y_sprite-h_sprite);
		std::cout << "RenduPerso.cpp : On a defini les positions des Vertex" << std::endl;
	} 
	rs.texture = &tileset;
	std::cout << "RenduPerso.cpp : On affiche ..." << std::endl;
	w.draw(vertices,rs);
	std::cout << "RenduPerso.cpp : On a affiche !" << std::endl;
}

RenduPerso::RenduPerso () {
	tileset.loadFromFile("res/Textures/heros/lpcfemaleplatepreview2.png");
	vertices.setPrimitiveType(sf::Quads);
}

RenduPerso::~RenduPerso () {
}