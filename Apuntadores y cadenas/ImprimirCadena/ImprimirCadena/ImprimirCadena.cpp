// ImprimirCadena.cpp: define el punto de entrada de la aplicación de consola.
// Impresión de una cadena, carácter por carácter, mediante el uso de
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

// ptrS no puede modificar el carácter al cual apunta,
// es decir, ptrS es un apuntador "de solo lectura"
void imprimeCaracteres(const char *ptrS)
{
	for (; *ptrS != '\0'; ptrS++)	// sin inicializacion
		cout << *ptrS;
}	// fin de la función imprimeCaracteres


