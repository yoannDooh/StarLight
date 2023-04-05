/********************************************************************************
** Form generated from reading UI file 'repliqueWidgetForm.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPLIQUEWIDGETFORM_H
#define UI_REPLIQUEWIDGETFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_repliqueWidgetForm
{
public:
    QLabel *speakCharac;
    QLabel *replique;

    void setupUi(QWidget *repliqueWidgetForm)
    {
        if (repliqueWidgetForm->objectName().isEmpty())
            repliqueWidgetForm->setObjectName("repliqueWidgetForm");
        repliqueWidgetForm->resize(740, 220);
        repliqueWidgetForm->setMaximumSize(QSize(740, 220));
        speakCharac = new QLabel(repliqueWidgetForm);
        speakCharac->setObjectName("speakCharac");
        speakCharac->setGeometry(QRect(0, 0, 120, 150));
        speakCharac->setPixmap(QPixmap(QString::fromUtf8(":/charac/ressources/images/sprites/charac/Commandante.png")));
        speakCharac->setScaledContents(true);
        speakCharac->setWordWrap(false);
        speakCharac->setOpenExternalLinks(false);
        replique = new QLabel(repliqueWidgetForm);
        replique->setObjectName("replique");
        replique->setGeometry(QRect(130, 10, 601, 192));

        retranslateUi(repliqueWidgetForm);

        QMetaObject::connectSlotsByName(repliqueWidgetForm);
    } // setupUi

    void retranslateUi(QWidget *repliqueWidgetForm)
    {
        repliqueWidgetForm->setWindowTitle(QCoreApplication::translate("repliqueWidgetForm", "Form", nullptr));
        speakCharac->setText(QString());
        replique->setText(QCoreApplication::translate("repliqueWidgetForm", "<html><head/><body><p><span style=\" font-size:26pt;\">TextLabel</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class repliqueWidgetForm: public Ui_repliqueWidgetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPLIQUEWIDGETFORM_H
