// ManipulacionMatrices.cpp: define el punto de entrada de la aplicación de consola.
// Ejemplo de un arreglo con doble subíndice

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;
using std::fixed;
using std::left;

#include <iomanip>

using std::setw;
using std::setprecision;

const int estudiantes = 3;	// número de estudiantes
const int examenes = 4;	// número de exámenes

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

	// determina la calificación más baja y la más alta
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
    return 0;	// indica terminación exitosa
}	// fin de main

// busca la calificacion mínima
int minimo(int calificaciones[][examenes], int alumnos, int pruebas)
{
	int califBaja = 100;	// inicializa la calificación más alta posible

	for (int i = 0; i < alumnos; i++)
		for (int j = 0; j < pruebas; j++)
			if (calificaciones[i][j] < califBaja)
				califBaja = calificaciones[i][j];

	return califBaja;
}	// fin de la función minimo

// busca la calificación máxima
int maximo(int calificaciones[][examenes], int alumnos, int pruebas)
{
	int califAlta = 0;	// inicializa a lacalificación más baja posible

	for (int i = 0; i < alumnos; i++)
		for (int j = 0; j < pruebas; j++)
			if (calificaciones[i][j] > califAlta)
				califAlta = calificaciones[i][j];

	return califAlta;
}	// fin de la función maximo

// determina la calificación promedio para un esudiante en particular
double promedio(int conjuntoDeCalif[], int pruebas)
{
	int total = 0;

	// suma todas las calificaciones de un estudiante
	for (int i = 0; i < pruebas; i++)
		total += conjuntoDeCalif[i];

	return static_cast<double>(total) / pruebas;	// promedio
}	// fin de la función maximo

// despliega el arreglo
void despliegaArreglo(int calificaciones[][examenes], int alumnos, int pruebas)
{
	// establece justificación izquierda y muestra los encabezados de las columnas
	cout << left << "                            [0]  [1]  [2]  [3]";

	// despliega las calificaciones en formato tabular
	for (int i = 0; i < alumnos; i++)
	{
		// despliega la etiqueta de la fila
		cout << "\nCalificacionesEstudiante[" << i << "] ";

		// despliega una calificación de un estudiante
		for (int j = 0; j < pruebas; j++)
			cout << setw(5) << calificaciones[i][j];
	}	// fin del for externo
}	// fin de la función despliegaArreglo

