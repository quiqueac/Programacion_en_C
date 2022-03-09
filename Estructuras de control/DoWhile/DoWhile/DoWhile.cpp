// DoWhile.cpp: define el punto de entrada de la aplicaci�n de consola.
// Uso de la estructura de repetici�n do/while

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

// la funci�n main comienza la ejecuci�n del programa
int main()
{
	int contador = 1;	// inicializa contador

	do
	{
		cout << contador << "  ";	// despliega contador
	} while (++contador <= 10);		// fin de do/while

	cout << endl;

	system("pause");
    return 0;	// indica terminaci�n exitosa
}	// fin de funci�n main

