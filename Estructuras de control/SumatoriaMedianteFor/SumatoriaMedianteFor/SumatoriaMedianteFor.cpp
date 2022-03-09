// SumatoriaMedianteFor.cpp: define el punto de entrada de la aplicaci�n de consola.
// Sumatoria mediante for.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

// la funci�n main comienza la ejecuci�n del programa
int main()
{
	int suma = 0;	// inicializa suma

	// suma enteros pares de 2 hasta 100
	for (int numero = 2; numero <= 100; numero += 2)
		suma += numero;		// suma numero a suma
	cout << "La suma es " << suma << endl;		// despliega la suma

	system("pause");	
    return 0;			// terminaci�n exitosa
}	// fin de la funci�n main

