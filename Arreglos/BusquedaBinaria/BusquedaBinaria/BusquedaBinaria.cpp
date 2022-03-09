// BusquedaBinaria.cpp: define el punto de entrada de la aplicaci�n de consola.
// B�squeda binaria dentro de un arreglo.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <iomanip>

using std::setw;

// prototipo de la funci�n
int busquedaBinaria(const int[], int, int, int, int);
void despliegaEncabezado(int);
void despliegaFila(const int[], int, int, int, int);

int main()
{
	const int tamanoArreglo = 15;	// tama�o del arreglo a
	int a[tamanoArreglo];	// crea el arreglo a
	int clave;	// valor a localizar en a

	for (int i = 0; i < tamanoArreglo; i++)	// crea algunos datos
		a[i] = 2 * i;

	cout << "introduzca un numero entre 0 y 28: ";
	cin >> clave;

	despliegaEncabezado(tamanoArreglo);

	// b�squeda dde la clave en el arreglo a
	int resultado = busquedaBinaria(a, clave, 0, tamanoArreglo - 1, tamanoArreglo);

	// despliega resultados
	if (resultado != -1)
		cout << '\n' << clave << "se enecuentra en el elemento del arreglo " << resultado << endl;

	else
		cout << '\n' << clave << " no se encontro" << endl;

	system("pause");
    return 0;	// indica terminaci�n exitosa
}	// fin de main

// funci�n para realizar la b�squeda binaria dentro de un arreglo
int busquedaBinaria(const int b[], int claveBusqueda, int bajo, int alto, int tamano)
{
	int central;

	// repetici�n hasta que el sub�ndice bajo sea mayor que el sub�ndice alto
	while (bajo <= alto)
	{
		// determina el elemento central del subarreglo en el que se busca
		central = (bajo + alto) / 2;

		// despliega el subarreglo utilizado en este ciclo de iteraci�n
		despliegaFila(b, bajo, central, alto, tamano);

		// si claveBusqueda coincide con el elemento central, devuelve el elemento central
		if (claveBusqueda == b[central])	// coincide
			return central;
		else
			// si claveBusqueda es menor que el elemento central,
			// establece el nuevo elemento alto
			if (claveBusqueda < b[central])
				alto = central - 1;	// busca bajo hasta el final del arreglo

			// si la claveBusqueda es mayor que el elemento central,
			// establece el nuevo elemento bajo
			else
				bajo = central + 1;	// busca bajo hasta el final del arreglo
	}
	return -1;	// no se encontr� claveBusqueda
}	// fin de la funci�n BusquedaBinaria

// despliega el encabezado de salida
void despliegaEncabezado(int tamano)
{
	cout << "\nSubindices:\n";

	//muestra encabezados de columnas
	for (int j = 0; j < tamano; j++)
		cout << setw(3) << j << ' ';

	cout << '\n';	// comienza nueva l�nea de salida

	// despliega l�nea de caracteres -
	for (int k = 1; k <= 4 * tamano; k++)
		cout << '-';

	cout << endl;	// comienza nueva l�nea de salida
}	// fin de la funci�n despliegaEncabezado

// despliega una fia de resultados que muestra la parte
// actual del arreglo qu est� en proceso
void despliegaFila(const int b[], int bajo, int cen, int alto, int tamano)
{
	// repite a trav�s de todo el arreglo
	for (int m = 0; m < tamano; m++)

		// despliega espacios si se enecuentra fuera del rango del subarreglo
		if (m<bajo || m>alto)
			cout << "   ";

		// despliega el elemento central marcado con un *
		else
			if (m == cen)	// marca el elemento central
				cout << setw(3) << b[m] << '*';

		// despliega otros elemento del subarreglo
			else
				cout << setw(3) << b[m] << ' ';

		cout << endl;	// comienza nueva l�nea de salida
}	// fin de la funci�n despliegaFila

