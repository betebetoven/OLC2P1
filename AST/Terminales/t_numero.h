#ifndef T_NUMERO_H
#define T_NUMERO_H


#include "../abstractexpr.h"

class T_Numero: public AbstractExpr{
QString numero;

public:
    Resultado *Interpretar(Environment *ctx) override;

    QString Graficar() override;
    explicit T_Numero(QString num);
};


#endif // T_NUMERO_H
