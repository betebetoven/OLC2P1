#include "nt_declfunc.h"
#include "nt_bloque.h"

Resultado *NT_DeclFunc::Interpretar(Environment *ctx, EnvironmentFunc* ctx2, EnvironmentVect* ctx3) {

    AbstractExpr* aux= nullptr;
    Resultado* idR = this->ID->Interpretar(ctx, ctx2,ctx3);
    Resultado* tipoR = this->tipo->Interpretar(ctx, ctx2,ctx3);
    if (this->Expr) {
        //Resultado* exprR = this->Expr->Interpretar(ctx, ctx2,ctx3);
        if(this->declaraciones.size() != 0){
            std::cout<<"SI ENTRA A LA SUMA DE LAS DECLARACIONES .............................................."<<std::endl;
            Bloque *t =dynamic_cast<Bloque*>( this->Expr);
            t->declaracionparametros = this->declaraciones;
            aux = t;
        }




        QString varName = idR->getValor().toString();
        std::string valueType = tipoR->getTipo().toStdString();
        if (aux == nullptr)
        ctx2->addVariable(varName.toStdString(), valueType, Expr);
        else
            ctx2->addVariable(varName.toStdString(), valueType,aux);
    }

    return nullptr;
}
QString NT_DeclFunc::Graficar() {
    std::stringstream  pPosicion, idPosicion, ePosicion, tPosicion ;
    pPosicion <<(void*)this;
    idPosicion <<(void*)this->ID;
    ePosicion <<(void*)this->Expr;
    tPosicion <<(void*)this->tipo;

    QString nodo = QString::fromStdString("n" + pPosicion.str() +
            " [ label=\"Decl FUNCION\" , fillcolor=red];\n");
    nodo +=  QString::fromStdString("n" + pPosicion.str() + " -> n"
            + idPosicion.str()+ ";\n");
    nodo += this->ID->Graficar();
    nodo +=  QString::fromStdString("n" + pPosicion.str() + " -> n"
            + tPosicion.str()+ ";\n");
    nodo += this->tipo->Graficar();

    if (this->Expr != nullptr){
        nodo +=  QString::fromStdString("n" + pPosicion.str() + " -> n"
                + ePosicion.str()+ ";\n");
        nodo += this->Expr->Graficar();
    }
    return nodo;
}


NT_DeclFunc::NT_DeclFunc(AbstractExpr *tipo, AbstractExpr *id, AbstractExpr *expr) : tipo(tipo), ID(id), Expr(expr) {this->declaraciones = {};}
NT_DeclFunc::NT_DeclFunc(AbstractExpr *tipo, AbstractExpr *id, AbstractExpr *expr, const QVector<AbstractExpr*>& declaraciones) : tipo(tipo), ID(id), Expr(expr), declaraciones(declaraciones){}
