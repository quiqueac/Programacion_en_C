// InicializarUnaReferencia.cpp: define el punto de entrada de la aplicación de consola.
// Las referencias se deben inicializar.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int x = 3;

	// y hace referencia a (es un alias para) x
	int &y = x;

	cout << "x = " << x << endl << "y = " << y << endl;
	y = 7;
	cout << "x = " << x << endl << "y = " << y << endl;

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

