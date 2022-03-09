// AnalisisEncuesta.cpp: define el punto de entrada de la aplicación de consola.
// Este programa introduce el tema del análisis de encuestas.
// Calcula la media, la mediana y la moda de los datos.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;
using std::fixed;
using std::showpoint;

#include <iomanip>

using std::setw;
using std::setprecision;

void media(const int[], int);
void mediana(int[], int);
void moda(int[], int[], int);
void ordenaBurbuja(int[], int);
void despliegaArreglo(const int[], int);

int main()
{
	const int tamanoRespuestas = 99;	// tamaño del arreglo respuestas

	int frecuencia[10] = { 0 };	// inicializa el arreglo frecuencia

	// inicializa el arreglo respuestas
	int respuestas[tamanoRespuestas] =
	{
		6,7,8,9,8,7,8,9,8,9,
		7,8,9,5,9,8,7,8,7,8,
		6,7,8,9,3,9,8,7,8,7,
		7,8,9,8,9,8,9,7,8,9,
		6,7,8,7,8,7,9,8,9,2,
		7,8,9,8,9,8,9,7,5,3,
		5,6,7,2,5,3,9,4,6,4,
		7,8,9,6,8,7,8,9,7,8,
		7,4,4,2,5,3,8,7,5,6,
		4,5,6,1,6,5,7,8,7
	};

	// procesa las respuestas
	media(respuestas, tamanoRespuestas);
	mediana(respuestas, tamanoRespuestas);
	moda(frecuencia, respuestas, tamanoRespuestas);

	system("pause");
    return 0;
}

// calcula el promedio de todos los valores correspondientes a las respuestas
void media(const int resp[], int tamanoArreglo)
{
	int total = 0;

	cout << "********\n Media\n********\n";

	// total del valor de las respuestas
	for (int i = 0; i < tamanoArreglo; i++)
		total += resp[i];

	// da formato y despliega los resultados
	cout << fixed << setprecision(4);

	cout << "La media es el valor promedio de los elementos\n"
		<< "de datos. La media es igual al total de todos\n"
		<< "los elementos de datos dividido entre el numero\n"
		<< "de elementos de datos (" << tamanoArreglo
		<< "). El valor de la media para \nesta ejecucion es: "
		<< total << " / " << tamanoArreglo << " = "
		<< static_cast<double>(total) / tamanoArreglo
		<< "\n\n";
}	// fin de la función media

// ordena el arreglo y determina elvaalor de la mediana de los elementos
void mediana(int resp[], int tamano)
{
	cout << "\n********\n Mediana\n********\n" << "El arreglo desordenado de respuestas es";

	despliegaArreglo(resp, tamano);	// muestra el arreglo desordenado

	ordenaBurbuja(resp, tamano);	// ordena el arreglo

	cout << "\n\nEl arreglo ordenado es";
	despliegaArreglo(resp, tamano);	// muestra el arreglo ordenado

	// despliega la mediana
	cout << "\n\nLa mediana es el elemento " << tamano / 2
		<< " del\narreglo ordenado de " << tamano
		<< " elementos.\nPara esta ejecucion la mediana es "
		<< resp[tamano / 2] << "\n\n";
}	// fin de la función mediana

// determina la respuesta más frecuente
void moda(int frec[], int resp[], int tamano)
{
	int masGrande = 0;	// representa la frecuencia más grande
	int valorModa = 0;	// representa la frecuencia más frecuente

	cout << "\n********\n Mediana\n********\n";

	// inicializa las frecuencias en 0
	for (int i = 1; i <= 9; i++)
		frec[i] = 0;

	// resume laas frecuencias
	for (int j = 0; j < tamano; j++)
		++frec[resp[j]];

	// muestra los encabezados para las columnas de resultados
	cout << "Respuestas" << setw(11) << "Frecuencia"
		<< setw(19) << "Histograma\n\n" << setw(55)
		<< "1   1   2   2\n" << setw(56)
		<< "5   0   5   0   5\n\n";

	// despliega resultados
	for (int rating = 1; rating <= 9; rating++)
	{
		cout << setw(10) << rating << setw(11) << frec[rating] << "       ";

		// da seguimiento al valor de la moda y al valor de la frecuencia más grande
		if (frec[rating] > masGrande)
		{
			masGrande = frec[rating];
			valorModa = rating;
		}	// fin de if

		// muestra las barras del historama que representa los valores de frecuencia
		for (int k = 1; k <= frec[rating]; k++)
			cout << '*';

		cout << "\n";	// comienza una nueva línea de salida
	}	// fin del for externo

	// despliega el valor de la moda
	cout << "La moda es el valor mas frecuente.\n"
		<< "Para esta ejecucion la moda es " << valorModa
		<< " la cual tiene una ocurrencia de " << masGrande
		<< " veces." << endl;
}	// fin de la función moda

void ordenaBurbuja(int a[], int tamano)
{
	int mantiene;	// ubicación temporal utilizada para intercambiar elementos

	// ciclo para controlar el número de pasadas
	for (int pasada = 1; pasada < tamano; pasada++)

		// ciclo para controlar el número de comparaciones por pasada
		for (int j = 0; j < tamano - 1; j++)
		
			// intercambia elementos desordenados
			if (a[j] > a[j + 1])
			{
				mantiene = a[j];
				a[j] = a[j + 1];
				a[j + 1] = mantiene;
			}	// fin de if
}	// fin de la función ordenaBurbuja

// muestra el contenido del arreglo (20 valores por fila)
void despliegaArreglo(const int a[], int tamano)
{
	for (int i = 0; i < tamano; i++)
	{
		if (i % 20 == 0)	// comienza una nueva línea cada 20 valores
			cout << endl;

		cout << setw(2) << a[i];
	}	// fin de for
}	// fin de la función despliegaArreglo
