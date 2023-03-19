#ifndef ABSTRACTEXPR_H
#define ABSTRACTEXPR_H

#include<QString>

#include "../Interprete/Contexto/resultado.h"
#include "../Interprete/Contexto/environment.h"
//class Environment;
#include <sstream>


class AbstractExpr
{
public:
    virtual Resultado* Interpretar(Environment* ctx) = 0;
       virtual QString Graficar() = 0;
};

#endif // ABSTRACTEXPR_H
