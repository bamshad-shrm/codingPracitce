#ifndef NEWOPTIONS_H
#define NEWOPTIONS_H

#include <QDialog>

namespace Ui {
class newOptions;
}

class newOptions : public QDialog
{
    Q_OBJECT

public:
    explicit newOptions(QWidget *parent = nullptr);
    ~newOptions();

private:
    Ui::newOptions *ui;
};

#endif // NEWOPTIONS_H
