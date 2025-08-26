#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{

    int numero = pedirNumeroPositivo();

    int n = pedirNumeroEntre(0);

    int matriz[30][12]{};

    cargarMatriz(matriz,30,12);

    mostrarMatriz(matriz,30,12);

    sumaElementosMatriz(matriz,30,12);


    return 0;
}
