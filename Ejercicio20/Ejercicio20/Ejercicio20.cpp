// Ejercicio20.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	short baseTriangulo;
	short alturaRectangulo;
	short anchoRectangulo;
	short i;
	short j;
	short k;
	short temporal;
	bool condicionIncumplida;
	do
	{
		cout << "Introduzca la base del triangulo: ";
		cin >> baseTriangulo;
		if (baseTriangulo > 41)
		{
			condicionIncumplida = true;
			cout << "Este valor no puede ser mayor a 40." << endl << endl;
		}
		else
		{
			condicionIncumplida = false;
		}
	} while (condicionIncumplida);
	cout << "Introduzca la altura del rectangulo: ";
	cin >> alturaRectangulo;
	do
	{
		cout << "Introduzca el ancho del rectangulo: ";
		cin >> anchoRectangulo;
		if (anchoRectangulo >= baseTriangulo || anchoRectangulo == 0)
		{
			condicionIncumplida = true;
			cout << "Este valor no puede ser mayor o igual que la base del triangulo o igual a 0." << endl << endl;
		}
		else
		{
			condicionIncumplida = false;
		}
	} while (condicionIncumplida);
	for (i = 0; i <= baseTriangulo; i++)
	{
		for (j = 0; j < baseTriangulo - i; j++)
		{
			cout << " ";
		}
		for (k = 0; k < i; k++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	temporal = baseTriangulo - anchoRectangulo;
	for (j = 0; j < alturaRectangulo; j++)
	{
		for (i = 0; i < temporal; i++)
		{
			cout << " ";
		}
		for (i = 0; i < anchoRectangulo; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
	system("pause");
    return 0;
}

