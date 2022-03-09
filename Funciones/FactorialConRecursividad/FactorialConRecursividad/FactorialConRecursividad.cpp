// FactorialConRecursividad.cpp: define el punto de entrada de la aplicación de consola.
// Función factorial recursiva.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

unsigned long factorial(unsigned long);	// prototipo de la función

int main()
{
	// Ciclo de 10 repeticiones. Durante cada iteración, calcula factorial(i) y despliega el resultado.
	for (int i = 0; i <= 10; i++)
		cout << setw(2) << i << "! = " << factorial(i) << endl;

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

// definición recursiva de la función factorial
unsigned long factorial(unsigned long numero)
{
	// caso base
	if (numero <= 1)
		return 1;
	// paso recursivo
	else
		return numero * factorial(numero - 1);
}	// fin de la función factorial
