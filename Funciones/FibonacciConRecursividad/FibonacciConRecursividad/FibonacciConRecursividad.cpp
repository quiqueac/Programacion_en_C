// FibonacciConRecursividad.cpp: define el punto de entrada de la aplicación de consola.
// Función recursiva fibonacci.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

unsigned long fibonacci(unsigned long);	// prototipo de la función

int main()
{
	unsigned long resultado, numero;

	// obtiene entero del usuario
	cout << "Introduzca un entero: ";
	cin >> numero;

	// calcula el valor fibonacci del número introducido por el usuario
	resultado = fibonacci(numero);

	// despliega el resultado
	cout << "Fibonacci(" << numero << ") = " << resultado << endl;

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

// definición recursiva de la función fibonacci
unsigned long fibonacci(unsigned long n)
{
	// caso base
	if (n == 0 || n == 1)
		return n;
	// paso recursivo
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}	// fin de la función fibonacci

