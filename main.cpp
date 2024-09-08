#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class Programa {
private :
int largo_operaciones ;
char * puntero_operaciones ;
int * puntero_salida ;
char * operaciones ;
public :
void ejecutar_operador () ;
void mover ( char dir ) ;
void asignar ( int valor , int * salida ) ;
char obtener () ;
void terminar_programa () ;
Programa ( int largo_operaciones ) ;
void ejecutar () ;
};

void Programa::mover(char dir) {
    if (dir == '>') {
        if (puntero_salida < puntero_salida + largo_operaciones - 1) {
            ++puntero_salida;
        }
    } else if (dir == '<') {
        if (puntero_salida > puntero_salida) {
            --puntero_salida;
        }
    }
}

void Programa::asignar(int valor, int* salida) {
    *salida = valor;
}

char Programa::obtener(){
    
    if (valor = o){" "}
    else
}

class Interprete {
private :
int cant_programas ;
int largo_salida ;
int cargado ;
Programa * programas ;
int * salida ;
public :
Interprete ( int cant_programas , int largo_salidas ) ;
void cargar_programa ( int n ) ;
void ejecutar_programa () ;
void mostrar_programa_cargado () ;
void terminar_ejecucion () ;
};

void Interprete:: cargar_programa(int n){
    if(n){

    }
}

void Interprete::terminar_ejecucion() {
    for (int i = 0; i < cant_programas; ++i) {
        delete programas[i];
    }
    delete programas;
}

char main()
{
    int largo_programas,*arr, cant_programas;
    char p;
    fstream archivo;
    archivo.open("Programas.txt",ios::in);
    if(!archivo.is_open()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }
    archivo >> largo_programas;
    archivo >> cant_programas;
    arr= new int[largo_programas];
    




    archivo.close();
    return p;
}
