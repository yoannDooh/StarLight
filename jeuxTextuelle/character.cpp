#include <iostream>
#include <string>
#include <filereadstream.h>
#include <cstdio>
#include "document.h"
#include "character.hpp"

int instantiateCharac()
{
    FILE *characFile = fopen ("C:\\Users\\YOANN\\Desktop\\Proggramation\\Projets\\Jeux textuelle\\jeuxTextuelle\\charac.json","r");
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
