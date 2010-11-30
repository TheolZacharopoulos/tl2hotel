#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>

//#include "customerManagement.h"
//#include "roomManagement.h"
//#include "reservationManagement.h"

static const QString Title                 = QObject::tr("Hotel Manager");
static const QString EmptyRes              = QObject::tr("Please fill out customer ID and room number");
static const QString DateBeforeCurrentDate = QObject::tr("Check In date must be after current date");
static const QString CheckOutBeforeCheckIn = QObject::tr("Check Out date must be after Check In date");
static const QString NotAllCustomerData    = QObject::tr("Please fill out all customer data");
static const QString NoCustomerID          = QObject::tr("Please fill out Customer ID");
static const QString NotAllRoomData        = QObject::tr("Please fill out all Room data");
static const QString NoRoomNumber          = QObject::tr("Please fill out Room Number");

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;

private slots:
    void on_SaveRoom_clicked();
    void on_pushButton_clicked();
    void on_DeleteRoom_clicked();
    void on_InsertRoom_clicked();
    void on_SaveCustomer_clicked();
    void on_FindCustomer_clicked();
    void on_DeleteCustomer_clicked();
    void on_InsertCustomer_clicked();
    void on_NewReservation_clicked();
    void on_CleanTab_triggered();
    void on_Tabs_selected(QString );
    void on_Clean_triggered();
    void on_Exit_triggered();
};

#endif // MAINWINDOW_H
