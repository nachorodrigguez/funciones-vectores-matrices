#include <iostream>
#include "funciones.h"
#include <ctime>

using namespace std;

int pedirNumeroPositivo(){
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    while (n<0){
        cout << "Ingrese un valor valido: " << endl;
        cin >> n;
    }
    cout << "El numero es valido" << endl;
}

int pedirNumeroEntre(int inicio,int fin){
    int n;
    cout << "Ingrese un numero entre " << inicio << " y " << fin << ": ";
    cin >> n;

    while (n <= inicio || n >= fin){
        cout << "Ingrese un numero entre " << inicio << " y " << fin << ": ";
        cin >> n;
    }
    cout << "El numero esta entre 1 y 100."<< endl;
}

float pedirNumeroEntre(float inicio,float fin){
    float n;
    cout << "Ingrese un numero entre " << inicio << " y " << fin << ": ";
    cin >> n;

    while (n <= inicio || n >= fin){
        cout << "Ingrese un numero entre " << inicio << " y " << fin << ": ";
        cin >> n;
    }
    cout << "El numero esta entre 1 y 100."<< endl;
}

void mostrarMatriz(int matriz[][12],int filas,  int columnas){
    for (int i=0 ; i<filas; i++){
            cout << "Fila: " << i+1 << endl;
        for (int c=0; c<columnas; c++){
            cout << "Columna: " << c+1 << "  Valor: " << matriz[i][c] << endl;
        }
    }
}

int cargarMatriz(int (*matriz)[12],int filas, int columnas){
    for (int i=0; i<filas; i++){
        for (int c=0; c<columnas; c++){
            matriz[i][c] = rand() % 100;
        }
    }
}

int sumaElementosMatriz(int matriz [][12],int filas, int columnas){
    for (int i=0; i<filas; i++){
            int suma=0;
        for (int c=0; c<columnas; c++){
            suma += matriz[i][c];
        }
    cout << "Fila " << i+1 << " Suma : " << suma<< endl;
    }
}


