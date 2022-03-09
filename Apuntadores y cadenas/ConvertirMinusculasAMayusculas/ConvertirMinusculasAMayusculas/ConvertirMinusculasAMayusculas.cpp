// ConvertirMinusculasAMayusculas.cpp: define el punto de entrada de la aplicación de consola.
// Convierte letras minúsculas en letras mayúsculas
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
    return 0;	// indica terminación exitosa
}	// fin de main

// convierte una cadena a letras mayúsculas
void convierteAMayuscula(char *ptrS)
{
	while (*ptrS != '\0')	// el caracter actual es '\0'
	{
		if (islower(*ptrS))	// si el caracter es minúscula,
			*ptrS = toupper(*ptrS);	// lo convierte a mayúscula
		++ptrS;	// mueve ptrS a la siguiente cadena de caracteres
	}	// fin de while
}	// fin de la fución convierteAMayuscula

