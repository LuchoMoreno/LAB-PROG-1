typedef struct{
    int dia;
    int mes;
    int anio;
}eFecha; // CON ESTO PUEDO ANIDAR ESTRUCTURAS. SE LLAMA COMPOSICION. PORQUE SON DATOS COMPUESTOS.

typedef struct{
int legajo;
char nombre[50]; // Guarda una cadena. Por eso es un vector.
char direccion[50];
float promedio;
int estado;
eFecha fechaNacimiento;
int idCurso;
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

void inicializarAlumnosConDatos (eAlumno[], int);

int cargarAlumnoEnListado(eAlumno[], int);

void mostrarListado(eAlumno[], int);

void inicializarAlumnos (eAlumno[], int, int);

int buscarEspacio (eAlumno[], int);

int borrarAlumno (eAlumno[], int);

int modificarAlumno (eAlumno[], int);
