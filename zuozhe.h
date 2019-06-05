#ifndef ZUOZHE_H
#define ZUOZHE_H

#include <QWidget>

namespace Ui {
class Zuozhe;
}

class Zuozhe : public QWidget
{
    Q_OBJECT

public:
    explicit Zuozhe(QWidget *parent = 0);
    ~Zuozhe();

private:
    Ui::Zuozhe *ui;
};

#endif // ZUOZHE_H
