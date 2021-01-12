/**
 * @file funciones_complejo.h
 * @author Evian
 * @brief declaracion de funciones
 * 
 */
#ifndef complejo_funcion_h_included
#define complejo_funcion_h_included

/**
 
 */
void help(int argc, char* argv[]);

/**
 * @brief clase complejo
 * 
 */
class Complejo{
    public:
        int real;
        int imaginario;
        void print();

};

/**
 * @brief funcion suma
 * @param co 
 * @param co1 
 * @return Complejo 
 */
Complejo suma(const Complejo& co, const Complejo& co1);

/**
 * @brief funcion resta
 * 
 * @param co 
 * @param co1 
 * @return Complejo 
 */
Complejo resta(const Complejo& co, const Complejo& co1);
#endif