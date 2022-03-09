// CalculoInteresConFor.cpp: define el punto de entrada de la aplicaci�n de consola.
// C�lculo del inter�s compuesto.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;
using std::ios;
using std::fixed;

#include <iomanip>

using std::setw;
using std::setprecision;

#include <cmath>	// permite al programa utilizar la funci�n pow

// la funci�n main comienza la ejecuci�n del programa
int main()
{
	double monto;	// monto del deposito
	double principal = 1000.0;	// monto principal (al inicio)
	double tasa = .05;		// tasa de inter�s

	// despliega encabezados de las columnas de la tabla
	cout << "Anio" << setw(21) << "Monto del deposito" << endl;

	// asigna el formato de n�mero de punto flotante
	cout << fixed << setprecision(2);

	// calcula el monto del dep�sito para cada uno de los diez a�os
	for (int anio = 1; anio <= 10; anio++)
	{
		// calcula el nuevo monto para el a�o especificado
		monto = principal * pow(1.0 + tasa, anio);

		// despliega una fila de la tabla
		cout << setw(4) << anio
			<< setw(21) << monto << endl;

	}	// fin del for

	system("pause");
    return 0;	// indica terminaci�n exitosa
}	// fin de la funci�n main

