#include	"Ligne.h"
#include	"Joueur.h"

#include	<iostream>
#include	<string>
#include	<cstdlib>
#include	<stdio.h>
#include	<time.h>
#include	<stdlib.h>


void		menu(void);





void		socket(void)
{
  std::cout << "EN COURS DE DEVELOPPEMENT, REPASSEZ PLUS TARD..." << std::endl;
}














void		standard(void)
{
  system("clear");

  std::string	nomJoueur1;
  std::string	nomJoueur2;

  std::cout << "Entrez le nom du premier joueur" << std::endl;
  std::getline(std::cin, nomJoueur1);
  Joueur	joueur1(nomJoueur1);
  
  system("clear");

  std::cout << "Le deuxième maintenant" << std::endl;
  std::getline(std::cin, nomJoueur2);
  Joueur	joueur2(nomJoueur2);

  system("clear");



  Ligne		ligne1(1, 1);
  Ligne		ligne2(3, 2);
  Ligne		ligne3(5, 3);
  Ligne		ligne4(7, 4);

  int		tempLigne;
  int		tempStick;
  int		joueurActuel;
  
  int		totalStick = ligne1.getNbStick() + ligne2.getNbStick()
    + ligne3.getNbStick() + ligne4.getNbStick();


  
  int		pileFace;

  srand(time(NULL));

  pileFace = rand() %2;

  if (pileFace == 0)
    {
      std::cout << nomJoueur1 + " est tiré au sort et commence la partie.\n"
		<< std::endl;
    }
  else
    {
      std::cout << nomJoueur2 + " est tiré au sort et commence la partie.\n"
		<< std::endl;
      
      std::cout << "---Tour de " + nomJoueur2 + "---\n" << std::endl;
      ligne1.printLigne();
      ligne2.printLigne();
      ligne3.printLigne();
      ligne4.printLigne();
      
      std::cout << "Sur quelle ligne enlever des bâtons ?" << std::endl;
      std::cin >> tempLigne;
      std::cout << "Combien de bâtons retirer ?" << std::endl;
      std::cin >> tempStick;
      if (tempLigne == 1)
	ligne1.rmNbStick(tempStick);
      if (tempLigne == 2)
	ligne2.rmNbStick(tempStick);
      if (tempLigne == 3)
	ligne3.rmNbStick(tempStick);
      if (tempLigne == 4)
	ligne4.rmNbStick(tempStick);
      
      ligne1.printLigne();
      ligne2.printLigne();
      ligne3.printLigne();
      ligne4.printLigne();
      
      joueurActuel = 2;
      
      totalStick = ligne1.getNbStick() + ligne2.getNbStick()
	+ ligne3.getNbStick() + ligne4.getNbStick();
      
      system("clear");
    }

  while (totalStick > 1)
    {
      std::cout << "---Tour de " + nomJoueur1 + "---\n" << std::endl;
      ligne1.printLigne();
      ligne2.printLigne();
      ligne3.printLigne();
      ligne4.printLigne();

      std::cout << "Sur quelle ligne enlever des bâtons ?" << std::endl;
      std::cin >> tempLigne;
      std::cout << "Combien de bâtons retirer ?" << std::endl;
      std::cin >> tempStick;
      if (tempLigne == 1)
	ligne1.rmNbStick(tempStick);
      if (tempLigne == 2)
	ligne2.rmNbStick(tempStick);
      if (tempLigne == 3)
	ligne3.rmNbStick(tempStick);
      if (tempLigne == 4)
	ligne4.rmNbStick(tempStick);
      
      ligne1.printLigne();
      ligne2.printLigne();
      ligne3.printLigne();
      ligne4.printLigne();

      joueurActuel = 1;

      totalStick = ligne1.getNbStick() + ligne2.getNbStick()
	+ ligne3.getNbStick() + ligne4.getNbStick();

      
      if (totalStick <= 1)
	break;

      system("clear");
      std::cout << "---Tour de " + nomJoueur2 + "---\n" << std::endl;
      ligne1.printLigne();
      ligne2.printLigne();
      ligne3.printLigne();
      ligne4.printLigne();

      std::cout << "Sur quelle ligne enlever des bâtons ?" << std::endl;
      std::cin >> tempLigne;
      std::cout << "Combien de bâtons retirer ?" << std::endl;
      std::cin >> tempStick;
      if (tempLigne == 1)
	ligne1.rmNbStick(tempStick);
      if (tempLigne == 2)
	ligne2.rmNbStick(tempStick);
      if (tempLigne == 3)
	ligne3.rmNbStick(tempStick);
      if (tempLigne == 4)
	ligne4.rmNbStick(tempStick);
      
      ligne1.printLigne();
      ligne2.printLigne();
      ligne3.printLigne();
      ligne4.printLigne();

      joueurActuel = 2;

      totalStick = ligne1.getNbStick() + ligne2.getNbStick()
	+ ligne3.getNbStick() + ligne4.getNbStick();
      
      system("clear");
      
      if (totalStick <= 1)
	break;
    }

  system("clear");
  
  if (joueurActuel == 1)
    std::cout << "---" + nomJoueur1 + " remporte la victoire !---" << std::endl;

  if (joueurActuel == 2)
    std::cout << "---" + nomJoueur2 + " remporte la victoire !---" << std::endl;
  

}


 void		pve(void)
{
  int		random;
  int		randomBIS;

  randomBIS = rand() % 2;
  
  random = rand() % 4 + 1;

  system("clear");

  std::string	nomJoueur;

  std::cout << "Entrez votre nom" << std::endl;
  std::getline(std::cin, nomJoueur);
  Joueur	joueur(nomJoueur);
  
  system("clear");

  Ligne		ligne1(1, 1);
  Ligne		ligne2(3, 2);
  Ligne		ligne3(5, 3);
  Ligne		ligne4(7, 4);

  int		tempLigne;
  int		tempStick;
  int		joueurActuel;
  
  int		totalStick = ligne1.getNbStick() + ligne2.getNbStick()
    + ligne3.getNbStick() + ligne4.getNbStick();

  
  int		pileFace;

  srand(time(NULL));

  pileFace = rand() %2;

  if (pileFace == 0)
    {
      std::cout << "Vous avez été tiré au sort pour commencer la parie !.\n"
		<< std::endl;
    }
  else
    {
      
      random = rand() % 4 + 1;

      if (randomBIS == 0)
	{
	  if (ligne3.getNbStick() > 0)
	    ligne3.rmNbStick(random);
	  else
	    if (ligne2.getNbStick() > 0)
	      ligne2.rmNbStick(random);
	    else
	      if (ligne1.getNbStick() > 0)
		ligne1.rmNbStick(random);
	      else
		ligne4.rmNbStick(random);
	}
      else
	{
	  if (ligne4.getNbStick() > 0)
	    ligne4.rmNbStick(random);
	  else
	    if (ligne1.getNbStick() > 0)
	      ligne1.rmNbStick(random);
	    else
	      if (ligne2.getNbStick() > 0)
		ligne2.rmNbStick(random);
	      else
		ligne3.rmNbStick(random);
	}

      system("clear");
      std::cout << "L'ordinateur a été tiré au sort pour commencer la partie." << std::endl;
    }

  while (totalStick > 1)
    {
      random = rand() % 3;
      random++;

      std::cout << "---A vous de jouer !---\n" << std::endl;
      ligne1.printLigne();
      ligne2.printLigne();
      ligne3.printLigne();
      ligne4.printLigne();

      std::cout << "Sur quelle ligne enlever des bâtons ?" << std::endl;
      std::cin >> tempLigne;
      std::cout << "Combien de bâtons retirer ?" << std::endl;
      std::cin >> tempStick;
      if (tempLigne == 1)
	ligne1.rmNbStick(tempStick);
      if (tempLigne == 2)
	ligne2.rmNbStick(tempStick);
      if (tempLigne == 3)
	ligne3.rmNbStick(tempStick);
      if (tempLigne == 4)
	ligne4.rmNbStick(tempStick);
      
      ligne1.printLigne();
      ligne2.printLigne();
      ligne3.printLigne();
      ligne4.printLigne();

      joueurActuel = 1;

      totalStick = ligne1.getNbStick() + ligne2.getNbStick()
	+ ligne3.getNbStick() + ligne4.getNbStick();

      
      if (totalStick <= 1)
	break;

      system("clear");
      
      randomBIS = rand() % 2;

      if (randomBIS == 0)
	{
	  if (ligne3.getNbStick() > 0)
	    ligne3.rmNbStick(random);
	  else
	    if (ligne2.getNbStick() > 0)
	      ligne2.rmNbStick(random);
	    else
	      if (ligne1.getNbStick() > 0)
		ligne1.rmNbStick(random);
	      else
		ligne4.rmNbStick(random);
	}
      else
	{
	  if (ligne4.getNbStick() > 0)
	    ligne4.rmNbStick(random);
	  else
	    if (ligne1.getNbStick() > 0)
	      ligne1.rmNbStick(random);
	    else
	      if (ligne2.getNbStick() > 0)
		ligne2.rmNbStick(random);
	      else
		ligne3.rmNbStick(random);
	}
      system("clear");
      
      joueurActuel = 2;

      totalStick = ligne1.getNbStick() + ligne2.getNbStick()
	+ ligne3.getNbStick() + ligne4.getNbStick();
      
      if (totalStick <= 1)
	break;
    }

  system("clear");
  
  if (joueurActuel == 1)
    std::cout << "---Bravo " + nomJoueur + ", vous avez gagné !---" << std::endl;

  if (joueurActuel == 2)
    std::cout << "---Désolé " + nomJoueur + ", vous avez perdu !---" << std::endl;
  

} 


