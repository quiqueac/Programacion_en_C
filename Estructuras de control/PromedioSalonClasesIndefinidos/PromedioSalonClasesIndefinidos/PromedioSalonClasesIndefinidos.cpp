// PromedioSalonClasesIndefinidos.cpp: define el punto de entrada de la aplicaci�n de consola.
// Programa que calcula el promedio de una clase mediante una 
// repetici�n controlada por un centinela.

#include "stdafx.h"
#include <iostream>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>		// manipuladores de flujo parametrizados

using std::setprecision;		// asigna la precisi�n de la salida num�rica

int main()
{
	int total;		// suma de las calificaciones
	int contadorCalificacion;	//n�mero de calificaciones introducidas
	int calificacion;		// valor de la calificaci�n

	double promedio;	// n�mero con punto decimal para el promedio

	// fase de inicializaci�n
	total = 0;		// inicializa el total
	contadorCalificacion = 0;	// inicializa el contador del ciclo

	// fase de procesamiento
	// obtiene la primera calificaci�n a partir del usuario
	cout << "Introduzca calificacion, -1 para finalizar: ";		// indicador para la entrada
	cin >> calificacion;	// lee la calificaci�n que introduce el usuario

	// repetici�n del ciclo hasta que el usuario introduce el valor centinela

	while (calificacion != -1)
	{
		total = total + calificacion;	// suma calificaci�n al total
		contadorCalificacion = contadorCalificacion + 1;	// incrementa el contador

		cout << "Introduzca calificacion, -1 para finalizar: ";		// indicador para la entrada
		cin >> calificacion;	// lee la siguiente calificaci�n
	}	// fin de while

	// fase de terminaci�n
	// si el usuario introdujo  al menos una calificaci�n...
	if (contadorCalificacion != 0)
	{
		// calcula el promedio de todas las calificaciones introducidas
		promedio = static_cast<double>(total) / contadorCalificacion;

		// despliega el promedio con dos digitos de precisi�n
		cout << "El promedio de la clase es " << setprecision(2)
			<< fixed << promedio << endl;
	}	// parte final ddel if correspondiente al if/else

	else	// si no se introdujeron calificaciones, arroja el mensaje apropiado
		cout << "No se introdujero calificaciones";

	system("pause");

    return 0;	// indica que el programa termin� satisfactoriamente
}	// fin de la funci�n main

