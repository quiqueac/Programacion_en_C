// FactorialConRecursividad.cpp: define el punto de entrada de la aplicaci�n de consola.
// Funci�n factorial recursiva.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

unsigned long factorial(unsigned long);	// prototipo de la funci�n

int main()
{
	// Ciclo de 10 repeticiones. Durante cada iteraci�n, calcula factorial(i) y despliega el resultado.
	for (int i = 0; i <= 10; i++)
		cout << setw(2) << i << "! = " << factorial(i) << endl;

	system("pause");
    return 0;	// indica terminaci�n exitosa
}	// fin de main

// definici�n recursiva de la funci�n factorial
unsigned long factorial(unsigned long numero)
{
	// caso base
	if (numero <= 1)
		return 1;
	// paso recursivo
	else
		return numero * factorial(numero - 1);
}	// fin de la funci�n factorial
