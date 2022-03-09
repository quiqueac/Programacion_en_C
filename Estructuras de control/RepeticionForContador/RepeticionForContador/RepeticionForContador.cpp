// RepeticionForContador.cpp: define el punto de entrada de la aplicación de consola.
// Repetición controlada por un contador mediante la estructura for.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

// la función main comienza la ejecución del programa
int main()
{
	// La inicialización, la condición de repetición y el incremento
	// se incluyen en el encabezado de la estructura for.

	for (int contador = 1; contador <= 10; contador++)
		cout << contador << endl;

	system("pause");	// indica terminación exitosa
    return 0;
}	// fin de la funcion main

