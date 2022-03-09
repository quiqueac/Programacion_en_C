// FrecuenciaCarasDado6000VecesArreglo.cpp: define el punto de entrada de la aplicación de consola.
// Tiro de un dado de 6 lados 6,000 veces.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

#include <cstdlib>
#include <ctime>

int main()
{
	const int tamanoArreglo = 7;
	int frecuencia[tamanoArreglo] = { 0 };

	srand(time(0));	// semilla del generador de números aleatorios

	// tira los dados 6,000 veces
	for (int tiro = 1; tiro <= 6000; tiro++)
		++frecuencia[1 + rand() % 6];	// remplaza el switch

	cout << "Cara" << setw(13) << "Frecuencia" << endl;

	// muestra la frecuencia de os elementos 1 a 6 en formato tabular
	for (int cara = 1; cara < tamanoArreglo; cara++)
		cout << setw(4) << cara << setw(13) << frecuencia[cara] << endl;

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

