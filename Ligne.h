#ifndef		LIGNE_H_
#define		LIGNE_H_

class		Ligne
{
 private:
  int		m_NbStick;
  int		numLigne;
  
 public:
  Ligne(int nbStick, int num);
  ~Ligne();

  void		setNbStick(int amount);
  int		getNbStick(void) {return (m_NbStick);}
  void		rmNbStick(int amount);
  void		printLigne(void);
  int		getNumLigne(void) {return (numLigne);}
};

#endif
