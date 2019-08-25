#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}ePersona;


//************INICIALIZACIONES****************//
/** \brief Funcion que utilizo para harcodear 18 datos distintos.
 *
 * \param ePersona lista que voy a cargar hardcodeado.
 * \return void.
 *
 */
void inicializarHardcodePersonas(ePersona lista[]);



/** \brief Funcion para inicializar todos los estados como VACIO.
 *
 * \param lista[] EPersona lista que inicializa vacia.
 * \return void.
 */
int inicializacionPrincipal(ePersona lista[],int t);
//************INICIALIZACIONES****************//




//************GETS****************//
/** \brief Solicita un numero al usuario y devuelve el resultado
 *
 * \param mensaje Es el mensaje que será mostrado al usuario
 * \return Es el numero ingresado por el usuario.
 */
int getInt (char mensaje[]);



/** \brief Solicita un numero al usuario y devuelve el resultado
 *
 * \param mensaje Es el mensaje que será mostrado al usuario
 * \return Es el numero ingresado por el usuario.
 */
float getFloat (char mensaje[]);



/** \brief Solicita un caracter al usuario y devuelve el resultado
 *
 * \param mensaje Es el mensaje que será mostrado al usuario
 * \return Es el caracter ingresado por el usuario.
 */
char getChar(char mensaje[]);
//************GETS****************//




//************VALIDACIONES****************//
/** \brief Funcion que hace mayusculas las primeras letras de los nombres o strings ingresados.
 *
 * \param caracter[] char string que va a ser modificado.
 * \return void
 */
void stringToUpper(char caracter[]);



/** \brief Verifica si el valor recibido es numerico.
 *
 * \param str Array con la cadena que va a ser analizada.
 * \return 1 si es numero // 0 si no es numero.
 */
int esNumerico (char str[]);



/** \brief Verifica si el valor recibido contiene solamente numeros, + y -.
 *
 * \param str Array con la cadena que va a ser analizada.
 * \return 1 si es numero, con espacios y guion // 0 si no es numero.
 */
int esTelefono (char str[]);



/** \brief Verifica si el valor recibido contiene solamente letras.
 *
 * \param str Array con la cadena que va a ser analizada.
 * \return 1 si contiene solo espacios y letras // 0 si contiene numero, etc.
 */
int esSoloLetras (char str[]);



/** \brief Verifica si el valor recibido contiene solo letras y numeros.
 *
 * \param str Array con la cadena que va a ser analizada.
 * \return 1 si contiene solo espacio o letras y numeros // 0 si no.
 */
int esAlfaNumerico (char str[]);



/** \brief Solicita un texto al usuario.
 *
 * \param mensaje Es el mensaje a ser mostrado.
 * \param input Array donde se cargara el texto ingresado.
 * \return void.
 */
void getString(char mensaje[], char input[]);



/** \brief Solicita un texto al usuario y lo devuelve.
 *
 * \param mensaje Es el mensaje a ser mostrado.
 * \param input Array donde se cargará el texto ingresado.
 * \return 1 si el texto contiene SOLO letras.
 */
int getStringLetras(char mensaje[], char input[]);



/** \brief Solicita un texto numerico al usuario y lo devuelve
 *
 * \param mensaje Es el mensaje a ser mostrado.
 * \param input Array donde se cargara el texto ingresado.
 * \return 1 si el texto contiene SOLO numeros.
 */
int getStringNumeros(char mensaje[], char input[]);
//************VALIDACIONES****************//




//************ESPECIFICAS DEL TRABAJO PRACTICO 2****************//
/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(ePersona lista[], int t);



/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(ePersona lista[], int dni, int t);



 /** \brief Funcion que se utiliza para dar de alta una persona en el sistema.
  *
  * \param lista[] ePersona es la estructura donde se almacenan los datos a guardar.
  * \param int Es la cantidad de personas en la estructura.
  * \return
  */
int altaDePersonas(ePersona lista[],int t);



/** \brief Funcion que se utiliza para dar de baja una persona en el sistema.
  *
  * \param lista[] ePersona es la estructura donde se almacenan los datos a borrar.
  * \param int Es la cantidad de personas en la estructura.
  * \return
  */
int bajaDePersona(ePersona lista[],int t);



/** \brief Funcion para ordenar segun nombre
 *
 * \param lista[] ePersona Estructura donde estan los usuarios.
 * \param int Tamaño / cantidad de usuarios.
 * \return void.
 */
void ordenarSegunNombre(ePersona lista[], int t);



/** \brief Funcion que muestra un grafico acerca de las edades del usuario
 *
 * \param lista[] ePersona Estructura donde estan los usuarios.
 * \return void.
 */
void mostrarGrafico(ePersona lista[]);

#endif // FUNCIONES_H_INCLUDED
