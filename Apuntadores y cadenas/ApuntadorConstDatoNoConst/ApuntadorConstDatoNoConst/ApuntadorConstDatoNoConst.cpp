// ApuntadorConstDatoNoConst.cpp: define el punto de entrada de la aplicaci�n de consola.
// Intento para modificar un apuntador constante a un
// dato no constante.

#include "stdafx.h"
#include <iostream>

int main()
{
	int x, y;

	/*
	ptr es un apuntador constante a un entero que se puede
	modificar a trav�s de ptr, pero ptr siempre apunta a la
	misma localidad de memoria.
	*/
	int * const ptr = &x;

	*ptr = 7;	// permitido: *ptr no es const
	//ptr = &y;	// error: ptr es const; no se puede asignar nueva direcci�n

	system("pause");
    return 0;
}

