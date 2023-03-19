#include "interfaz.h"
#include "parser.hpp"
#include "lex.yy.c"

QString Clase3::Interfaz::Analaizar(std::string entrada) {
    yy_scan_string(entrada.c_str(), this->lexer);
    this->Parser->set_debug_level(true);

    this->Parser->parse();
std::cout << "Size of raiz in Analaizar: " << this->raiz.size() << std::endl;
   /*  if (this->raiz != nullptr) {
        return this->raiz->Graficar();

    }
    return QString();*/
std::cout << "Class name of the first element in raiz: "
                  << typeid(*this->raiz[0]).name() << std::endl;


    Environment *env = new Environment(nullptr);
    /**this->raiz[0]->Interpretar(env);
    for (AbstractExpr *expr: this->raiz) {
                std::cout << "sientrafor" << std::endl;
                expr->Interpretar(env);
                env->report();
            }*/
    for (int i = 0; i < this->raiz.size(); i ++){

      Resultado* temp = this->raiz[i]->Interpretar(env);
        /// es un return? es un break, es un continue, etc....
    }

    std::cout << "ACA ESTA LA ENV DEL MAIN: " << this->raiz.size() << std::endl;
    env->report();
    return "salida";

    return 0;
}

QString Clase3::Interfaz::Ejecutar(std::string entrada) {
    yy_scan_string(entrada.c_str(), this->lexer);
    this->Parser->set_debug_level(true);

    this->Parser->parse();
    std::cout << "Size of raiz in Ejecutar: " << this->raiz.size() << std::endl;
    if (!this->raiz.isEmpty()) {

        Environment *env = new Environment(nullptr);
        for (const auto& expr : this->raiz) {
                    expr->Interpretar(env);
                }
        env->report();

        return "salida";
    }
    std::cout << "alv si esta vacio" << std::endl;
    return 0;

}

Clase3::Interfaz::Interfaz() {
    yylex_init(&this->lexer);
    this->loc = new yy::location();
    this->Parser = new yy::Parser(lexer, *loc, *this);
    //this->raiz = QVector<AbstractExpr*>();
}

Clase3::Interfaz::~Interfaz() {
    yylex_destroy(lexer);
    delete loc;
    delete Parser;
}
