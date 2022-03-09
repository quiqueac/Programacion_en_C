// FuncionMayor.cpp: define el punto de entrada de la aplicación de consola.
// Encuentra el mayor de 3 números de punto flotante.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

double mayor(double, double, double);	// prototipo de la función

int main()
{
	double numero1;
	double numero2;
	double numero3;

	cout << "Introduzca tres numeros de punto flotante: ";
	cin >> numero1 >> numero2 >> numero3;

	// numero1, numero2 y numero3 son argumentos de la función mayor
	cout << "El mayor es: "
		<< mayor(numero1, numero2, numero3) << endl;

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

// definición de la función mayor
// x, y y z son parámetros
double mayor(double x, double y, double z)
{
	double may = x;		// asume que x es el mayor

	if (y > may)	// si y es mayor,
		may = y;	// asigna y a may

	if (z > may)	// si y es mayor,
		may = z;	// asigna z a may

	return may;		// may es el mayor
}	// fin dde la función mayor

