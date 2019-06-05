#ifndef BANQUAN_H
#define BANQUAN_H

#include <QWidget>

namespace Ui {
class Banquan;
}

class Banquan : public QWidget
{
    Q_OBJECT

public:
    explicit Banquan(QWidget *parent = 0);
    ~Banquan();

private:
    Ui::Banquan *ui;
};

#endif // BANQUAN_H
