#ifndef WHY_BECOME_DONOR_H
#define WHY_BECOME_DONOR_H

#include <QDialog>

namespace Ui {
class why_become_donor;
}

class why_become_donor : public QDialog
{
    Q_OBJECT

public:
    explicit why_become_donor(QWidget *parent = nullptr);
    ~why_become_donor();

private slots:
    void on_about_2_clicked();

    void on_login_clicked();

    void on_register_2_clicked();

    void on_home_clicked();

private:
    Ui::why_become_donor *ui;
};

#endif // WHY_BECOME_DONOR_H
