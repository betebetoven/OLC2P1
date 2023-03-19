#ifndef NT_EXPONENCIAL_H
#define NT_EXPONENCIAL_H

#include "../../AbstractExpr.h"

class NT_Exponencial : public AbstractExpr {
    AbstractExpr* izquierda;
    AbstractExpr* derecha;

public:
    Resultado* Interpretar(Environment* ctx) override;
    QString Graficar() override;
    NT_Exponencial(AbstractExpr* izq, AbstractExpr* der);
};

#endif // NT_EXPONENCIAL_H
