#include "t_numero.h"



Resultado *T_Numero::Interpretar(Environment *ctx) {
    std::cout << "si llega al Interpretar de num" << std::endl;
    return  new Resultado(this->numero.toInt());
}

QString T_Numero::Graficar() {
    std::stringstream  pPosicion;
    pPosicion <<(void*)this;
    return QString::fromStdString("n" + pPosicion.str()+
    " [ label=\"T_NUM " + this->numero.toStdString() +
    "\"  shape=record fillcolor=\"#342012\"];\n");
}

T_Numero::T_Numero(QString num) {
    std::cout << "Crea el T numero" << std::endl;
    this->numero = num;
}
