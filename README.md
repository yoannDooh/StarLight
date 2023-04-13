# StarLight
Jeux textuelle en cours de développement avec interface graphique réalisé en C++ avec QT, utilise la librairie RapidJSON.

## Synopsis 
En 21XX, Johnson est envoyé en mission dans le vaisseau StarLight, composé de 25 astronautes dirigé par Kalpana Chawla. Cela fait 5 ans qu'ils réalisent des recherches scientifiques à travers l’espace et ils vont maintenant bientôt rentrée chez eux. En pleine conversation avec ses collègues l’alerte rouge retentit et lui et 4 autres membres à savoir :Anna Kikina, Pedro Pontes, Hans Schlegel et Jeanette Epps sont envoyés pour enquêter, mais tout ne se passe pas comme prévu, ils découvrent des racines extraterrestres et étranges parcourant tout le vaisseau et infectant ses amis les faisant perdre leur bon sens. Il va devoir tenter de résoudre ce mystère et sauver la situation.   



## Description du projet 

Ce projet a été l'occasion pour moi d'apprendre pour la première fois à réaliser une interface graphique. Il est également mon premier véritable projet en C++. J'ai souhaité le réaliser à l'aide du framework et de l'IDE QT et non un moteur 2D afin de ne pas avoir d'outils me facilitant trop le travail, pour apprendre et comprendre la programmation d'interfaces. C'est un jeu s'organisant sous un arbre de dialogue, les choix que font le joueur emmenène vers différement embranchements. J'ai fait le choix de contenir les dialogues dans des fichiers JSON, afin de faciliter l'ajouts et modificiation de répliques etc... Le fichier JSON des personnages contient les 6 personnages présents dans le jeu, les statisques que possède Johson et la commandante sont arbitraire et ne seront pas utilisé dans le programme. Les propriétes des personnages dans le JSON correspondent aux variables de la class Character. Chaque personnage a donc des pv, endurance, intelligence qui déterminent la réussite ou echef d'actions au sein du jeu. La variable niveau d'amitié, détermine le niveau de relation entre le joueur incarnant Johson et les 4 autres membres de l'équipe, cette variable est affecté par les différents choix de dialogue du joueur. Le fichier JSON des dialogues contient des objets avec pour propriétes la réplique, le personnage disant la réplique afin de le relier au bon sprite, et numero qui doit servir à la réplique à un événement si il y en a un suivant la réplique.

## Fonctionnalités à incorporer/ changements à faire
Le projet étant très loin d'être fini il reste de nombreuses fonctionnalités et changements à opérer sur le programme. 

1. L'organisation du projet nécessite d'être revu, des fonctions êtres écrite pour éviter des répétitions. Par exemple il serait nécessaire de programmer une fonction permettant de lire un fichier JSON, elle prendrait en argument un std::string contenant le chemin relatif du fichier et retournerai une référence au type rapidjson::Value.

2. Je n'ai malheureusement pas réussi à temps à intégrer les choix dans le jeu, par difficulté à me servir à du système de Layout de qt en conservant la mise en forme voulu. Je ne m'en suis donc pas servi mais n'ai pas réussi à temps à intégrer une fonction générant lors de l'exécution une nouvelle réplique à chaque fois que la touche entre est pressé.

