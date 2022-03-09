// FuncionElevarAlCuadrado.cpp: define el punto de entrada de la aplicación de consola.
// Creación y uso de una función nida por el programador.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

int cuadrado(int);	// prototipo de la función

int main()
{
	// repite 10 veces, calcula y despliega el cuadrado de x
	for (int x = 1; x <= 10; x++)
		cout << cuadrado(x) << "  ";	// llamada a la función

	cout << endl;

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

// definición de la función cuadrado, la cual devuelve el cuadrado de un entero
int cuadrado(int y)		// y es una copia del argumento de la función
{
	return y * y;	// devuelve el cuadrado de y como un int
}	// fin de la función cuadrado
