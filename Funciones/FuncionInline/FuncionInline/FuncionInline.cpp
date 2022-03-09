// FuncionInline.cpp: define el punto de entrada de la aplicaci�n de consola.
// Uso de una funci�n inline para calcular 
// el volumen de un cubo.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/* 
Definici�n de la funci�n inline cubo. La definici�n de la funci�n
aparece antes de que se llame a la funci�n, de manera que no se
requiere el prototipo de la funci�n. La primera l�nea de la definici�n
de la funci�n act�a como el prototipo.
*/

inline double cubo(const double lado)
{
	return lado * lado * lado;	// calcula el cubo
}	// fin de la funci�n cubo

int main()
{
	cout << "Introduzca la longitud del lado de su cubo: ";
	double valorLado;
	cin >> valorLado;

	// calcula el cubo de valorLado y despliega el resultado
	cout << "El volumen del cubo cuyo lado es " << valorLado << " es " << cubo(valorLado) << endl;

	system("pause");
    return 0;	// indica terminaci�n exitosa
}	// fin de main

