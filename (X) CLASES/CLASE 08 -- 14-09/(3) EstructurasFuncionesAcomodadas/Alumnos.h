typedef struct{
int legajo;
char nombre[50]; // Guarda una cadena. Por eso es un vector.
char direccion[50];
float promedio;
}eAlumno;


eAlumno cargarAlumno();
void mostrarAlumno (eAlumno alumnoParametro);
void cargarListado(eAlumno[], int tam);
void mostrarListado(eAlumno[], int tam);
