// CopiarUnaCadena.cpp: define el punto de entrada de la aplicación de consola.
// Copia de una cadena mediante la notación de arreglos
// y la notación de apuntadores.

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
    return 0;	// indica terminación exitosa
}	// fin de main

// copia s2 a s1 mediante notación de arreglos
void copia1(char *s1, const char *s2)
{
	for (int i = 0; (s1[i] = s2[i]) != '\0'; i++)
		;	// instrucción vacía
}	// fin de la función copia1

// copia s2 a s1 mediante notación de apuntadores
void copia2(char *s1, const char *s2)
{
	for (; (*s1 = *s2) != '\0'; s1++, s2++)
		;	// instrucción vacia
}	// fin de la función copia2


