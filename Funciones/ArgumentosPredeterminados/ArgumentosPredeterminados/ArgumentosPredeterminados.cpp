// ArgumentosPredeterminados.cpp: define el punto de entrada de la aplicación de consola.
// Uso de argumentos predeterminados.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

// prototipo de la función que especifica argumentos predeterminados
int volumenCaja(int longitud = 1, int ancho = 1, int altura = 1);

int main()
{
	// sin argumentos utilice valores predeterminados para todas las dimensiones
	cout << "El volumen predeterminado de la caja es: " << volumenCaja();

	// especifique la longitud, ancho y altura predeterminados
	cout << "\n\nEl volumen de una caja de longitud 10,\n" << "ancho 1 y altura 1 es: " << volumenCaja(10);

	// especifique la longitud, ancho y altura predeterminados
	cout << "\n\nEl volumen de una caja de longitud 10,\n" << "ancho 5 y altura 1 es: " << volumenCaja(10, 5);

	// especifica todos los argumentos
	cout << "\n\nEl volumen de una caja de longitud 10,\n" << "ancho 5 y altura 2 es: " << volumenCaja(10, 5, 2) << endl;

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

// la funcion volumenCaja calcula el volumen de una caja
int volumenCaja(int longitud, int ancho, int altura)
{
	return longitud * ancho * altura;
}	// fin de la función volumenCaja