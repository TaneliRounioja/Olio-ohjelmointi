#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    state = 1;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_N1_clicked()
{
    numberClickHandler();
}


void MainWindow::on_N2_clicked()
{
    numberClickHandler();
}


void MainWindow::on_N3_clicked()
{
    numberClickHandler();
}


void MainWindow::on_N4_clicked()
{
    numberClickHandler();
}


void MainWindow::on_N5_clicked()
{
    numberClickHandler();
}


void MainWindow::on_N6_clicked()
{
    numberClickHandler();
}


void MainWindow::on_N7_clicked()
{
    numberClickHandler();
}


void MainWindow::on_N8_clicked()
{
    numberClickHandler();
}


void MainWindow::on_N9_clicked()
{
    numberClickHandler();
}


void MainWindow::on_N0_clicked()
{
    numberClickHandler();
}


void MainWindow::on_add_clicked()
{
    addSubMullDivClickHandler();
}


void MainWindow::on_subb_clicked()
{
    addSubMullDivClickHandler();
}


void MainWindow::on_mul_clicked()
{
    addSubMullDivClickHandler();
}


void MainWindow::on_div_clicked()
{
    addSubMullDivClickHandler();
}


void MainWindow::on_clear_clicked()
{
    clearAndEnterClickHandler();
}


void MainWindow::on_enter_clicked()
{
    clearAndEnterClickHandler();
}

void MainWindow::numberClickHandler()
{

    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button -> objectName();
    //qDebug() <<state;

    switch(state){
    case 1:
        number1 =number1 + name.last(1);
        ui->num1->setText(number1);
        break;
    case 2:
        number2 =number2 + name.last(1);
        ui->num2->setText(number2);
        break;


    }


    //number1 =number1 + name.last(1);
    //qDebug() <<"numero 1 on "<< number1;
    //qDebug() <<"numero 2 on "<< number2;



}

void MainWindow::clearAndEnterClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button -> objectName();

    if (name == "clear")
        {
        resetLineEdits();
        number1 = "";
        number2 = "";
        state = 1;
        }
    if (name == "enter")
        {
        float n1 = number1.toFloat();
        float n2 = number2.toFloat();

        switch(operand){
        case 0:
            result = n1 + n2;
            break;


        case 1:
            result = n1 - n2;
            break;


        case 2:
            result = n1 * n2;
            break;


        case 3:
        result = n1 / n2;
        break;
        }

        ui->result->setText(QString::number(result));
        }

}


void MainWindow::addSubMullDivClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button -> objectName();

    if (name == "add"){
        state = 2;
        operand = 0;
        }
    if (name == "subb")
        {
        state = 2;
        operand = 1;
        }

    if (name == "mul")
    {
        state = 2;
        operand = 2;
    }
    if (name == "div")
    {
        state = 2;
        operand = 3;

    }


}

void MainWindow::resetLineEdits()
{
    ui -> num1 -> setText("");
    ui -> num2 -> setText("");
    ui -> result -> setText("");

}

