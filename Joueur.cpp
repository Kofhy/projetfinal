#include <iostream>
#include "Joueur.h"

Joueur::Joueur(std::string nom)
{
	m_nom = nom;

	std::cout << m_nom << " entre dans la partie."
		  << std::endl;
}

Joueur::~Joueur() {}


Joueur& Joueur::setNom(std::string nom)
{
	m_nom = nom;
	return(*this);
}
