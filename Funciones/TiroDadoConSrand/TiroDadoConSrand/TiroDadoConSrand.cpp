// TiroDadoConSrand.cpp: define el punto de entrada de la aplicación de consola.
// Randomización del programa de dados.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <iomanip>

using std::setw;

// contiene prototipos para las funciones srand y rand
#include <cstdlib>

// la función main inicia la ejecución del programa
int main()
{
	unsigned semilla;

	cout << "Introduce semilla: ";
	cin >> semilla;
	srand(semilla);	// establece la semilla para el generador de números aleatorios

	// ciclo de 10 repeticiones
	for (int contador = 1; contador <= 10; contador++)
	{
		// escoge un número aleatorio entre 1 y 6 y lo despliega
		cout << setw(10) << (1 + rand() % 6);

		// si el contador es divisible entre 5, comienza una nueva línea de salida
		if (contador % 5 == 0)
			cout << endl;
	}	// fin de for

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

