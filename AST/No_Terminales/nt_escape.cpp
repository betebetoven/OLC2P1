#include "nt_escape.h"

Resultado* NT_Escape::Interpretar(Environment* env) {
    return new Resultado(valor);
}

QString NT_Escape::Graficar() {
    std::stringstream pPosicion;
    pPosicion << (void*)this;
    return QString::fromStdString("n" + pPosicion.str() +
                                  " [ label=\"EXP: Escape " + valor.toStdString() +
                                  "\"  shape=record fillcolor=tomato];\n");
}

NT_Escape::NT_Escape(const QString& valor) : valor(valor) {}