// DoWhile.cpp: define el punto de entrada de la aplicación de consola.
// Uso de la estructura de repetición do/while

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

// la función main comienza la ejecución del programa
int main()
{
	int contador = 1;	// inicializa contador

	do
	{
		cout << contador << "  ";	// despliega contador
	} while (++contador <= 10);		// fin de do/while

	cout << endl;

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de función main

