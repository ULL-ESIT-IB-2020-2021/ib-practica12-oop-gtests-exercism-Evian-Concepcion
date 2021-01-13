/**
 * @file fecha.cc
 * @author Evian Concepcion Peña
 * @brief Este programa trata por edio de linea de comando
 recoger un archivo que sobre escriba un contenido en otra

 */


#include <iostream>
#include <cstring>
#include <fstream>
#include <vector>
#include "fechas_funcion.h"
using namespace std;


int main(int argc, char* argv[]){
 
    comprobar(argc,argv);
    vector<string> fechas;
    ifstream entrada(argv[1]);
    ofstream salida (argv[2]);
    string linea_archivo;
    while(getline(entrada,linea_archivo)){
        fechas.push_back(linea_archivo);
    }
    int tamano_vector = fechas.size();
    vector<Fecha> vfechas;
    for(int i =0; i<tamano_vector;i++){
        Fecha fecha1;
        fecha1.dia = stoi(fechas[i].substr(0,2));
        fecha1.mes = stoi(fechas[i].substr(3,5));
        fecha1.anio = stoi(fechas[i].substr(6,8));
        vfechas.push_back(fecha1);
    }
    
    Ordenar(vfechas,tamano_vector);
    for (int i=1; i<=tamano_vector;i++){
        salida<< vfechas[i].dia;
        salida<< "/";
        salida<< vfechas[i].mes;
        salida<< "/";
        salida<< vfechas[i].anio;
        salida<< endl;
    }
    return 0;
}