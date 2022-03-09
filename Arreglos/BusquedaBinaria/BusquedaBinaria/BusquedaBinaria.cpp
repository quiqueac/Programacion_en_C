// BusquedaBinaria.cpp: define el punto de entrada de la aplicación de consola.
// Búsqueda binaria dentro de un arreglo.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <iomanip>

using std::setw;

// prototipo de la función
int busquedaBinaria(const int[], int, int, int, int);
void despliegaEncabezado(int);
void despliegaFila(const int[], int, int, int, int);

int main()
{
	const int tamanoArreglo = 15;	// tamaño del arreglo a
	int a[tamanoArreglo];	// crea el arreglo a
	int clave;	// valor a localizar en a

	for (int i = 0; i < tamanoArreglo; i++)	// crea algunos datos
		a[i] = 2 * i;

	cout << "introduzca un numero entre 0 y 28: ";
	cin >> clave;

	despliegaEncabezado(tamanoArreglo);

	// búsqueda dde la clave en el arreglo a
	int resultado = busquedaBinaria(a, clave, 0, tamanoArreglo - 1, tamanoArreglo);

	// despliega resultados
	if (resultado != -1)
		cout << '\n' << clave << "se enecuentra en el elemento del arreglo " << resultado << endl;

	else
		cout << '\n' << clave << " no se encontro" << endl;

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

// función para realizar la búsqueda binaria dentro de un arreglo
int busquedaBinaria(const int b[], int claveBusqueda, int bajo, int alto, int tamano)
{
	int central;

	// repetición hasta que el subíndice bajo sea mayor que el subíndice alto
	while (bajo <= alto)
	{
		// determina el elemento central del subarreglo en el que se busca
		central = (bajo + alto) / 2;

		// despliega el subarreglo utilizado en este ciclo de iteración
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
	return -1;	// no se encontró claveBusqueda
}	// fin de la función BusquedaBinaria

// despliega el encabezado de salida
void despliegaEncabezado(int tamano)
{
	cout << "\nSubindices:\n";

	//muestra encabezados de columnas
	for (int j = 0; j < tamano; j++)
		cout << setw(3) << j << ' ';

	cout << '\n';	// comienza nueva línea de salida

	// despliega línea de caracteres -
	for (int k = 1; k <= 4 * tamano; k++)
		cout << '-';

	cout << endl;	// comienza nueva línea de salida
}	// fin de la función despliegaEncabezado

// despliega una fia de resultados que muestra la parte
// actual del arreglo qu está en proceso
void despliegaFila(const int b[], int bajo, int cen, int alto, int tamano)
{
	// repite a través de todo el arreglo
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

		cout << endl;	// comienza nueva línea de salida
}	// fin de la función despliegaFila

