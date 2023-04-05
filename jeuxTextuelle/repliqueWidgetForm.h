#ifndef REPLIQUEWIDGETFORM_H
#define REPLIQUEWIDGETFORM_H
#include <QWidget>

namespace Ui {
class repliqueWidgetForm;
}

class repliqueWidgetForm : public QWidget
{
    Q_OBJECT

public:
    explicit repliqueWidgetForm(QWidget *parent = nullptr);
    ~repliqueWidgetForm();

private:
    Ui::repliqueWidgetForm *ui;
};




#endif // REPLIQUEWIDGETFORM_H

