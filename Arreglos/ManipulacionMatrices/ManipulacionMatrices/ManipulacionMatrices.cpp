// ManipulacionMatrices.cpp: define el punto de entrada de la aplicaci�n de consola.
// Ejemplo de un arreglo con doble sub�ndice

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;
using std::fixed;
using std::left;

#include <iomanip>

using std::setw;
using std::setprecision;

const int estudiantes = 3;	// n�mero de estudiantes
const int examenes = 4;	// n�mero de ex�menes

// prototipos de las funciones
int minimo(int[][examenes], int, int);
int maximo(int[][examenes], int, int);
double promedio(int[], int);
void despliegaArreglo(int[][examenes], int, int);

int main()
{
	// inicializa las calificaciones para tres estudiantes (filas)
	int calificacionesEstudiante[estudiantes][examenes]=
	{
		{77,68,86,73},
		{96,87,89,78},
		{70,90,86,81}
	};

	// despliega el arreglo calificacionesEstudiante
	cout << "El arreglo es:\n";
	despliegaArreglo(calificacionesEstudiante, estudiantes, examenes);

	// determina la calificaci�n m�s baja y la m�s alta
	cout << "\n\nCalificacion mas baja: "
		<< minimo(calificacionesEstudiante, estudiantes, examenes)
		<< "\nCalificacion mas alta: "
		<< maximo(calificacionesEstudiante, estudiantes, examenes)
		<< endl;

	cout << fixed << setprecision(2);

	// calcula la calificacion promedio para cada estudiante
	for (int persona = 0; persona < estudiantes; persona++)
		cout << "La calificacion promedio del estudiante " << persona
		<< " es "
		<< promedio(calificacionesEstudiante[persona], examenes)
		<< endl;

	system("pause");
    return 0;	// indica terminaci�n exitosa
}	// fin de main

// busca la calificacion m�nima
int minimo(int calificaciones[][examenes], int alumnos, int pruebas)
{
	int califBaja = 100;	// inicializa la calificaci�n m�s alta posible

	for (int i = 0; i < alumnos; i++)
		for (int j = 0; j < pruebas; j++)
			if (calificaciones[i][j] < califBaja)
				califBaja = calificaciones[i][j];

	return califBaja;
}	// fin de la funci�n minimo

// busca la calificaci�n m�xima
int maximo(int calificaciones[][examenes], int alumnos, int pruebas)
{
	int califAlta = 0;	// inicializa a lacalificaci�n m�s baja posible

	for (int i = 0; i < alumnos; i++)
		for (int j = 0; j < pruebas; j++)
			if (calificaciones[i][j] > califAlta)
				califAlta = calificaciones[i][j];

	return califAlta;
}	// fin de la funci�n maximo

// determina la calificaci�n promedio para un esudiante en particular
double promedio(int conjuntoDeCalif[], int pruebas)
{
	int total = 0;

	// suma todas las calificaciones de un estudiante
	for (int i = 0; i < pruebas; i++)
		total += conjuntoDeCalif[i];

	return static_cast<double>(total) / pruebas;	// promedio
}	// fin de la funci�n maximo

// despliega el arreglo
void despliegaArreglo(int calificaciones[][examenes], int alumnos, int pruebas)
{
	// establece justificaci�n izquierda y muestra los encabezados de las columnas
	cout << left << "                            [0]  [1]  [2]  [3]";

	// despliega las calificaciones en formato tabular
	for (int i = 0; i < alumnos; i++)
	{
		// despliega la etiqueta de la fila
		cout << "\nCalificacionesEstudiante[" << i << "] ";

		// despliega una calificaci�n de un estudiante
		for (int j = 0; j < pruebas; j++)
			cout << setw(5) << calificaciones[i][j];
	}	// fin del for externo
}	// fin de la funci�n despliegaArreglo

