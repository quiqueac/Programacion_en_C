// ArreglosConstAFunciones.cpp: define el punto de entrada de la aplicaci�n de consola.
// Demostraci�n del calificador de tipo const

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

void intentaModificarArreglo(const int[]);	// prototipo de la funci�n

int main()
{
	int a[] = { 10,20,30 };

	intentaModificarArreglo(a);

	cout << a[0] << ' ' << a[1] << ' ' << a[2] << '\n';

	system("pause");
    return 0;	// indica terminaci�n exitosa
}	// fin de main

// En la funci�n intentaModificarArreglo no se puede utilizar "b"
// para modificar el arreglo original "a" en main.
void intentaModificarArreglo(const int b[])
{
	//b[0] /= 2;	// error
	//b[1] /= 2;	// error
	//b[2] /= 2;	// error
}	// fin de la funci�n intentaModificarArreglo
