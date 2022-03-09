// ArregloConApuntadores.cpp: define el punto de entrada de la aplicaci�n de consola.
//  Uso de las funciones desub�ndices y de apuntador/desplazamiento con arreglos.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int b[] = { 10,20,30,40 };
	int *ptrB = b;	// establece ptrb para que apunte el arreglo b

	// muestra el arreglo b mediante la notaci�n de sub�ndices de arreglos
	cout << "El arreglo b impreso mediante:\n\n" << "Notacion de subindice de arreglo\n";

	for (int i = 0; i < 4; i++)
		cout << "b[" << i << "] = " << b[i] << '\n';

	// muestra el arreglo b mediante el uso del nombre del arreglo y
	// la notaci�n de apuntador/desplazamiento
	cout << "\nNotacion apuntador/desplazamiento en donde " << "el apuntador es un nombre de arreglo\n";

	for (int despl = 0; despl < 4; despl++)
		cout << "*(b + " << despl << ") = " << *(b + despl) << '\n';

	// muestra el arreglo b mediante el uso de ptrB y la notaci�n de sub�ndice de arreglo
	cout << "\nNotacion de subindice de arreglo\n";

	for (int j = 0; j < 4; j++)
		cout << "ptrB[" << j << "] = " << ptrB[j] << '\n';

	cout << "\nNotacion apuntador/desplazamiento\n";

	// muestra el arreglo b mediante el uso de ptrB y la notaci�n apuntador/desplazamiento
	for (int desp2 = 0; desp2 < 4; desp2++)
		cout << "*(ptrB + " << desp2 << ") = " << *(ptrB + desp2) << '\n';

	system("pause");
    return 0;	// indica terminaci�n exitosa
}	// fin de main

