// Evaluaci�nMultiplesLetraSwitch.cpp: define el punto de entrada de la aplicaci�n de consola.
// Conteo de letras de calificaci�n

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// la funci�n main comienza la ejecuci�n del programa
int main()
{
	int calificacion;	// una calificaci�n
	int aContador = 0;	// n�mero de As
	int bContador = 0;	// n�mero de Bs
	int cContador = 0;	// n�mero de Cs
	int dContador = 0;	// n�mero de Ds
	int fContador = 0;	// n�mero de Fs

	cout << "Introduzca la calificacion con letra." << endl
		<< "Introduzca el caracter EOF para terminar la entrada de datos." << endl;

	// repite hasta que el usuario digite la secuencia de fin de archivo
	while ((calificacion = cin.get()) != EOF)
	{
		// determina qu� calificaci�n se introdujo
		switch (calificacion)	// estructura switch anidada en un while
		{
		case 'A':	// la calificaci�n es una A may�scula
		case 'a':	// o una a min�scula
			++aContador;	// incrementa aContador
			break;	// necesario para salir de switch
		case 'B':	// la calificaci�n es una B
		case 'b':	// o una b min�scula
			++bContador;	// incrementa bContador
			break;	// sale de switch
		case 'C':	// la calificaci�n es una C
		case 'c':	// o una c min�scula
			++cContador;	// incrementa cContador
			break;	// sale de switch
		case 'D':	// la calificaci�n es una D
		case 'd':	// o una d min�scula
			++dContador;	// incrementa dContador
			break;	// sale de switch
		case 'F':	// la calificaci�n es una F
		case 'f':	// o una f min�scula
			++fContador;	// incrementa fContador
			break;	// sale de switch
		case '\n':	// ignora nuevas l�neas,
		case '\t':	// tabuladores,
		case ' ':	// y espacios en la entrada
			break;	// sale de switch
		default:	// atrapa todos los dem�s caracteres
			cout << "Se introdujo una letra incorrecta."
				<< " Introduzca una nueva letra." << endl;
			break;	// opcional; de cualquier manera sale de switch
		}	// fin de switch
	}	// fin de while

	// desplega el resumen de resultados
	cout << "\n\nLos totales de calificaciones por letra son:"
		<< "\nA: " << aContador	// despliega el n�mero de calificaciones A
		<< "\nB: " << bContador	// despliega el n�mero de calificaciones B
		<< "\nC: " << cContador	// despliega el n�mero de calificaciones C
		<< "\nD: " << dContador	// despliega el n�mero de calificaciones D
		<< "\nF: " << fContador	// despliega el n�mero de calificaciones F
		<< endl;

	system("pause");
    return 0;	// indica terminaci�n exitosa
}	// fin de la funci�n main

