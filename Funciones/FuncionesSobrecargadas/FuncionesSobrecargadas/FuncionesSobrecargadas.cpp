// FuncionesSobrecargadas.cpp: define el punto de entrada de la aplicaci�n de consola.
// Uso de la sobrecarga de funciones

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

// funci�n cuadrado para valores int
int cuadrado(int x)
{
	cout << "Llama a cuadrado con un argumento int: " << x << endl;
	return x * x;
}	// fin de la versi�n int de la funci�n cuadrado

// funci�n cuadrado para valores double
double cuadrado(double y)
{
	cout << "Llama a cuadrado con un argumento double: " << y << endl;
	return y * y;
}	// fin de la versi�n double de la funci�n cuadrado

int main()
{
	int resultadoInt = cuadrado(7);	// llama a la versi�n int
	double resultadoDouble = cuadrado(7.5);	// llama a la versi�n double

	cout << "\nEl cuadrado del int 7 es " << resultadoInt << "\nEl cuadrado del double 7.5 es " << resultadoDouble << endl;

	system("pause");
    return 0;	// indica terminaci�n exitosa
}	// fin de main

