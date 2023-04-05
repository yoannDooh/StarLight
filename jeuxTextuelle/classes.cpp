#include <iostream>
#include "document.h"
#include <string>
#include <QBuffer>
#include <filereadstream.h>
#include <cstdio>

class Character
{
  private:
  int pv{10};
  int endurance{};
  int intelligence{};
  int friendship{};
  std::string spriteEmplacement {}; //chemmin relatif fichier png sprite du perso
  std::string prenom {};
  std::string nom {};

  bool alive{true};


 public:
    //Getters
  int getPv()
  {
      return pv;
  }

  int getEndurance()
  {
      return endurance;
  }

  int getIntelligence()
  {
      return intelligence;
  }

  int getFriendship()
  {
      return friendship;
  }

  std::string getSpriteEmplacement()
  {
      return spriteEmplacement;
  }

  std::string getPrenom()
  {
      return prenom;
  }

  std::string getNom()
  {
      return nom;
  }

  //Setters

  int setPv(int x)
  {
    if ( x<0 || x>10)
      {  return 1;}

    pv=x;
    return 0;
  }

  int setEndurance(int x)
  {
    if ( x<0 || x>10)
      {  return 1;}

    endurance=x;
    return 0;
  }


  int setIntelligence(int x)
  {
    if ( x<0 || x>10)
      {  return 1;}

    intelligence=x;
    return 0;
  }

  int setFriendship(int x)
  {
    if ( x<0 || x>10)
      {  return 1;}

    friendship=x;
    return 0;
  }


  int setSpriteEmplacement(std::string x)
  {
    /** faut vérifier si le fichier existe pas localement
      {  return 1;}
    **/
    spriteEmplacement=x;
    return 0;
  }


  int setPrenom(std::string x)
  {
      prenom=x;
      return 0;
  }

  int setNom(std::string x)
  {
      nom=x;
      return 0;
  }



};


namespace varGeneral
{
    const int mainGroupSize {4}; // sans compter persso principal
}
/**
int main ()
{


return 0;
}
**/


