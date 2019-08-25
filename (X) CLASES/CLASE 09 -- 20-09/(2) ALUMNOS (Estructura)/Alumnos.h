typedef struct{
int legajo;
char nombre[50]; // Guarda una cadena. Por eso es un vector.
char direccion[50];
float promedio;

int estado;

}eAlumno;


eAlumno cargarAlumno();

void mostrarAlumno (eAlumno alumnoParametro);

/** \brief da de alta un alumno en el listado
 *
 * \param eAlumno[] el listado
 * \param tam int el tamaño del listado
 * \return int 0 = SI NO ENCONTRO ESPACIO // 1 = SI ENCONTRO ESPACIO
 *
 */
int cargarAlumnoEnListado(eAlumno[], int tam);

void mostrarListado(eAlumno[], int tam);

void inicializarAlumnos (eAlumno[], int tam, int);

int buscarEspacio (eAlumno[], int);

int borrarAlumno (eAlumno[], int);
