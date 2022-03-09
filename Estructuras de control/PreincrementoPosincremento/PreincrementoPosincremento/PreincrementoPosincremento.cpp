// PreincrementoPosincremento.cpp: define el punto de entrada de la aplicaci�n de consola.
// Preincremento y posincremento.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

// la funci�n main comienza la ejecuci�n del programa
int main()
{
	int c;	// declara la variable

	// demuestra el posincremento
	c = 5;	// asigna 5 a c
	cout << c << endl;	// despliega 5
	cout << c++ << endl;	// despliega 5 y despues posincrementa
	cout << c << endl << endl;	//despliega 6

	// demuestra el preincremento
	c = 5;	// asigna 5 a c
	cout << c << endl;	// despliega 5
	cout << ++c << endl;	// preincrementa y despues despliega 6
	cout << c << endl;

	system("pause");

    return 0;	// indica que el programa termin� satisfactoriamente
}	// fin de la funci�n main

