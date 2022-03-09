// InicializacionMatrices.cpp: define el punto de entrada de la aplicación de consola.
// Inicialización de arreglos con múltiples subíndices.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

void despliegaArreglo(int[][3]);

int main()
{
	int arreglo1[2][3] = { {1,2,3},{4,5,6} };
	int arreglo2[2][3] = { 1,2,3,4,5 };
	int arreglo3[2][3] = { {1,2},{4} };

	cout << "Los valores del arreglo1 por fila son:" << endl;
	despliegaArreglo(arreglo1);

	cout << "Los valores del arreglo2 por fila son:" << endl;
	despliegaArreglo(arreglo2);

	cout << "Los valores del arreglo3 por fila son:" << endl;
	despliegaArreglo(arreglo3);

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

// función para desplegar el arreglo con dos filas y tres columnas
void despliegaArreglo(int a[][3])
{
	for (int i = 0; i < 2; i++)	// for por cada fila
	{
		for (int j = 0; j < 3; j++)	// despliega los valores de las columnas
			cout << a[i][j] << ' ';

		cout << endl;	// inicia una nueva línea de salida
	}	// fin de la estructura for externa
}	// fin de la función despliegaArreglo
