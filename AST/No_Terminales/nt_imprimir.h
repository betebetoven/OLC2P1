#ifndef NT_IMPRIMIR_H
#define NT_IMPRIMIR_H

#include "../abstractexpr.h"
#include "nt_listaexpr.h"

class NT_Imprimir: public AbstractExpr {
   AbstractExpr* lista_expr;
public:
    Resultado *Interpretar(Environment *ctx) override;
    QString Graficar() override;
    explicit NT_Imprimir(AbstractExpr* nodo);
};


#endif // NT_IMPRIMIR_H
