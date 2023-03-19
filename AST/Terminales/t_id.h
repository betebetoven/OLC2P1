#ifndef T_ID_H
#define T_ID_H
#include "../abstractexpr.h"

class T_ID : public AbstractExpr{
    QString id ;

public:
    Resultado *Interpretar(Environment *ctx) override;

    QString Graficar() override;

    T_ID(QString id);

};


#endif // T_ID_H
