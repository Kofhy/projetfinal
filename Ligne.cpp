#include	"Ligne.h"

#include	<iostream>

Ligne::Ligne(int nbStick, int num)
{
  m_NbStick = nbStick;
  numLigne = num;
}

Ligne::~Ligne() {}



void		Ligne::setNbStick(int amount)
{
  m_NbStick = amount;
}

void		Ligne::rmNbStick(int amount)
{
  if (amount > m_NbStick)
    
    std::cout << "Il ne reste pas assez de sticks" << std::endl;
  else
    setNbStick(m_NbStick - amount);
}

void		Ligne::printLigne(void)
{
  int currentNb = m_NbStick;

  std::cout << "\n"
	    << numLigne
	    << ": ";
  
  while (currentNb > 0)
    {
      std::cout << "|";
      currentNb--;
    }
  std::cout << "\n" << std::endl;
}
