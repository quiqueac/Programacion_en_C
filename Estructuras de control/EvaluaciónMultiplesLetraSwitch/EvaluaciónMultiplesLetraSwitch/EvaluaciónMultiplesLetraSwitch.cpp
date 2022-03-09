// EvaluaciónMultiplesLetraSwitch.cpp: define el punto de entrada de la aplicación de consola.
// Conteo de letras de calificación

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// la función main comienza la ejecución del programa
int main()
{
	int calificacion;	// una calificación
	int aContador = 0;	// número de As
	int bContador = 0;	// número de Bs
	int cContador = 0;	// número de Cs
	int dContador = 0;	// número de Ds
	int fContador = 0;	// número de Fs

	cout << "Introduzca la calificacion con letra." << endl
		<< "Introduzca el caracter EOF para terminar la entrada de datos." << endl;

	// repite hasta que el usuario digite la secuencia de fin de archivo
	while ((calificacion = cin.get()) != EOF)
	{
		// determina qué calificación se introdujo
		switch (calificacion)	// estructura switch anidada en un while
		{
		case 'A':	// la calificación es una A mayúscula
		case 'a':	// o una a minúscula
			++aContador;	// incrementa aContador
			break;	// necesario para salir de switch
		case 'B':	// la calificación es una B
		case 'b':	// o una b minúscula
			++bContador;	// incrementa bContador
			break;	// sale de switch
		case 'C':	// la calificación es una C
		case 'c':	// o una c minúscula
			++cContador;	// incrementa cContador
			break;	// sale de switch
		case 'D':	// la calificación es una D
		case 'd':	// o una d minúscula
			++dContador;	// incrementa dContador
			break;	// sale de switch
		case 'F':	// la calificación es una F
		case 'f':	// o una f minúscula
			++fContador;	// incrementa fContador
			break;	// sale de switch
		case '\n':	// ignora nuevas líneas,
		case '\t':	// tabuladores,
		case ' ':	// y espacios en la entrada
			break;	// sale de switch
		default:	// atrapa todos los demás caracteres
			cout << "Se introdujo una letra incorrecta."
				<< " Introduzca una nueva letra." << endl;
			break;	// opcional; de cualquier manera sale de switch
		}	// fin de switch
	}	// fin de while

	// desplega el resumen de resultados
	cout << "\n\nLos totales de calificaciones por letra son:"
		<< "\nA: " << aContador	// despliega el número de calificaciones A
		<< "\nB: " << bContador	// despliega el número de calificaciones B
		<< "\nC: " << cContador	// despliega el número de calificaciones C
		<< "\nD: " << dContador	// despliega el número de calificaciones D
		<< "\nF: " << fContador	// despliega el número de calificaciones F
		<< endl;

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de la función main

