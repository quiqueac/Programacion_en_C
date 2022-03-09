// ImprimirCadena.cpp: define el punto de entrada de la aplicaci�n de consola.
// Impresi�n de una cadena, car�cter por car�cter, mediante el uso de
// un apuntador no constante a un dato no constante

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

void imprimeCaracteres(const char *);

int main()
{
	char frase[] = "imprime caracteres de una cadena";

	cout << "La cadena es:\n";
	imprimeCaracteres(frase);
	cout << endl;

	system("pause");
	return 0;
}

// ptrS no puede modificar el car�cter al cual apunta,
// es decir, ptrS es un apuntador "de solo lectura"
void imprimeCaracteres(const char *ptrS)
{
	for (; *ptrS != '\0'; ptrS++)	// sin inicializacion
		cout << *ptrS;
}	// fin de la funci�n imprimeCaracteres


