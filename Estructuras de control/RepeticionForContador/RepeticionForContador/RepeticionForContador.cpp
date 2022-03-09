// RepeticionForContador.cpp: define el punto de entrada de la aplicaci�n de consola.
// Repetici�n controlada por un contador mediante la estructura for.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

// la funci�n main comienza la ejecuci�n del programa
int main()
{
	// La inicializaci�n, la condici�n de repetici�n y el incremento
	// se incluyen en el encabezado de la estructura for.

	for (int contador = 1; contador <= 10; contador++)
		cout << contador << endl;

	system("pause");	// indica terminaci�n exitosa
    return 0;
}	// fin de la funcion main

