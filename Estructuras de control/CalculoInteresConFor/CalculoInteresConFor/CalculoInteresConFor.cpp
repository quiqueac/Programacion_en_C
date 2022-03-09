// CalculoInteresConFor.cpp: define el punto de entrada de la aplicación de consola.
// Cálculo del interés compuesto.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;
using std::ios;
using std::fixed;

#include <iomanip>

using std::setw;
using std::setprecision;

#include <cmath>	// permite al programa utilizar la función pow

// la función main comienza la ejecución del programa
int main()
{
	double monto;	// monto del deposito
	double principal = 1000.0;	// monto principal (al inicio)
	double tasa = .05;		// tasa de interés

	// despliega encabezados de las columnas de la tabla
	cout << "Anio" << setw(21) << "Monto del deposito" << endl;

	// asigna el formato de número de punto flotante
	cout << fixed << setprecision(2);

	// calcula el monto del depósito para cada uno de los diez años
	for (int anio = 1; anio <= 10; anio++)
	{
		// calcula el nuevo monto para el año especificado
		monto = principal * pow(1.0 + tasa, anio);

		// despliega una fila de la tabla
		cout << setw(4) << anio
			<< setw(21) << monto << endl;

	}	// fin del for

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de la función main

