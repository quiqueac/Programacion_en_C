// RepeticionConContador.cpp: define el punto de entrada de la aplicaci�n de consola.
// Repetici�n controlada por un contador.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

// la funci�n main comienza la ejecuci�n del programa
int main()
{
	int contador = 1;	// inicializaci�n

	while (contador <= 10)	// condici�n de la repetici�n
	{
		cout << contador << endl;	// desplegar contador
		++contador;		// incremento
	}	// fin de while

	system("pause");
    return 0;	// indica terminaci�n exitosa
}	// fin de la funcion main

