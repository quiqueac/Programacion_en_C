// ConvertirMinusculasAMayusculas.cpp: define el punto de entrada de la aplicaci�n de consola.
// Convierte letras min�sculas en letras may�sculas
// mediante el uso de un apuntador no constante a un dato no constante

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

#include <cctype>	// prototipos para islowwer y toupper

void convierteAMayuscula(char *);

int main()
{
	char frase[] = "caracteres y $32.98";

	cout << "La frase antes de la conversion es: " << frase;
	convierteAMayuscula(frase);
	cout << "\nLa frase despues de la conversion: " << frase << endl;

	system("pause");
    return 0;	// indica terminaci�n exitosa
}	// fin de main

// convierte una cadena a letras may�sculas
void convierteAMayuscula(char *ptrS)
{
	while (*ptrS != '\0')	// el caracter actual es '\0'
	{
		if (islower(*ptrS))	// si el caracter es min�scula,
			*ptrS = toupper(*ptrS);	// lo convierte a may�scula
		++ptrS;	// mueve ptrS a la siguiente cadena de caracteres
	}	// fin de while
}	// fin de la fuci�n convierteAMayuscula

