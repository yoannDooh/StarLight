/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *statsContainer;
    QLabel *statLabel;
    QFrame *frame;
    QWidget *charac_1;
    QLabel *sprite;
    QLabel *label_2;
    QFrame *pvFrame_3;
    QLabel *pvJauge_13;
    QLabel *pvLabel_12;
    QFrame *pvFrame_2;
    QLabel *pvJauge_12;
    QLabel *pvLabel_10;
    QFrame *pvFrame;
    QLabel *pvJauge;
    QLabel *pvLabel;
    QWidget *charac_2;
    QLabel *sprite_3;
    QLabel *label_4;
    QFrame *pvFrame_7;
    QLabel *pvJauge_16;
    QLabel *pvLabel_16;
    QFrame *pvFrame_8;
    QLabel *pvJauge_17;
    QLabel *pvLabel_17;
    QFrame *pvFrame_9;
    QLabel *pvJauge_18;
    QLabel *pvLabel_18;
    QWidget *charac_3;
    QLabel *sprite_5;
    QLabel *label_6;
    QFrame *pvFrame_13;
    QLabel *pvJauge_22;
    QLabel *pvLabel_22;
    QFrame *pvFrame_14;
    QLabel *pvJauge_23;
    QLabel *pvLabel_23;
    QFrame *pvFrame_15;
    QLabel *pvJauge_24;
    QLabel *pvLabel_24;
    QWidget *charac_4;
    QLabel *sprite_6;
    QLabel *label_7;
    QFrame *pvFrame_16;
    QLabel *pvJauge_25;
    QLabel *pvLabel_25;
    QFrame *pvFrame_17;
    QLabel *pvJauge_26;
    QLabel *pvLabel_26;
    QFrame *pvFrame_18;
    QLabel *pvJauge_27;
    QLabel *pvLabel_27;
    QFrame *textContainer;
    QWidget *repliqueWidget_1;
    QLabel *speakCharac_1;
    QLabel *replique_1;
    QWidget *repliqueWidget_2;
    QLabel *speakCharac_7;
    QLabel *replique_7;
    QWidget *Choices;
    QHBoxLayout *horizontalLayout;
    QLabel *choix3;
    QLabel *choix1;
    QLabel *choix2;
    QLabel *choix4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1100, 700);
        MainWindow->setMaximumSize(QSize(1100, 800));
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 26, 28);\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setLayoutDirection(Qt::LeftToRight);
        centralwidget->setAutoFillBackground(false);
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        statsContainer = new QFrame(centralwidget);
        statsContainer->setObjectName("statsContainer");
        statsContainer->setGeometry(QRect(0, 0, 300, 700));
        statsContainer->setMaximumSize(QSize(400, 16777215));
        statsContainer->setAcceptDrops(false);
        statsContainer->setStyleSheet(QString::fromUtf8("background-color: rgb(18, 19, 21);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-color: rgb(255, 251, 252);\n"
"\n"
"\n"
""));
        statsContainer->setFrameShape(QFrame::StyledPanel);
        statsContainer->setFrameShadow(QFrame::Raised);
        statLabel = new QLabel(statsContainer);
        statLabel->setObjectName("statLabel");
        statLabel->setGeometry(QRect(90, 9, 120, 41));
        frame = new QFrame(statsContainer);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 60, 300, 641));
        frame->setSizeIncrement(QSize(400, 0));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        charac_1 = new QWidget(frame);
        charac_1->setObjectName("charac_1");
        charac_1->setGeometry(QRect(0, 0, 300, 150));
        sprite = new QLabel(charac_1);
        sprite->setObjectName("sprite");
        sprite->setGeometry(QRect(0, 0, 80, 100));
        sprite->setPixmap(QPixmap(QString::fromUtf8(":/charac/ressources/images/sprites/charac/Jeanette Epps.png")));
        sprite->setScaledContents(true);
        sprite->setWordWrap(false);
        sprite->setOpenExternalLinks(false);
        label_2 = new QLabel(charac_1);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 0, 111, 30));
        pvFrame_3 = new QFrame(charac_1);
        pvFrame_3->setObjectName("pvFrame_3");
        pvFrame_3->setGeometry(QRect(90, 40, 90, 49));
        pvFrame_3->setStyleSheet(QString::fromUtf8("border: 1px;"));
        pvFrame_3->setFrameShape(QFrame::StyledPanel);
        pvFrame_3->setFrameShadow(QFrame::Raised);
        pvJauge_13 = new QLabel(pvFrame_3);
        pvJauge_13->setObjectName("pvJauge_13");
        pvJauge_13->setGeometry(QRect(15, 24, 60, 25));
        pvJauge_13->setStyleSheet(QString::fromUtf8("border-style: hidden\n"
""));
        pvJauge_13->setPixmap(QPixmap(QString::fromUtf8(":/jauges/intelligence/ressources/images/sprites/gauges/Intelligence/8.svg")));
        pvJauge_13->setScaledContents(true);
        pvLabel_12 = new QLabel(pvFrame_3);
        pvLabel_12->setObjectName("pvLabel_12");
        pvLabel_12->setGeometry(QRect(0, 0, 90, 16));
        pvLabel_12->setStyleSheet(QString::fromUtf8("border-style: hidden;\n"
""));
        pvFrame_2 = new QFrame(charac_1);
        pvFrame_2->setObjectName("pvFrame_2");
        pvFrame_2->setGeometry(QRect(190, 40, 90, 49));
        pvFrame_2->setStyleSheet(QString::fromUtf8("border: 1px;"));
        pvFrame_2->setFrameShape(QFrame::StyledPanel);
        pvFrame_2->setFrameShadow(QFrame::Raised);
        pvJauge_12 = new QLabel(pvFrame_2);
        pvJauge_12->setObjectName("pvJauge_12");
        pvJauge_12->setGeometry(QRect(15, 24, 60, 25));
        pvJauge_12->setStyleSheet(QString::fromUtf8("border-style: hidden\n"
""));
        pvJauge_12->setPixmap(QPixmap(QString::fromUtf8(":/jauges/endurance/ressources/images/sprites/gauges/Endurance/6.svg")));
        pvJauge_12->setScaledContents(true);
        pvLabel_10 = new QLabel(pvFrame_2);
        pvLabel_10->setObjectName("pvLabel_10");
        pvLabel_10->setGeometry(QRect(5, 0, 80, 16));
        pvLabel_10->setStyleSheet(QString::fromUtf8("border-style: hidden;\n"
""));
        pvFrame = new QFrame(charac_1);
        pvFrame->setObjectName("pvFrame");
        pvFrame->setGeometry(QRect(135, 90, 90, 49));
        pvFrame->setStyleSheet(QString::fromUtf8("border: 1px;"));
        pvFrame->setFrameShape(QFrame::StyledPanel);
        pvFrame->setFrameShadow(QFrame::Raised);
        pvJauge = new QLabel(pvFrame);
        pvJauge->setObjectName("pvJauge");
        pvJauge->setGeometry(QRect(15, 24, 60, 25));
        pvJauge->setStyleSheet(QString::fromUtf8("border-style: hidden\n"
""));
        pvJauge->setPixmap(QPixmap(QString::fromUtf8(":/jauges/pv/ressources/images/sprites/gauges/Vie/10.svg")));
        pvJauge->setScaledContents(true);
        pvLabel = new QLabel(pvFrame);
        pvLabel->setObjectName("pvLabel");
        pvLabel->setGeometry(QRect(35, 0, 21, 16));
        pvLabel->setStyleSheet(QString::fromUtf8("border-style: hidden;\n"
""));
        charac_2 = new QWidget(frame);
        charac_2->setObjectName("charac_2");
        charac_2->setGeometry(QRect(0, 160, 300, 150));
        sprite_3 = new QLabel(charac_2);
        sprite_3->setObjectName("sprite_3");
        sprite_3->setGeometry(QRect(0, 0, 80, 100));
        sprite_3->setPixmap(QPixmap(QString::fromUtf8(":/charac/ressources/images/sprites/charac/Hans Schlegel.png")));
        sprite_3->setScaledContents(true);
        sprite_3->setWordWrap(false);
        sprite_3->setOpenExternalLinks(false);
        label_4 = new QLabel(charac_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(90, 0, 111, 30));
        pvFrame_7 = new QFrame(charac_2);
        pvFrame_7->setObjectName("pvFrame_7");
        pvFrame_7->setGeometry(QRect(90, 40, 90, 49));
        pvFrame_7->setStyleSheet(QString::fromUtf8("border: 1px;"));
        pvFrame_7->setFrameShape(QFrame::StyledPanel);
        pvFrame_7->setFrameShadow(QFrame::Raised);
        pvJauge_16 = new QLabel(pvFrame_7);
        pvJauge_16->setObjectName("pvJauge_16");
        pvJauge_16->setGeometry(QRect(15, 24, 60, 25));
        pvJauge_16->setStyleSheet(QString::fromUtf8("border-style: hidden\n"
""));
        pvJauge_16->setPixmap(QPixmap(QString::fromUtf8(":/jauges/intelligence/ressources/images/sprites/gauges/Intelligence/5.svg")));
        pvJauge_16->setScaledContents(true);
        pvLabel_16 = new QLabel(pvFrame_7);
        pvLabel_16->setObjectName("pvLabel_16");
        pvLabel_16->setGeometry(QRect(0, 0, 90, 16));
        pvLabel_16->setStyleSheet(QString::fromUtf8("border-style: hidden;\n"
""));
        pvFrame_8 = new QFrame(charac_2);
        pvFrame_8->setObjectName("pvFrame_8");
        pvFrame_8->setGeometry(QRect(190, 40, 90, 49));
        pvFrame_8->setStyleSheet(QString::fromUtf8("border: 1px;"));
        pvFrame_8->setFrameShape(QFrame::StyledPanel);
        pvFrame_8->setFrameShadow(QFrame::Raised);
        pvJauge_17 = new QLabel(pvFrame_8);
        pvJauge_17->setObjectName("pvJauge_17");
        pvJauge_17->setGeometry(QRect(15, 24, 60, 25));
        pvJauge_17->setStyleSheet(QString::fromUtf8("border-style: hidden\n"
""));
        pvJauge_17->setPixmap(QPixmap(QString::fromUtf8(":/jauges/endurance/ressources/images/sprites/gauges/Endurance/7.svg")));
        pvJauge_17->setScaledContents(true);
        pvLabel_17 = new QLabel(pvFrame_8);
        pvLabel_17->setObjectName("pvLabel_17");
        pvLabel_17->setGeometry(QRect(5, 0, 80, 16));
        pvLabel_17->setStyleSheet(QString::fromUtf8("border-style: hidden;\n"
""));
        pvFrame_9 = new QFrame(charac_2);
        pvFrame_9->setObjectName("pvFrame_9");
        pvFrame_9->setGeometry(QRect(135, 90, 90, 49));
        pvFrame_9->setStyleSheet(QString::fromUtf8("border: 1px;"));
        pvFrame_9->setFrameShape(QFrame::StyledPanel);
        pvFrame_9->setFrameShadow(QFrame::Raised);
        pvJauge_18 = new QLabel(pvFrame_9);
        pvJauge_18->setObjectName("pvJauge_18");
        pvJauge_18->setGeometry(QRect(15, 24, 60, 25));
        pvJauge_18->setStyleSheet(QString::fromUtf8("border-style: hidden\n"
""));
        pvJauge_18->setPixmap(QPixmap(QString::fromUtf8(":/jauges/pv/ressources/images/sprites/gauges/Vie/10.svg")));
        pvJauge_18->setScaledContents(true);
        pvLabel_18 = new QLabel(pvFrame_9);
        pvLabel_18->setObjectName("pvLabel_18");
        pvLabel_18->setGeometry(QRect(35, 0, 21, 16));
        pvLabel_18->setStyleSheet(QString::fromUtf8("border-style: hidden;\n"
""));
        charac_3 = new QWidget(frame);
        charac_3->setObjectName("charac_3");
        charac_3->setGeometry(QRect(0, 320, 300, 150));
        sprite_5 = new QLabel(charac_3);
        sprite_5->setObjectName("sprite_5");
        sprite_5->setGeometry(QRect(0, 0, 80, 100));
        sprite_5->setPixmap(QPixmap(QString::fromUtf8(":/charac/ressources/images/sprites/charac/Pedro Pontes.png")));
        sprite_5->setScaledContents(true);
        sprite_5->setWordWrap(false);
        sprite_5->setOpenExternalLinks(false);
        label_6 = new QLabel(charac_3);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(90, 0, 111, 30));
        pvFrame_13 = new QFrame(charac_3);
        pvFrame_13->setObjectName("pvFrame_13");
        pvFrame_13->setGeometry(QRect(90, 40, 90, 49));
        pvFrame_13->setStyleSheet(QString::fromUtf8("border: 1px;"));
        pvFrame_13->setFrameShape(QFrame::StyledPanel);
        pvFrame_13->setFrameShadow(QFrame::Raised);
        pvJauge_22 = new QLabel(pvFrame_13);
        pvJauge_22->setObjectName("pvJauge_22");
        pvJauge_22->setGeometry(QRect(15, 24, 60, 25));
        pvJauge_22->setStyleSheet(QString::fromUtf8("border-style: hidden\n"
""));
        pvJauge_22->setPixmap(QPixmap(QString::fromUtf8(":/jauges/intelligence/ressources/images/sprites/gauges/Intelligence/4.svg")));
        pvJauge_22->setScaledContents(true);
        pvLabel_22 = new QLabel(pvFrame_13);
        pvLabel_22->setObjectName("pvLabel_22");
        pvLabel_22->setGeometry(QRect(0, 0, 90, 16));
        pvLabel_22->setStyleSheet(QString::fromUtf8("border-style: hidden;\n"
""));
        pvFrame_14 = new QFrame(charac_3);
        pvFrame_14->setObjectName("pvFrame_14");
        pvFrame_14->setGeometry(QRect(190, 40, 90, 49));
        pvFrame_14->setStyleSheet(QString::fromUtf8("border: 1px;"));
        pvFrame_14->setFrameShape(QFrame::StyledPanel);
        pvFrame_14->setFrameShadow(QFrame::Raised);
        pvJauge_23 = new QLabel(pvFrame_14);
        pvJauge_23->setObjectName("pvJauge_23");
        pvJauge_23->setGeometry(QRect(15, 24, 60, 25));
        pvJauge_23->setStyleSheet(QString::fromUtf8("border-style: hidden\n"
""));
        pvJauge_23->setPixmap(QPixmap(QString::fromUtf8(":/jauges/endurance/ressources/images/sprites/gauges/Endurance/9.svg")));
        pvJauge_23->setScaledContents(true);
        pvLabel_23 = new QLabel(pvFrame_14);
        pvLabel_23->setObjectName("pvLabel_23");
        pvLabel_23->setGeometry(QRect(5, 0, 80, 16));
        pvLabel_23->setStyleSheet(QString::fromUtf8("border-style: hidden;\n"
""));
        pvFrame_15 = new QFrame(charac_3);
        pvFrame_15->setObjectName("pvFrame_15");
        pvFrame_15->setGeometry(QRect(135, 90, 90, 49));
        pvFrame_15->setStyleSheet(QString::fromUtf8("border: 1px;"));
        pvFrame_15->setFrameShape(QFrame::StyledPanel);
        pvFrame_15->setFrameShadow(QFrame::Raised);
        pvJauge_24 = new QLabel(pvFrame_15);
        pvJauge_24->setObjectName("pvJauge_24");
        pvJauge_24->setGeometry(QRect(15, 24, 60, 25));
        pvJauge_24->setStyleSheet(QString::fromUtf8("border-style: hidden\n"
""));
        pvJauge_24->setPixmap(QPixmap(QString::fromUtf8(":/jauges/pv/ressources/images/sprites/gauges/Vie/10.svg")));
        pvJauge_24->setScaledContents(true);
        pvLabel_24 = new QLabel(pvFrame_15);
        pvLabel_24->setObjectName("pvLabel_24");
        pvLabel_24->setGeometry(QRect(35, 0, 21, 16));
        pvLabel_24->setStyleSheet(QString::fromUtf8("border-style: hidden;\n"
""));
        charac_4 = new QWidget(frame);
        charac_4->setObjectName("charac_4");
        charac_4->setGeometry(QRect(0, 480, 300, 150));
        sprite_6 = new QLabel(charac_4);
        sprite_6->setObjectName("sprite_6");
        sprite_6->setGeometry(QRect(0, 0, 80, 100));
        sprite_6->setPixmap(QPixmap(QString::fromUtf8(":/charac/ressources/images/sprites/charac/Anna Kikina.png")));
        sprite_6->setScaledContents(true);
        sprite_6->setWordWrap(false);
        sprite_6->setOpenExternalLinks(false);
        label_7 = new QLabel(charac_4);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(90, 0, 111, 30));
        pvFrame_16 = new QFrame(charac_4);
        pvFrame_16->setObjectName("pvFrame_16");
        pvFrame_16->setGeometry(QRect(90, 40, 90, 49));
        pvFrame_16->setStyleSheet(QString::fromUtf8("border: 1px;"));
        pvFrame_16->setFrameShape(QFrame::StyledPanel);
        pvFrame_16->setFrameShadow(QFrame::Raised);
        pvJauge_25 = new QLabel(pvFrame_16);
        pvJauge_25->setObjectName("pvJauge_25");
        pvJauge_25->setGeometry(QRect(15, 24, 60, 25));
        pvJauge_25->setStyleSheet(QString::fromUtf8("border-style: hidden\n"
""));
        pvJauge_25->setPixmap(QPixmap(QString::fromUtf8(":/jauges/intelligence/ressources/images/sprites/gauges/Intelligence/9.svg")));
        pvJauge_25->setScaledContents(true);
        pvLabel_25 = new QLabel(pvFrame_16);
        pvLabel_25->setObjectName("pvLabel_25");
        pvLabel_25->setGeometry(QRect(0, 0, 90, 16));
        pvLabel_25->setStyleSheet(QString::fromUtf8("border-style: hidden;\n"
""));
        pvFrame_17 = new QFrame(charac_4);
        pvFrame_17->setObjectName("pvFrame_17");
        pvFrame_17->setGeometry(QRect(190, 40, 90, 49));
        pvFrame_17->setStyleSheet(QString::fromUtf8("border: 1px;"));
        pvFrame_17->setFrameShape(QFrame::StyledPanel);
        pvFrame_17->setFrameShadow(QFrame::Raised);
        pvJauge_26 = new QLabel(pvFrame_17);
        pvJauge_26->setObjectName("pvJauge_26");
        pvJauge_26->setGeometry(QRect(15, 24, 60, 25));
        pvJauge_26->setStyleSheet(QString::fromUtf8("border-style: hidden\n"
""));
        pvJauge_26->setPixmap(QPixmap(QString::fromUtf8(":/jauges/endurance/ressources/images/sprites/gauges/Endurance/5.svg")));
        pvJauge_26->setScaledContents(true);
        pvLabel_26 = new QLabel(pvFrame_17);
        pvLabel_26->setObjectName("pvLabel_26");
        pvLabel_26->setGeometry(QRect(5, 0, 80, 16));
        pvLabel_26->setStyleSheet(QString::fromUtf8("border-style: hidden;\n"
""));
        pvFrame_18 = new QFrame(charac_4);
        pvFrame_18->setObjectName("pvFrame_18");
        pvFrame_18->setGeometry(QRect(135, 90, 90, 49));
        pvFrame_18->setStyleSheet(QString::fromUtf8("border: 1px;"));
        pvFrame_18->setFrameShape(QFrame::StyledPanel);
        pvFrame_18->setFrameShadow(QFrame::Raised);
        pvJauge_27 = new QLabel(pvFrame_18);
        pvJauge_27->setObjectName("pvJauge_27");
        pvJauge_27->setGeometry(QRect(15, 24, 60, 25));
        pvJauge_27->setStyleSheet(QString::fromUtf8("border-style: hidden\n"
""));
        pvJauge_27->setPixmap(QPixmap(QString::fromUtf8(":/jauges/pv/ressources/images/sprites/gauges/Vie/10.svg")));
        pvJauge_27->setScaledContents(true);
        pvLabel_27 = new QLabel(pvFrame_18);
        pvLabel_27->setObjectName("pvLabel_27");
        pvLabel_27->setGeometry(QRect(35, 0, 21, 16));
        pvLabel_27->setStyleSheet(QString::fromUtf8("border-style: hidden;\n"
""));
        textContainer = new QFrame(centralwidget);
        textContainer->setObjectName("textContainer");
        textContainer->setEnabled(true);
        textContainer->setGeometry(QRect(310, 0, 780, 700));
        textContainer->setMinimumSize(QSize(780, 700));
        textContainer->setMaximumSize(QSize(780, 700));
        textContainer->setMouseTracking(true);
        textContainer->setAcceptDrops(false);
        textContainer->setAutoFillBackground(false);
        textContainer->setStyleSheet(QString::fromUtf8("background-color: rgb(18, 19, 21);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: rgb(255, 251, 252);\n"
"\n"
"\n"
""));
        textContainer->setFrameShape(QFrame::StyledPanel);
        textContainer->setFrameShadow(QFrame::Raised);
        repliqueWidget_1 = new QWidget(textContainer);
        repliqueWidget_1->setObjectName("repliqueWidget_1");
        repliqueWidget_1->setEnabled(true);
        repliqueWidget_1->setGeometry(QRect(10, 10, 740, 220));
        repliqueWidget_1->setMaximumSize(QSize(740, 220));
        repliqueWidget_1->setMouseTracking(false);
        repliqueWidget_1->setTabletTracking(false);
        repliqueWidget_1->setLayoutDirection(Qt::LeftToRight);
        speakCharac_1 = new QLabel(repliqueWidget_1);
        speakCharac_1->setObjectName("speakCharac_1");
        speakCharac_1->setGeometry(QRect(0, 0, 120, 150));
        speakCharac_1->setPixmap(QPixmap(QString::fromUtf8(":/charac/ressources/images/sprites/charac/Commandante.png")));
        speakCharac_1->setScaledContents(true);
        speakCharac_1->setWordWrap(false);
        speakCharac_1->setOpenExternalLinks(false);
        replique_1 = new QLabel(repliqueWidget_1);
        replique_1->setObjectName("replique_1");
        replique_1->setGeometry(QRect(130, 10, 601, 192));
        replique_1->setWordWrap(true);
        repliqueWidget_2 = new QWidget(textContainer);
        repliqueWidget_2->setObjectName("repliqueWidget_2");
        repliqueWidget_2->setEnabled(true);
        repliqueWidget_2->setGeometry(QRect(10, 240, 740, 220));
        repliqueWidget_2->setMaximumSize(QSize(740, 220));
        repliqueWidget_2->setLayoutDirection(Qt::LeftToRight);
        speakCharac_7 = new QLabel(repliqueWidget_2);
        speakCharac_7->setObjectName("speakCharac_7");
        speakCharac_7->setGeometry(QRect(0, 0, 120, 150));
        speakCharac_7->setScaledContents(true);
        speakCharac_7->setWordWrap(false);
        speakCharac_7->setOpenExternalLinks(false);
        replique_7 = new QLabel(repliqueWidget_2);
        replique_7->setObjectName("replique_7");
        replique_7->setGeometry(QRect(130, 10, 601, 192));
        replique_7->setWordWrap(true);
        Choices = new QWidget(textContainer);
        Choices->setObjectName("Choices");
        Choices->setEnabled(true);
        Choices->setGeometry(QRect(10, 470, 740, 220));
        Choices->setMaximumSize(QSize(740, 220));
        Choices->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout = new QHBoxLayout(Choices);
        horizontalLayout->setObjectName("horizontalLayout");
        choix3 = new QLabel(Choices);
        choix3->setObjectName("choix3");
        choix3->setCursor(QCursor(Qt::PointingHandCursor));
        choix3->setMouseTracking(true);
        choix3->setScaledContents(true);
        choix3->setWordWrap(false);
        choix3->setOpenExternalLinks(false);

        horizontalLayout->addWidget(choix3);

        choix1 = new QLabel(Choices);
        choix1->setObjectName("choix1");
        choix1->setCursor(QCursor(Qt::PointingHandCursor));
        choix1->setMouseTracking(true);
        choix1->setScaledContents(true);
        choix1->setWordWrap(false);
        choix1->setOpenExternalLinks(false);

        horizontalLayout->addWidget(choix1);

        choix2 = new QLabel(Choices);
        choix2->setObjectName("choix2");
        choix2->setCursor(QCursor(Qt::PointingHandCursor));
        choix2->setMouseTracking(true);
        choix2->setScaledContents(true);
        choix2->setWordWrap(false);
        choix2->setOpenExternalLinks(false);

        horizontalLayout->addWidget(choix2);

        choix4 = new QLabel(Choices);
        choix4->setObjectName("choix4");
        choix4->setCursor(QCursor(Qt::PointingHandCursor));
        choix4->setMouseTracking(true);
        choix4->setScaledContents(true);
        choix4->setWordWrap(false);
        choix4->setOpenExternalLinks(false);

        horizontalLayout->addWidget(choix4);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        statLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">Statistique </span></p><p align=\"center\"><br/></p></body></html>", nullptr));
        sprite->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Jeanette Epps</span></p></body></html>", nullptr));
        pvJauge_13->setText(QString());
        pvLabel_12->setText(QCoreApplication::translate("MainWindow", "INTELLIGENCE", nullptr));
        pvJauge_12->setText(QString());
        pvLabel_10->setText(QCoreApplication::translate("MainWindow", "ENDURANCE", nullptr));
        pvJauge->setText(QString());
        pvLabel->setText(QCoreApplication::translate("MainWindow", "PV", nullptr));
        sprite_3->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Hans Schlegel</span></p><p align=\"center\"><br/></p></body></html>", nullptr));
        pvJauge_16->setText(QString());
        pvLabel_16->setText(QCoreApplication::translate("MainWindow", "INTELLIGENCE", nullptr));
        pvJauge_17->setText(QString());
        pvLabel_17->setText(QCoreApplication::translate("MainWindow", "ENDURANCE", nullptr));
        pvJauge_18->setText(QString());
        pvLabel_18->setText(QCoreApplication::translate("MainWindow", "PV", nullptr));
        sprite_5->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Pedro Pontes</span></p><p align=\"center\"><span style=\" font-size:12pt;\"><br/></span></p></body></html>", nullptr));
        pvJauge_22->setText(QString());
        pvLabel_22->setText(QCoreApplication::translate("MainWindow", "INTELLIGENCE", nullptr));
        pvJauge_23->setText(QString());
        pvLabel_23->setText(QCoreApplication::translate("MainWindow", "ENDURANCE", nullptr));
        pvJauge_24->setText(QString());
        pvLabel_24->setText(QCoreApplication::translate("MainWindow", "PV", nullptr));
        sprite_6->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Anna Kikina</span></p><p align=\"center\"><span style=\" font-size:12pt;\"><br/></span></p></body></html>", nullptr));
        pvJauge_25->setText(QString());
        pvLabel_25->setText(QCoreApplication::translate("MainWindow", "INTELLIGENCE", nullptr));
        pvJauge_26->setText(QString());
        pvLabel_26->setText(QCoreApplication::translate("MainWindow", "ENDURANCE", nullptr));
        pvJauge_27->setText(QString());
        pvLabel_27->setText(QCoreApplication::translate("MainWindow", "PV", nullptr));
        speakCharac_1->setText(QString());
        replique_1->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Prenez moi Paris 8 s'il vous-plait</p><p><br/></p></body></html>", nullptr));
        speakCharac_7->setText(QString());
        replique_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        choix3->setText(QString());
        choix1->setText(QString());
        choix2->setText(QString());
        choix4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