void		fouras(void)
{
  system("clear");

  std::string toto;

  std::cout << "Easter egg -- l'enigme du pere fouras\n\nMon coup n'est pas fatal\nMeme si parfois il fait mal\nSouvent je suis dresse\nEt sent bon la maree\n\nQui suis-je ?" << std::endl;
  std::getline(std::cin, toto);
  if (toto == "phare breton")
    std::cout << "Bravo !" << std::endl;
  else
    std::cout << "Eh non ! La reponse etait un phare breton !" << std::endl;
}


void		rules(void)
{
  
  std::string		toto;
  int 	i;
  system("clear");
  std::cout << "Bienvenue !\nJeu simple à deux joueurs !\nChaque joueur choisit à chaque tour une ligne et retire autant de bâtons qu'il le souhaite.\nLe joueur qui retire le dernier bâton perd la partie !\n\nBonne chance !\n" << std::endl;

  std::cout << "Appuyez sur entrée pour revenir au menu principal..." << std::endl;
  
  std::getline(std::cin, toto);
  
  system("clear");
  menu();
  
}

void 		menu(void)
{
  std::string	choix = "0";

  system("clear");
  
	std::cout<<"----------\nJEU DE NIM\n----------\n" << std::endl;
	std::cout<<"1- Local PvP" << std::endl;
	std::cout<<"2- Local vs ordinateur" << std::endl;
	std::cout<<"3- En ligne vs joueur <-- !!NEW FEATURE!!" << std::endl;
	std::cout<<"4- Règles du jeu" << std::endl;
	std::getline(std::cin, choix);
	if ("1" == choix)
		standard();
	else 
	  if ("2" == choix)
	    pve();
	  else
	    if ("42" == choix)
	      fouras();
	    else
	      if ("3" == choix)
		socket();
	  else
	    rules();
	
	    
}

int 		main(void)
{
  menu();
  return (0);
}
