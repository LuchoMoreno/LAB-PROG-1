#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/** \brief Funcion que pide un valor numérico a ingresar
 *
 * \param char Muestra un mensaje ya definido. El cual se usará para saber la variable que se va a ingresar.
 * \return Retorna el valor numerico de la variable ingresada con anterioridad.
 *
 */
float mostrarNumero(char[]);



/** \brief Funcion que devuelve una suma de 2 variables numericas..
 *
 * \param float Pide el primer valor numerico.
 * \param float Pide el segundo valor numerico.
 * \return Retorna la suma de los dos valores ingresados.
 *
 */
float funcionSumar(float, float);



/** \brief Funcion que devuelve una resta de 2 variables numericas.
 *
 * \param float Pide el primer valor numerico.
 * \param float Pide el segundo valor numerico.
 * \return Retorna la resta de los dos valores ingresados.
 *
 */
float funcionRestar (float, float);



/** \brief Funcion que devuelve una division de 2 variables numericas. Siempre y cuando la segunda no sea 0.
 *
 * \param float Pide el primer valor numerico.
 * \param float Pide el segundo valor numerico (Distinto de 0).
 * \return Retorna la división de los dos valores ingresados.
 *
 */
float funcionDividir (float, float);



/** \brief Funcion que devuelve una multiplicacion de 2 variables numericas.
 *
 * \param float Pide el primer valor numerico.
 * \param float Pide el segundo valor numerico.
 * \return Retorna la multiplicacion de los dos valores ingresados.
 *
 */
float funcionMultiplicar (float , float);



/** \brief Funcion de devuelve el factorial de una variable numerica.
 *
 * \param int Pide el primer valor numerico entero.
 * \return Retorna el factorial del valor numérico ingresado.
 *
 */
int funcionFactorial (int);


#endif // FUNCIONES_H_INCLUDED
