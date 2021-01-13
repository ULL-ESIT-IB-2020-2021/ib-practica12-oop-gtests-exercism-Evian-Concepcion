/**
 @file funciones_complejo.cc
 @author Evian
 @brief archivo de cabecera
 */
#include <iostream>
#include "complejo_funcion.h"
using namespace std;


/**
 @brief sumar
 @param co
 @param co1
 @return Complejo 
 */
Complejo suma(const Complejo& co, const Complejo& b2){
    Complejo resultado;
    resultado.real = co.real + b2.real;
    resultado.imaginario = co.imaginario + b2.imaginario;
    return resultado;
}

/**
 @brief restar
 @param co 
 @param co1 
 @return Complejo 
 */
Complejo resta(const Complejo& co, const Complejo& co1){
    Complejo resultado;
    resultado.real = co.real - co1.real;
    resultado.imaginario = co.imaginario - co1.imaginario;
    return resultado;
}


void Complejo::print(){
    std::cout<<real<<" "<<imaginario<<"i"<< endl;

}

/**
 @brief pedir ayuda
 @param argc 
 @param argv 
 */
void help(int argc, char* argv[]){
    if(argc!= 1){
        cout<<"Fallo en el nymero de parametros"<< endl;
        cout<<"Para más iformacion utilice: "<<argv[0]<<" --help"<< endl;
        exit(EXIT_SUCCESS);
    }
    if (argc == 2){
        if(argv[1]=="--help"){
            cout<<"Con el programar pudes hacer las funciones suma y resta de numero complejos"<<std::endl;
            cout<<"Se utiliza por ejemplo: "<<argv[0]<< endl;
            exit(EXIT_SUCCESS);
        }
    }
}