// ArreglosDeCaracteresComoCadenas.cpp: define el punto de entrada de la aplicación de consola.
// Tratamiento de arreglos de caracteres como cadenas.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	char cadena1[20];	// reserva 20 caracteres
	char cadena2[]="literal de cadena";	// reserva 15 caracteres

	// lee una cadena proporcionada por el usuario dentro del arreglo cadena2
	cout << "introduzca la cadena \"hola amigos\": ";
	cin >> cadena1;	// lee "hola" [el espacio termina la entrada]

	// ddespliega las cadenas
	cout << "cadena 1 es: " << cadena1 << "\ncadena2 es: " << cadena2;

	cout << "\ncadena1 con espacios entre caracteres es:\n";

	// despliega los caracteres hasta que aparece el caracter nulo
	for (int i = 0; cadena1[i] != '\0'; i++)
		cout << cadena1[i] << ' ';

	cin >> cadena1;	// lee "amigos"
	cout << "\ncadena1 es: " << cadena1 << endl;

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

