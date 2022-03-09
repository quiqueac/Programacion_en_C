// PromedioSalonClasesIndefinidos.cpp: define el punto de entrada de la aplicación de consola.
// Programa que calcula el promedio de una clase mediante una 
// repetición controlada por un centinela.

#include "stdafx.h"
#include <iostream>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>		// manipuladores de flujo parametrizados

using std::setprecision;		// asigna la precisión de la salida numérica

int main()
{
	int total;		// suma de las calificaciones
	int contadorCalificacion;	//número de calificaciones introducidas
	int calificacion;		// valor de la calificación

	double promedio;	// número con punto decimal para el promedio

	// fase de inicialización
	total = 0;		// inicializa el total
	contadorCalificacion = 0;	// inicializa el contador del ciclo

	// fase de procesamiento
	// obtiene la primera calificación a partir del usuario
	cout << "Introduzca calificacion, -1 para finalizar: ";		// indicador para la entrada
	cin >> calificacion;	// lee la calificación que introduce el usuario

	// repetición del ciclo hasta que el usuario introduce el valor centinela

	while (calificacion != -1)
	{
		total = total + calificacion;	// suma calificación al total
		contadorCalificacion = contadorCalificacion + 1;	// incrementa el contador

		cout << "Introduzca calificacion, -1 para finalizar: ";		// indicador para la entrada
		cin >> calificacion;	// lee la siguiente calificación
	}	// fin de while

	// fase de terminación
	// si el usuario introdujo  al menos una calificación...
	if (contadorCalificacion != 0)
	{
		// calcula el promedio de todas las calificaciones introducidas
		promedio = static_cast<double>(total) / contadorCalificacion;

		// despliega el promedio con dos digitos de precisión
		cout << "El promedio de la clase es " << setprecision(2)
			<< fixed << promedio << endl;
	}	// parte final ddel if correspondiente al if/else

	else	// si no se introdujeron calificaciones, arroja el mensaje apropiado
		cout << "No se introdujero calificaciones";

	system("pause");

    return 0;	// indica que el programa terminó satisfactoriamente
}	// fin de la función main

