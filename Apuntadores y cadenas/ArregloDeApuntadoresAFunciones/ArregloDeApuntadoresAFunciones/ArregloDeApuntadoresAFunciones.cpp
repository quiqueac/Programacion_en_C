// ArregloDeApuntadoresAFunciones.cpp: define el punto de entrada de la aplicación de consola.
// Demostración de un arreglo de apuntadores a funciones.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// prototipos de funciones
void funcion1(int);
void funcion2(int);
void funcion3(int);

int main()
{
	// inicializa el arreglo de 3 apuntadores a funciones, las cuales
	// toman un argumento int y devuelve void
	void(*f[3])(int) = { funcion1,funcion2,funcion3 };

	int seleccion;

	cout << "Introduzca un numero entre 0 y 2, 3 para finalizar: ";
	cin >> seleccion;

	// procesa la opción del usuario
	while (seleccion >= 0 && seleccion < 3)
	{
		// invoca la función en la localidad elegida del arreglo f
		// y pasa la opción como un argumento
		(*f[seleccion])(seleccion);

		cout << "Introduzca un numero entero entre 0 y 2, 3 para finalizar: ";
		cin >> seleccion;
	}

	cout << "Programa terminado." << endl;

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

void funcion1(int a)
{
	cout << "Usted introdujo " << a << " por lo tanto, llamo a la funcion1\n\n";
}	// fin de la funcion1

void funcion2(int b)
{
	cout << "Usted introdujo " << b << " por lo tanto, llamo a la funcion2\n\n";
}	// fin de la funcion2

void funcion3(int c)
{
	cout << "Usted introdujo " << c << " por lo tanto, llamo a la funcion3\n\n";
}	// fin de la funcion3



