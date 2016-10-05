#include "state.hpp"
#include "Heros.h"

Heros::Heros (int i, int j, int exp) : Personnage (i, HEROS) {
    this->x=i;
    this->y=j;
    this->experience=exp;
}

bool Heros::isJoueur () {
	return true;
}

TypeID Heros::getTypeID () {
	return TypeID ();
}

int const Heros::getExp () {
	return this->experience;
}

void Heros::setExp (int const Exp) {
    this->experience=Exp;
}

void Heros::accepte (IVisiteur & v) {
    v.visiter(this);
}
