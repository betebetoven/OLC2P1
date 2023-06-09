#include "nt_modulo.h"

Resultado *NT_Modulo::Interpretar(Environment *ctx,EnvironmentFunc *ctx2, EnvironmentVect* ctx3) {
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

    // Integer % Integer
    if (izqTipo == "Integer" && derTipo == "Integer") {
        int mod = izqValor.toInt() % derValor.toInt();
        resultado = new Resultado(mod);
    }
    // Integer % Boolean, Boolean % Integer, Boolean % Boolean, Boolean % Integer
    else if ((izqTipo == "Integer" && derTipo == "Boolean") || (izqTipo == "Boolean" && derTipo == "Integer") || (izqTipo == "Boolean" && derTipo == "Boolean")  ) {
        int mod = izqValor.toInt() % derValor.toInt();
        resultado = new Resultado(mod);
    }
    else {
        // Unsupported operand types
        resultado = nullptr;
    }

    return resultado;
}




QString NT_Modulo::Graficar() {
    std::stringstream  pPosicion, dPosicion, iPosicion ;
    pPosicion <<(void*)this;
    dPosicion <<(void*)this->Derecha;
    iPosicion <<(void*)this->Izquierda;

    QString nodo = QString::fromStdString("n" + pPosicion.str() +
            " [ label=\"%\" fillcolor=cornflowerblue];\n");
    nodo +=  QString::fromStdString("n" + pPosicion.str() + " -> n"
            + iPosicion.str()+ ";\n");
    nodo += this->Izquierda->Graficar();
    nodo +=  QString::fromStdString("n" + pPosicion.str()+ " -> n"
            + dPosicion.str() + ";\n" );
    nodo += this->Derecha->Graficar();
    return nodo;
}

NT_Modulo::NT_Modulo(AbstractExpr *izquierda, AbstractExpr *derecha) : Izquierda(izquierda), Derecha(derecha) {}
