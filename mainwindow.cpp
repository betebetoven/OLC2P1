#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QMessageBox>
#include "Parser/interfaz.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    Clase3::Interfaz* interfaz = new Clase3::Interfaz();
    QString cabecera = QString("digraph G\n \
                               {label=\"ARBOL SINTACTICO\"\n \
                                       node[shape = hexagon]\n \
                                      node[style = filled]\n \
                                       node[fillcolor = \"#EEEEE\"]\n \
                                       node[color = \"#EEEEE\"]\n \
                                       node[color = \"#31CEF0\"]\n");
    QString dot = interfaz->Analaizar(ui->textEdit->toPlainText().toStdString());
                               ui->textEdit_2->setText( cabecera + dot + "}");
}

void MainWindow::on_pushButton_2_clicked()
{
        Clase3::Interfaz* interfaz = new Clase3::Interfaz();

        QString cabecera = QString("digraph G\n \
                                   {label=\"ARBOL SINTACTICO\"\n \
                                           node[shape = hexagon]\n \
                                          node[style = filled]\n \
                                           node[fillcolor = \"#EEEEE\"]\n \
                                           node[color = \"#EEEEE\"]\n \
                                           node[color = \"#31CEF0\"]\n");
                                   QString dot = interfaz->Ejecutar(ui->textEdit->toPlainText().toStdString());
                                                              ui->textEdit_2->setText( cabecera + dot + "}");

}


void MainWindow::on_textEdit_2_textChanged()
{

}

