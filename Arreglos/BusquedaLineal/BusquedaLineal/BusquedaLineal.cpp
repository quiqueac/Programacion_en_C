// BusquedaLineal.cpp: define el punto de entrada de la aplicación de consola.
// Busqueda lineal en un arreglo.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int busquedaLineal(const int[], int, int);

int main()
{
	const int tamanoArreglo = 100;	// tamaño del arreglo a
	int a[tamanoArreglo];	// crea el arreglo a
	int claveBusqueda;	// valor a localizar dentro de a

	for (int i = 0; i < tamanoArreglo; i++)	// crea algunos datos
		a[i] = 2 * i;

	cout << "Introduce la clave de busqueda entera: ";
	cin >> claveBusqueda;

	// Intenta localizar claveBusqueda dentro del arreglo a
	int elemento = busquedaLineal(a, claveBusqueda, tamanoArreglo);

	// despliega los resultados
	if (elemento != -1)
		cout << "Encontre valor en el elemento " << elemento << endl;
	else
		cout << "Valor no encontrado" << endl;

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

/*
Compara la clave con cada elemento del arreglo hasta encontrar su
ubicación o hasta que se alcanza el final del arreglo; devuelve el
subíndice del elemento si es la clave o -1 o si ésta no se encontró
*/
int busquedaLineal(const int arreglo[], int clave, int tamanoDelArreglo)
{
	for (int j = 0; j < tamanoDelArreglo; j++)
	{
		if (arreglo[j] == clave)	// si se encuentra
			return j;	//devuelve la ubicación de la clave
	}
	return -1;	// la clavve no se encontró
}	// fin de la función busquedaLineal
