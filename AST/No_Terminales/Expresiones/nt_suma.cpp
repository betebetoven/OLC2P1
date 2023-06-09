#include "nt_suma.h"

Resultado *NT_Suma::Interpretar(Environment *ctx,EnvironmentFunc *ctx2, EnvironmentVect* ctx3) {
    Resultado* izqR = this->Izquierda->Interpretar(ctx,ctx2,ctx3);
    Resultado* derR = this->Derecha->Interpretar(ctx,ctx2,ctx3);

    if (!izqR || !derR) {
        return nullptr; // Return nullptr if either left or right operand is nullptr
    }

    QString izqTipo = izqR->getTipo();
    QString derTipo = derR->getTipo();

    QVariant izqValor = izqR->getValor();
    QVariant derValor = derR->getValor();

    Resultado *resultado;

    // Integer + Integer
    if (izqTipo == "Integer" && derTipo == "Integer") {
        int sum = izqValor.toInt() + derValor.toInt();
        resultado = new Resultado(sum);
    }
    // Integer + Float, Float + Integer, Float + Float
    else if ((izqTipo == "Integer" && derTipo == "Float") || (izqTipo == "Float" && derTipo == "Integer") || (izqTipo == "Float" && derTipo == "Float")) {
        float sum = izqValor.toFloat() + derValor.toFloat();
        resultado = new Resultado(sum);
    }
    // Integer + String, String + Integer, String + String, String + Float, String + Boolean, Float + String, Boolean + String
    else if (izqTipo == "String" || derTipo == "String") {
        QString sum = izqValor.toString() + derValor.toString();
        resultado = new Resultado(sum);
    }
    // Integer + Boolean, Boolean + Integer, Boolean + Float, Float + Boolean, Boolean + Boolean
    else if (izqTipo == "Boolean" || derTipo == "Boolean") {
        int sum = izqValor.toInt() + derValor.toInt();
        resultado = new Resultado(sum);
    }
    else {
        // Unsupported operand types
        resultado = nullptr;
    }

    return resultado;
}


QString NT_Suma::Graficar() {
    std::stringstream  pPosicion, dPosicion, iPosicion ;
    pPosicion <<(void*)this;
    dPosicion <<(void*)this->Derecha;
    iPosicion <<(void*)this->Izquierda;

    QString nodo = QString::fromStdString("n" + pPosicion.str() +
            " [ label=\"+\" fillcolor=cornflowerblue];\n");
    nodo +=  QString::fromStdString("n" + pPosicion.str() + " -> n"
            + iPosicion.str()+ ";\n");
    nodo += this->Izquierda->Graficar();
    nodo +=  QString::fromStdString("n" + pPosicion.str()+ " -> n"
            + dPosicion.str() + ";\n" );
    nodo += this->Derecha->Graficar();
    return nodo;
}

NT_Suma::NT_Suma(AbstractExpr *izquierda, AbstractExpr *derecha) : Izquierda(izquierda), Derecha(derecha) {}
