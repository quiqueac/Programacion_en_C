// ApuntadorConstDatoConst.cpp: define el punto de entrada de la aplicación de consola.
// Intento para modificar un apuntador constante a un dato constante.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int x = 5;
	int y;

	// ptr es un apuntador constante a un entero constante.
	// ptr siempre apunta a la misma localidad; el entero
	// en esa localidad no se puede modificar.

	const int * const ptr = &x;

	cout << *ptr << endl;

	//*ptr = 7;	// error: *ptr es const; no se puede asignar un nuevo valor
	//ptr = &y;	// error: ptr es const; no se puede asignar una nueva dirección

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

