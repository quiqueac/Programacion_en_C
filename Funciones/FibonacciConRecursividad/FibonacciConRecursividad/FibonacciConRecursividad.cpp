// FibonacciConRecursividad.cpp: define el punto de entrada de la aplicaci�n de consola.
// Funci�n recursiva fibonacci.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

unsigned long fibonacci(unsigned long);	// prototipo de la funci�n

int main()
{
	unsigned long resultado, numero;

	// obtiene entero del usuario
	cout << "Introduzca un entero: ";
	cin >> numero;

	// calcula el valor fibonacci del n�mero introducido por el usuario
	resultado = fibonacci(numero);

	// despliega el resultado
	cout << "Fibonacci(" << numero << ") = " << resultado << endl;

	system("pause");
    return 0;	// indica terminaci�n exitosa
}	// fin de main

// definici�n recursiva de la funci�n fibonacci
unsigned long fibonacci(unsigned long n)
{
	// caso base
	if (n == 0 || n == 1)
		return n;
	// paso recursivo
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}	// fin de la funci�n fibonacci

