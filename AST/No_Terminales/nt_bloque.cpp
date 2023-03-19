#include "nt_Bloque.h"

Bloque::Bloque(const QVector<AbstractExpr*>& instrucciones, AbstractExpr *decl, AbstractExpr *expr, AbstractExpr *aumento, bool is_while, AbstractExpr *elsebloque) : instrucciones(instrucciones), decl(decl), expr(expr), aumento(aumento), is_while(is_while), elsebloque(elsebloque) {std::cout<<"CREA BLOQUE"<<std::endl;}

Resultado* Bloque::Interpretar(Environment* env) {
    Environment *envv = new Environment(env);

    Resultado* temp = new Resultado(nullptr);


    if (decl == nullptr && expr == nullptr && aumento == nullptr) {
        for (int i = 0; i < this->instrucciones.size(); i++) {
            temp = this->instrucciones[i]->Interpretar(envv);
            // es un return? es un break, es un continue, etc....
        }
    } else if (is_while){
        if(decl != nullptr)
        Resultado *declResult = decl->Interpretar(envv);


        while (true) {
            Resultado *exprResult = expr->Interpretar(envv);
            //std::cout<<"VALOR DE EXPR RESULT: "<<exprResult->getValor().toString().toStdString() <<std::endl;
            if (exprResult->getValor().toBool() == false) {

                    break;
            }

            for (int i = 0; i < this->instrucciones.size(); i++) {
                temp = this->instrucciones[i]->Interpretar(envv);
                //env->updateCommonVariables(envv);
                // es un return? es un break, es un continue, etc....
            }


            if (aumento != nullptr)
            Resultado *aumentoResult = aumento->Interpretar(envv);
        }
    }
    else
    {
        Resultado *exprResult = expr->Interpretar(envv);
        //std::cout<<"VALOR DE EXPR RESULT: "<<exprResult->getValor().toString().toStdString() <<std::endl;
        if (exprResult->getValor().toBool()) {

            for (int i = 0; i < this->instrucciones.size(); i++) {
                temp = this->instrucciones[i]->Interpretar(envv);
                //env->updateCommonVariables(envv);
                // es un return? es un break, es un continue, etc....
            }
        }
        else if(elsebloque != nullptr)
        {
            Resultado *aux = elsebloque->Interpretar(env);
            return nullptr;

        }



    }

    env->updateCommonVariables(envv);
    env->report();
    envv->report();


    return temp;
}

QString Bloque::Graficar() {
    // Implement the Graficar function here, as needed for your application
    return QString();
}
