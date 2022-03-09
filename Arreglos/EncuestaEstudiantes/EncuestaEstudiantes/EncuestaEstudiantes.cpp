// EncuestaEstudiantes.cpp: define el punto de entrada de la aplicaci�n de consola.
// Programa de encuesta a estudiantes.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

int main()
{
	// define el tama�o de los arreglos
	const int tamanoRespuestas = 40;	// tama�o del arreglo respuestas
	const int tamanoFrecuencia = 11;	// tama�o del arreglo frecuencia

	//coloca las respuestas de la encuesta en el arreglo respuestas
	int respuestas[tamanoRespuestas] =
	{	
		1,2,6,4,8,5,9,7,8,10,
		1,6,3,8,6,10,3,8,2,7,
		6,5,7,6,8,6,7,5,6,6,
		5,6,7,5,6,4,8,6,8,10 
	};

	// inicializa contadores de frecuencia en 0
	int frecuencia[tamanoFrecuencia] = { 0 };

	/*
	para cada respuesta, seleccione un valor de un elemento del arreglo
	respuestas y util�celo como sub�ndice del arreglo
	frecuencia para determinar el elemento a incrementar
	*/
	for (int respuesta = 0; respuesta < tamanoRespuestas; respuesta++)
		++frecuencia[respuestas[respuesta]];

	// despliega los resultados
	cout << "Calificacion" << setw(17) << "Frecuencia" << endl;

	// muestra las frecuencias en formato tabular
	for (int calificacion = 1; calificacion < tamanoFrecuencia; calificacion++)
		cout << setw(12) << calificacion << setw(17) << frecuencia[calificacion] << endl;

	system("pause");
    return 0;	// indica terminaci�n exitosa
}	// fin de main

