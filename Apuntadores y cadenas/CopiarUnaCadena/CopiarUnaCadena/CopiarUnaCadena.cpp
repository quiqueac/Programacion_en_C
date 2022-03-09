// CopiarUnaCadena.cpp: define el punto de entrada de la aplicaci�n de consola.
// Copia de una cadena mediante la notaci�n de arreglos
// y la notaci�n de apuntadores.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

void copia1(char *, const char *);	// prototipo
void copia2(char *, const char *);	// prototipo

int main()
{
	char cadena1[10];
	char *cadena2 = "Hola";
	char cadena3[10];
	char cadena4[] = "Adios";

	copia1(cadena1, cadena2);
	cout << "cadena1 = " << cadena1 << endl;

	copia2(cadena3, cadena4);
	cout << "cadena3 = " << cadena3 << endl;

	system("pause");
    return 0;	// indica terminaci�n exitosa
}	// fin de main

// copia s2 a s1 mediante notaci�n de arreglos
void copia1(char *s1, const char *s2)
{
	for (int i = 0; (s1[i] = s2[i]) != '\0'; i++)
		;	// instrucci�n vac�a
}	// fin de la funci�n copia1

// copia s2 a s1 mediante notaci�n de apuntadores
void copia2(char *s1, const char *s2)
{
	for (; (*s1 = *s2) != '\0'; s1++, s2++)
		;	// instrucci�n vacia
}	// fin de la funci�n copia2


