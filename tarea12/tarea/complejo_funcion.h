/**
 @file funciones_complejo.h
 @author Evian
 @brief declaracion de funciones
 */
#ifndef complejo_funcion_h_included
#define complejo_funcion_h_included

void help(int argc, char* argv[]);


class Complejo{
    public:
        int real;
        int imaginario;
        void print();

};

Complejo suma(const Complejo& co, const Complejo& co1);
Complejo resta(const Complejo& co, const Complejo& co1);
Complejo multiplicacion*(const Complejo& co, const Complejo& co1);

#endif