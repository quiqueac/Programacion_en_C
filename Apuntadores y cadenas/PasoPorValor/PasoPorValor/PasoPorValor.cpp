// PasoPorValor.cpp: define el punto de entrada de la aplicación de consola.
// Cubo de una variable mediante el paso por valor.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

int cuboPorValor(int);	// prototipo

int main()
{
	int numero = 5;

	cout << "El valor original del numero es " << numero;

	// pasa numero por valor a cuboPorValor
	numero = cuboPorValor(numero);

	cout << "\nEl nuevo valor del numero es " << numero << endl;

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

// calcula y devuelve el cubo de un argumento entero
int cuboPorValor(int n)
{
	return n * n * n;	// eleva al cubo la variable n y devuelve el resultado
}	// fin de la función cuboPorValor

