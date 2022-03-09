// RepeticionConContador.cpp: define el punto de entrada de la aplicación de consola.
// Repetición controlada por un contador.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

// la función main comienza la ejecución del programa
int main()
{
	int contador = 1;	// inicialización

	while (contador <= 10)	// condición de la repetición
	{
		cout << contador << endl;	// desplegar contador
		++contador;		// incremento
	}	// fin de while

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de la funcion main

