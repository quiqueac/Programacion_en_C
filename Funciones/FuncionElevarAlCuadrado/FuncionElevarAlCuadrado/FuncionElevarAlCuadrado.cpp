// FuncionElevarAlCuadrado.cpp: define el punto de entrada de la aplicaci�n de consola.
// Creaci�n y uso de una funci�n nida por el programador.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

int cuadrado(int);	// prototipo de la funci�n

int main()
{
	// repite 10 veces, calcula y despliega el cuadrado de x
	for (int x = 1; x <= 10; x++)
		cout << cuadrado(x) << "  ";	// llamada a la funci�n

	cout << endl;

	system("pause");
    return 0;	// indica terminaci�n exitosa
}	// fin de main

// definici�n de la funci�n cuadrado, la cual devuelve el cuadrado de un entero
int cuadrado(int y)		// y es una copia del argumento de la funci�n
{
	return y * y;	// devuelve el cuadrado de y como un int
}	// fin de la funci�n cuadrado
