// ApuntadorNoConstDatoConst.cpp: define el punto de entrada de la aplicación de consola.
// Intento de modificar datos a través de un
// apuntador no constante a un dato constante.

#include "stdafx.h"
#include <iostream>

void f(const int *);	// prototipo

int main()
{
	int y;

	f(&y);	// f intenta una modificación ilegal

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

// ptrX no se puede modificar el valor de la variable
// a la cual apunta
void f(const int *ptrX)
{
	//*ptrx = 100;	// error: no se puede modificar un objeto const
}	// fin de la función f
