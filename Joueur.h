#ifndef	JOUEUR_H_
#define JOUEUR_H_
#include <string>

class Joueur
{
	private:
	std::string m_nom;

	



	public:
		
		Joueur(std::string nom);

		~Joueur();

		std::string getNom(void) const { return (m_nom);};

		Joueur& setNom(std::string nom);

		
};

#endif
