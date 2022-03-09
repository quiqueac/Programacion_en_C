// UsoDeConst.cpp: define el punto de entrada de la aplicación de consola.
// Uso apropiado de const

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	const int x = 7;	// variable constante inicializada

	/*
	const int x;	// error: x debe inicializarse
	x = 7;	// error: no se puede modificar una variable const
	*/

	cout << "El valor de la variable constante x es: " << x << endl;

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

