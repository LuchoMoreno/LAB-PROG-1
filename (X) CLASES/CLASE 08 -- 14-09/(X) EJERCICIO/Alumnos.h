typedef struct{
int legajo;
char nombre[50]; // Guarda una cadena. Por eso es un vector.
char direccion[50];
int nota1;
int nota2;
int nota3;
float promedio;
}eAlumno;


eAlumno cargarAlumno();
void mostrarAlumno (eAlumno);
void cargarListado(eAlumno[], int tam);
void mostrarListado(eAlumno[], int tam);
float calcularPromedio (int, int, int);
int calcularAprobados (eAlumno);
