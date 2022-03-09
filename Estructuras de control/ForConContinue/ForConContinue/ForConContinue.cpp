// ForConContinue.cpp: define el punto de entrada de la aplicaci�n de consola.
// Uso de la instrucci�n continue en una estructura for.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

// la funci�n main comienza la ejecuci�n del programa
int main()
{
	// repite 10 veces
	for (int x = 1; x <= 10; x++)
	{
		// si x es 5, contin�a con la siguiente iteraci�n del ciclo
		if (x == 5)
			continue;	// evita el resto del c�digo en el cuerpo del ciclo

		cout << x << " ";	// despliega el valor de x
	}	// fin de la estructura for

	cout << "\nUso de continue para evitar que se despliegue el valor 5" << endl;

	system("pause");
    return 0;	// indica terminaci�n exitosa
}	// fin de la funci�n main

