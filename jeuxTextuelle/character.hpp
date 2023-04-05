#ifndef CHARACTER_H
#define CHARACTER_H
#include <array>


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
    const int mainGroupSize {6}; // nombre de persso dans le json
    std::array <Character,mainGroupSize> mainGroupArray ;

}

int instantiateCharac()
{
    FILE *characFile = fopen ("..\\jeuxTextuelle\\charac.json","r");
    if (characFile == nullptr)
    {
         perror("erreur ouverture fichier :  ");
         return 1;
    }

    char buffer[65536]; //
    rapidjson::FileReadStream fileStream (characFile,buffer,sizeof(buffer) );

    rapidjson::Document doc;
    doc.ParseStream(fileStream);



    if (doc.HasParseError()) {
          std::cerr << "Erreur parse fichier JSON"
                    << std::endl;
          fclose(characFile);
          return 1;
      }

    rapidjson::Value& mainGroup = doc["mainGroup"];


    assert(mainGroup.IsArray());






    for (rapidjson::SizeType count1{} ; count1 < varGeneral::mainGroupSize; count1++)
    {

        varGeneral::mainGroupArray[count1].setEndurance( mainGroup[count1]["endurance"].GetInt() );
        varGeneral::mainGroupArray[count1].setIntelligence( mainGroup[count1]["intelligence"].GetInt() );
        varGeneral::mainGroupArray[count1].setFriendship( mainGroup[count1]["friendship"].GetInt() );
        varGeneral::mainGroupArray[count1].setSpriteEmplacement( mainGroup[count1]["spriteEmplacement"].GetString() );
        varGeneral::mainGroupArray[count1].setPrenom( mainGroup[count1]["prenom"].GetString() );
        varGeneral::mainGroupArray[count1].setNom( mainGroup[count1]["nom"].GetString() );
        //Prenez moi Paris 8 s’il vous plaît


    }


    for (rapidjson::SizeType count1{} ; count1 < varGeneral::mainGroupSize; count1++)
    {

        std::cout<<  varGeneral::mainGroupArray[count1].getEndurance() << ' ';
        std::cout<<  varGeneral::mainGroupArray[count1].getIntelligence() << ' ';
        std::cout<<  varGeneral::mainGroupArray[count1].getFriendship() << ' ';
        std::cout<<  varGeneral::mainGroupArray[count1].getPrenom() << ' ';
        std::cout<<  varGeneral::mainGroupArray[count1].getNom() << ' ';
        std::cout<<  varGeneral::mainGroupArray[count1].getSpriteEmplacement() << ' ';
        std::cout<<'\n';



    }



fclose(characFile);
return 0;
}


#endif // CHARACTER_H
