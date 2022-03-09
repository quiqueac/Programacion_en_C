// FuncionInline.cpp: define el punto de entrada de la aplicación de consola.
// Uso de una función inline para calcular 
// el volumen de un cubo.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/* 
Definición de la función inline cubo. La definición de la función
aparece antes de que se llame a la función, de manera que no se
requiere el prototipo de la función. La primera línea de la definición
de la función actúa como el prototipo.
*/

inline double cubo(const double lado)
{
	return lado * lado * lado;	// calcula el cubo
}	// fin de la función cubo

int main()
{
	cout << "Introduzca la longitud del lado de su cubo: ";
	double valorLado;
	cin >> valorLado;

	// calcula el cubo de valorLado y despliega el resultado
	cout << "El volumen del cubo cuyo lado es " << valorLado << " es " << cubo(valorLado) << endl;

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

