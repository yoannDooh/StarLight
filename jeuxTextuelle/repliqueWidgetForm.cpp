#include "repliqueWidgetForm.h"
#include "ui_repliqueWidgetForm.h"

repliqueWidgetForm::repliqueWidgetForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::repliqueWidgetForm)
{
    ui->setupUi(this);
}

repliqueWidgetForm::~repliqueWidgetForm()
{
    delete ui;
}
