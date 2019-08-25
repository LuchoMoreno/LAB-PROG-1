typedef struct{
    int idPelicula;
    char titulo[220];
    char genero[220];
    int duracion;
    char descripcion[200];
    int puntaje;
    char linkImagen[1500];
    int estadoPelicula;
}EMovie;


// FUNCIONES DE MUESTREO DE PUNTEROS.
/** \brief Funcion que muestra todos los datos almacenados en una estructura.
 *
 * \param eMovie* variable de tipo estructura a mostrar.
 * \param int limite del puntero.
 * \return int 0 si no pudo mostrar , 1 si pudo mostrar.
 *
 */
int mostrarPuntero(EMovie*, int);

/** \brief Funcion que muestra una sola posicion dentro de la estructura a la que se le asigne.
 *
 * \param eMovie*  variable de tipo estructura que se va a mostrar.
 * \return int 0 si no pudo mostrar, 1 si pudo mostrar.
 *
 */
int mostrarUno(EMovie*);


// FUNCIONES DE OBTENCION - ASIGNACION - INICIALIZACION.
/**
 * Obtiene el primer indice libre dentro del puntero.
 * @param EMovie* puntero que se pasa como parametro.
 * @param int limite del puntero.
 * @return El primer indice que se encuentre disponible.
 */
int obtenerEspacioLibre(EMovie*, int);


/** \brief Funcion que inicializa el estado de una persona en 0 para indicar que esta vacio y puede usarse.
 *
 * \param [] EMoive* puntero a iniciar.
 * \param int limite del puntero.
 * \return int -1  si no se pudo inicializar y 0 si pudo inicializarlo.
 *
 */
int iniciarEstadoPersona(EMovie*, int);


/** \brief Funcion que hace que el ID sea autoincremental.
 *
 * \param eMovie* puntero donde se almacenan peliculas y se pasa como parametro.
 * \param int limite del puntero.
 * \return int Devuelve el id del peliculas incrementado en 1 si se pudo y 0 si no se pudo.
 *
 */
int idAutoIncremental(EMovie*, int);


/**
 * Obtiene el indice que coincide con el id pasado por parametro.
 * @param EMovie* puntero donde se almacenan peliculas y se pasa como parametro.
 * @param id a ser buscado en el puntero.
 * @return indica si el indice coincide con el id.
 */
int buscarPorId(EMovie*, int , int);


/**
 * \brief Verifica si el valor recibido es numérico entero.
 * \param char* puntero con la cadena a ser analizada.
 * \return 1 si es númerico entero y 0 si no lo es.
 *
 */


// FUNCIONES YOUTUBE CON PUNTEROS
int esNumerico(char *) ;
/**
 * \brief Verifica si el valor recibido contiene solo letras y números.
 * \param char* puntero con la cadena a ser analizada.
 * \return 1 si contiene solo espacio o letras y números, y 0 si no lo es.
 *
 */
int esAlfaNumerico(char *);
/**
 * \brief Verifica si el valor recibido contiene solo letras.
 * \param char* puntero con la cadena a ser analizada.
 * \return 1 si contiene solo ' ' y letras y 0 si no lo es.
 *
 */
int esSoloLetras(char *);



// FUNCIONES GET PESADAS
/**
 * \brief Solicita un texto al usuario y lo devuelve.
 * \param char* Es el mensaje a ser mostrado.
 * \param char* puntero donde se cargará el texto ingresado.
 * \return void
 */
void getString(char* mensaje,char* input);
/**
 * \brief Solicita un texto al usuario y lo devuelve.
 * \param char* Es el mensaje a ser mostrado.
 * \param char* puntero donde se cargará el texto ingresado.
 * \return 1 si el texto contiene solo letras.
 */

int getStringLetras(char* mensaje,char* input);
/**
 * \brief Solicita un texto numérico al usuario y lo devuelve.
 * \param char[] Es el mensaje a ser mostrado.
 * \param char[] puntero donde se cargará el texto ingresado.
 * \return 1 si el texto contiene solo números enteros.
 */
int getStringNumeros(char* mensaje,char* input);
/**
 * \brief Solicita un texto Alfa numérico al usuario y lo devuelve.
 * \param char* Es el mensaje a ser mostrado.
 * \param char* puntero donde se cargará el texto ingresado.
 * \return 1 si el texto contiene solo números enteros o letras.
 */
int getAlfaNumerico(char* mensaje,char* input);


// ESPECIFICAS DE TP3

/** \brief Funcion que permite el alta de una pelicula a puntero.
 *
 * \param EMovie* Puntero a dar de alta
 * \param int limite del puntero
 * \return int mayor a 0 si se dio el alta,-2 si hay error de ortografia (solo en un caso) y -1 si no quedan mas espacios
 *
 */
int altaDePelicula(EMovie*, int);


/** \brief Funcion que permite borrar una peliculas del puntero.
 *
 * \param EMovie* Puntero a borrar datos.
 * \param int limite del puntero.
 * \return int mayor a 0 si se pudo borrar y -1 si se cancelo la baja.
 *
 */
int bajaDePelicula(EMovie*, int);



/** \brief Funcion que permite modificar una pelicula a puntero de EMovie.
 *
 * \param EMovie* Puntero a modificar datos.
 * \param int limite del puntero.
 * \return int mayor a 0 si se pudo modificar y -1 si se cancelo la modificacion.
 *
 */
int modificacionDePelicula(EMovie* , int);



/** \brief Funcion que permite mostrar el menu del dato que se desea modificar.
 *
 * \param EMovie* Puntero a modificar datos.
 * \param int limite del puntero.
 * \return int mayor a 0 si se pudo modificar y -1 si se cancelo la modificacion.
 *
 */
int menuModificacion(EMovie*, int);


/**
 * \brief Funcion que permite cargar datos a un archivo binario.
 * \param EMoive* Es el puntero con datos a cargar.
 * \param int limite del puntero.
 * \return 0 si no se pudo cargar , 1 si se pudo cargar.
 */
int cargarDesdeArchivo(EMovie*, int );


/**
 * \brief Funcion que permite guardar datos a un archivo bin.
 * \param EMoive* Es el puntero con datos a guardar.
 * \param int limite del puntero.
 * \return 0 si no se pudo guardar , 1 si se pudo guardar.
 */
int guardarEnArchivo(EMovie*, int );




/**
 * \brief Funcion que crea un archivo HTML donde se pueden ver las peliculas ingresadas.
 * \param EMoive* Es el puntero con datos.
 * \param int limite del puntero.
 * \return void
 */
void crearUnHTML(EMovie*, int);
