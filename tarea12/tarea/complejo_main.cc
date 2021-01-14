/**
 @file complejo_main.cc
 @author Evian
 @brief Programa que suma numeros complejos
 */
#include <iostream>
#include "complejo_funcion.h"

int main(int argc, char* argv[]){

    Complejo complejo1{2 ,5}, complejo2 {6, -5};
    Complejo resultado;
    resultado= suma(complejo1,complejo2);
    resultado.print();
    resultado= resta(complejo1, complejo2);
    resultado.print();
    resultado= multiplicacion(complejo1, complejo2);
    resultado.print();

    return 0;
}