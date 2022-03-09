// ArreglosConstAFunciones.cpp: define el punto de entrada de la aplicación de consola.
// Demostración del calificador de tipo const

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

void intentaModificarArreglo(const int[]);	// prototipo de la función

int main()
{
	int a[] = { 10,20,30 };

	intentaModificarArreglo(a);

	cout << a[0] << ' ' << a[1] << ' ' << a[2] << '\n';

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

// En la función intentaModificarArreglo no se puede utilizar "b"
// para modificar el arreglo original "a" en main.
void intentaModificarArreglo(const int b[])
{
	//b[0] /= 2;	// error
	//b[1] /= 2;	// error
	//b[2] /= 2;	// error
}	// fin de la función intentaModificarArreglo
