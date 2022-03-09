// TiroDadoConSrand.cpp: define el punto de entrada de la aplicaci�n de consola.
// Randomizaci�n del programa de dados.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <iomanip>

using std::setw;

// contiene prototipos para las funciones srand y rand
#include <cstdlib>

// la funci�n main inicia la ejecuci�n del programa
int main()
{
	unsigned semilla;

	cout << "Introduce semilla: ";
	cin >> semilla;
	srand(semilla);	// establece la semilla para el generador de n�meros aleatorios

	// ciclo de 10 repeticiones
	for (int contador = 1; contador <= 10; contador++)
	{
		// escoge un n�mero aleatorio entre 1 y 6 y lo despliega
		cout << setw(10) << (1 + rand() % 6);

		// si el contador es divisible entre 5, comienza una nueva l�nea de salida
		if (contador % 5 == 0)
			cout << endl;
	}	// fin de for

	system("pause");
    return 0;	// indica terminaci�n exitosa
}	// fin de main

