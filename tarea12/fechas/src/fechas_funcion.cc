/**
 * @file fechas_funcion.cc
 * @author Evian Concepción Peña
 * @brief funciones del archivo cabecera
 
 */

#include <iostream>
#include <vector>
#include <string>
#include "fechas_funcion.h"
using namespace std;


bool Fecha::operator>(const Fecha& parametro){
  if(anio>parametro.anio){
    return true;
  }       
  if((anio==parametro.anio)&&(mes>parametro.mes)){
    return true;
  }
  if((anio==parametro.anio)&&(mes==parametro.mes)&&(dia>parametro.dia)){
    return true;
  }
  return false;
}

bool Fecha::leap() {
    if((anio %4)==0){
        return true;
    }
    return false;
};

/**
 @brief Función que ayuda a saber como funciona el programa
 @param argc 
 @param argv 
 */
void comprobar(int argc, char* argv[]){

  if (argc== 2){
  string help ="--help";
      if(argv[1]==help){
      cout<<"El programa recoge fechas de un input.txt y las ordenas en un output.txt por linea de comando"<< endl;
      cout<<"Ejemplo: ./fechas input.txt output.txt"<< endl;
      exit(EXIT_SUCCESS);
      }
  }
  if (argc != 3){
      cout<<"Sobran cadenas por linea de comando."<<endl;
      cout<<"./fechas - Gestión de fechas"<<endl;
      cout<<"Pruebe ./fechas --help para más información. "<<endl;
      exit(EXIT_SUCCESS);
  }
}

/**
 @param sin_ordenar 
 @param vectsize 
 */
void Ordenar(vector<Fecha> &sin_ordenar, int vectsize){
  int x,y;
  Fecha tmp;
  for(x = 0; x < vectsize; x++) {
    for(y = 0; y < vectsize - x; y++) {
      if(sin_ordenar[y] > sin_ordenar[y + 1]) {
        tmp = sin_ordenar[y];
        sin_ordenar[y] = sin_ordenar[y + 1];
        sin_ordenar[y + 1] = tmp;
      }
    }
  }
}