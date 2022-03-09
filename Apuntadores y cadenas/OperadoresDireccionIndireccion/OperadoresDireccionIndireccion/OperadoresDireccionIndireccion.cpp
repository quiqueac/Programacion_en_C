// OperadoresDireccionIndireccion.cpp: define el punto de entrada de la aplicación de consola.
// Uso de los operadores & y *.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int a;	// a es un entero
	int *ptrA;	// ptrA es un apuntador a un entero

	a = 7;	
	ptrA = &a;	// a ptrA se le asigna la dirección de a

	cout << "La direccion de a es " << &a << "\nEl valor de ptrA es " << ptrA;

	cout << "\n\nEl valor de a es " << a << "\nEl valor de *ptrA es " << *ptrA;

	cout << "\n\nMuestra de que * y & son inversos " << "uno de otro.\n&*ptrA = " << &*ptrA
		<< "\n*&ptrA = " << *&ptrA << endl;

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

