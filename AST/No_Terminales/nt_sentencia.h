#ifndef NT_SENTENCIA_H
#define NT_SENTENCIA_H

#include "../abstractexpr.h"//.h"

class NT_Sentencia: public AbstractExpr {
    AbstractExpr* hijo;

public:
    Resultado *Interpretar(Environment *ctx) override;
    QString Graficar() override;
    void AddNodo(AbstractExpr* hijo);

};


#endif // NT_SENTENCIA_H
