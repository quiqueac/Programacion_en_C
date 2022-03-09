// FuncionRand.cpp: define el punto de entrada de la aplicación de consola.
// Escala y cambio de enteros producidos por 1 + rand() % 6

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

#include <cstdlib>	// contiene el prototipo de la función rand

int main()
{
	// ciclo de 20 repeticiones
	for (int contador = 1; contador <= 20; contador++)
	{
		// obtiene un número aleatorio entre 1 y 6 y lo despliega
		cout << setw(10) << (1 + rand() % 6);

		// si el contador es divisible entre 5, comienza nueva línea de salida
		if (contador % 5 == 0)
			cout << endl;
	}	// fin de la estructura for

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

