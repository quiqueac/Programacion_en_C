// PreincrementoPosincremento.cpp: define el punto de entrada de la aplicación de consola.
// Preincremento y posincremento.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

// la función main comienza la ejecución del programa
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

    return 0;	// indica que el programa terminó satisfactoriamente
}	// fin de la función main

