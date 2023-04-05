#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "document.h"
#include "repliqueWidgetForm.h"
#include "character.hpp"
#include <filereadstream.h>
#include <iostream>
#include <QFile>
#include <QString>
#include <QLabel>
#include <windows.h>
#include <QLayout>




namespace general
{

    int actualSequence {};
    int actualReplique {};
    int sequenceRepliqueNb {2};
    std::array<QLabel*,2> actualRepliqueLabelList ;

}


void getQLabelList (QObjectList repliqueWidgetList)
{
    for (int count{}; count<2;++count) //parce que 2 label par réplique (sprite et le texte)
    {
        general::actualRepliqueLabelList[count] = qobject_cast<QLabel*>(repliqueWidgetList[count]);
        qDebug() << general::actualRepliqueLabelList[count];
    }
}


int setRepliqueWidget( std::array<QLabel*,2> QLabelList)
{
    instantiateCharac();

    FILE *dialogueFile = fopen ("..\\jeuxTextuelle\\dialogue.json","r");
    if (dialogueFile == nullptr)
    {
         perror("erreur ouverture fichier :  ");
         return 1;
    }

    char buffer[65536];
    rapidjson::FileReadStream fileStream (dialogueFile,buffer,sizeof(buffer) );

    rapidjson::Document doc;
    doc.ParseStream(fileStream);

    if (doc.HasParseError()) {
          std::cerr << "Erreur parse fichier JSON"
                    << std::endl;
          fclose(dialogueFile);
          return 1;
      }

    assert(doc.IsArray());
    assert(doc[general::actualSequence].IsArray());

    general::sequenceRepliqueNb = doc[general::actualSequence].Size();

    if ( general::actualReplique > ( doc[general::actualSequence].Size() )-1 )
    {
       general::actualReplique = 0;
       ++general::actualSequence;
    }

    rapidjson::Value& jsonReplique = doc[general::actualSequence][general::actualReplique];


    QString repliqueStr;
    QPixmap repliqueSprite;

    repliqueStr = jsonReplique["replique"].GetString();


    for (int count{}; count<varGeneral::mainGroupSize; ++count)
    {
      if (varGeneral::mainGroupArray[count].getPrenom() ==  jsonReplique["charac"].GetString() )
      {
        const std::string &spritePath {varGeneral::mainGroupArray[count].getSpriteEmplacement()};
        repliqueSprite = QString::fromStdString(spritePath) ;

      }
    }

    QLabelList[0]->setPixmap(repliqueSprite);
    QLabelList[1]->setText(repliqueStr);
    QLabelList[1]->setAlignment(Qt::AlignLeft);


 fclose(dialogueFile);
}

void generateRepliqueWidget(QFrame *QParent)
// fonction à finir d'écrire
{     
    repliqueWidgetForm *repliqueWidget = new repliqueWidgetForm ;
    repliqueWidget->setParent(QParent);
    repliqueWidget->setGeometry(0,240,740,220);
}


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(1100,700);



    QFile styleFile( ":/mainWindowStyleSheet.qss" );
    styleFile.open( QFile::ReadOnly );
    this->setStyleSheet( QString::fromLatin1( styleFile.readAll() ) );
    styleFile.close();

    QObject *centralWidget =   ui->centralwidget ;


    QObjectList repliqueWidgetList = ui->textContainer->children();



    while (general::actualReplique<general::sequenceRepliqueNb)
    {
        for (int count{}; count<2; ++count)
        {
         getQLabelList(repliqueWidgetList[count]->children() );
         qDebug() << general::actualRepliqueLabelList[0];
         setRepliqueWidget(general::actualRepliqueLabelList) ;
         ++general::actualReplique;
        }

    }


/**

    qDebug() << repliqueWidgetList.size();
    qDebug() << repliqueWidgetList;

    getQLabelList(repliqueWidgetList);

    setRepliqueWidget(general::actualRepliqueLabelList);

    qDebug() << general::actualRepliqueLabelList[0]->pixmap();


    QString str = QString::fromStdString( varGeneral::mainGroupArray[3].getSpriteEmplacement() );
    qDebug() <<str;
**/



}
MainWindow::~MainWindow()
{




    delete ui;


}


