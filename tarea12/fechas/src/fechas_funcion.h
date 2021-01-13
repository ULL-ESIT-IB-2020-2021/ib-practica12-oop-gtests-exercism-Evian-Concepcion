/**
  @file fechas_fucion.h
  @author Evian Concepcion Peña
  @brief declarar funciones
 */

#ifndef fechas_funcion_h_included
#define fechas_funcion_h_included

#include <iostream>
#include <string>
#include <vector>
using namespace std;
/**
 @param argc 
 @param argv 
 */
void comprobar(int argc, char* argv[]);

/**
 @brief class Fecha declaracion 
 */
class Fecha{
    public:
        int dia, mes, anio;
        bool operator>(const Fecha& b1);
        bool leap();
};
/**
 @param sin_ordenar 
 @param vectsize 
 */
void Ordenar(vector<Fecha> &fecha_para_ordenar, int tamano_vector);

#endif 