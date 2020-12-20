#ifndef PROFILEFORM_H
#define PROFILEFORM_H

#include <QDialog>

namespace Ui {
class profileForm;
}

class profileForm : public QDialog
{
    Q_OBJECT

public:
    explicit profileForm(QWidget *parent = nullptr);
    ~profileForm();

private:
    Ui::profileForm *ui;
};

#endif // PROFILEFORM_H
