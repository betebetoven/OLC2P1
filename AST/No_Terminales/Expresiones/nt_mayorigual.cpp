#include "NT_MayorIgual.h"

Resultado *NT_MayorIgual::Interpretar(Environment *ctx,EnvironmentFunc *ctx2, EnvironmentVect* ctx3) {
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

    // Integer >= Integer, Integer >= Float, Integer >= Boolean, Float >= Float, Float >= Integer, Float >= Boolean, Boolean >= Boolean, Boolean >= Integer, Boolean >= Float
    if ((izqTipo == "Integer" && (derTipo == "Integer" || derTipo == "Float" || derTipo == "Boolean")) || (izqTipo == "Float" && (derTipo == "Float" || derTipo == "Integer" || derTipo == "Boolean")) || (izqTipo == "Boolean" && (derTipo == "Boolean" || derTipo == "Integer" || derTipo == "Float"))) {
        bool greaterEqual = izqValor.toDouble() >= derValor.toDouble();
        resultado = new Resultado(greaterEqual);
    }
    else {
        // Unsupported operand types
        resultado = nullptr;
    }

    return resultado;
}


QString NT_MayorIgual::Graficar() {
    std::stringstream pPosicion, dPosicion, iPosicion ;
    pPosicion << (void*)this;
    dPosicion << (void*)this->Derecha;
    iPosicion << (void*)this->Izquierda;
    QString nodo = QString::fromStdString("n" + pPosicion.str() +
            " [ label=\">=\" fillcolor=cornflowerblue];\n");
    nodo += QString::fromStdString("n" + pPosicion.str() + " -> n"
            + iPosicion.str()+ ";\n");
    nodo += this->Izquierda->Graficar();
    nodo += QString::fromStdString("n" + pPosicion.str()+ " -> n"
            + dPosicion.str() + ";\n" );
    nodo += this->Derecha->Graficar();
    return nodo;
}

NT_MayorIgual::NT_MayorIgual(AbstractExpr* izquierda, AbstractExpr* derecha) : Izquierda(izquierda), Derecha(derecha) {}
