// FuncionStrlen.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

#include <cstring>	// prototipo para strlen

int main()
{
	char *cadena1 = "abcdefghijklmnopqrstuvwxyz";
	char *cadena2 = "cuatro";
	char *cadena3 = "Mexico";

	cout << "La longitud de \"" << cadena1
		<< "\"es " << strlen(cadena1)
		<< "\nLa longitud de \"" << cadena2
		<< "\"es " << strlen(cadena2)
		<< "\nLa longitud de \"" << cadena3
		<< "\" es " << strlen(cadena3) << endl;

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

