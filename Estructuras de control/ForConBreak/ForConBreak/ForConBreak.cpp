// ForConBreak.cpp: define el punto de entrada de la aplicaci�n de consola.
// Uso de la instrucci�n break en una estructura for.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

// la funci�n main comienza la ejecuci�n del programa
int main()
{
	int x;	// se declara aqui, para poder utiizarla despu�s del ciclo

	// repite 10 veces
	for (x = 1; x <= 10; x++)
	{
		// si x es 5, termina el ciclo
		if (x == 5)
			break;	// interrumpe el ciclo, s�lo si x es 5

		cout << x << " ";	// despliega el valor de x
	}	// fin de for

	cout << "\nInterrupcion del ciclo cuando x se volvio " << x << endl;

	system("pause");
    return 0;	// indica terminaci�n exitosa
}	// fin de la funci�n main

