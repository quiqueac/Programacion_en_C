// PromedioSalonClases.cpp: define el punto de entrada de la aplicaci�n de consola.
// Programa para obtener el promedio de una clase mediante una
// repetici�n controlada por un contador.

#include "stdafx.h"
#include <Windows.h>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// la funci�n main comienza la ejecuci�n del programa
int main()
{
	int total;	// suma de las calificaciones
				// introducidad por el usuario
	int contadorCalificacion;	// n�mero de la siguiente calificaci�n
								// a introducir
	int calificacion;	// valor de la calificaci�n
	int promedio;		// promedio de las calificaciones

	// fase de inicializacion
	total = 0;	// inicializa total
	contadorCalificacion = 1;	// inicializa el contador del ciclo

	// fase de procesamiento
	while (contadorCalificacion <= 10)	// repite diez veces
	{
		cout << "Introduzca la calificacion: ";		// indicador para entrada
		cin >> calificacion;	// lee calificacion del usuario
		total = total + calificacion;	//suma calificacion al total
		contadorCalificacion = contadorCalificacion + 1;	// incrementa el contador
	}

	// fase de terminaci�n
	promedio = total / 10;
	
	// despliega el resultado
	cout << "El promedio de la clase es " << promedio << endl;

	system("pause");

    return 0;	// indica que el programa termin� satisfasctoriamente
}	// fin de la funcion main

