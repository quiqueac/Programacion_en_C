// FuncionesStrcpyStrncpy.cpp: define el punto de entrada de la aplicación de consola.
// Uso de strcpy y strncpy

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

#include <cstring>	// prototipos para strcpy y strncpy

int main()
{
	char x[] = "Feliz cumpleanos a ti";
	char y[25];
	char z[15];

	strcpy_s(y, x);	// copia el contenido de x dentro de y

	cout << "La cadena dentro del arreglo x es: " << x << "\nLa cadena dentro del arreglo y es: " << y << '\n';

	// copia los primeros 14 caracteres de x dentro de z
	strncpy_s(z, x, 14);	// no copia el carácter nulo
	z[14] = '\0';	// agrega '\0' al contenido de z

	cout << "La cadena en el arreglo z es: " << z << endl;

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

