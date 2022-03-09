// FuncionStrtok.cpp: define el punto de entrada de la aplicación de consola.
// Uso de strtok.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

#include <cstring>	// prototipo de strtok

int main()
{
	char oracion[] = "Esta es una oracion con 7 tokens";
	char *ptrToken;

	cout << "La cadena para dividor en tokens es:\n" << oracion << "\n\nLos tokens son:\n\n";

	// comienza la división de la oración en tokens
	ptrToken = strtok(oracion, " ");

	// continúa la división de la oración en tokens hasta que
	// ptrToken sea null
	while (ptrToken != NULL)
	{
		cout << ptrToken << '\n';
		ptrToken = strtok(NULL, " ");	// obtiene el siguiente token
	}	// fin de while

	cout << "\nDespues de strtok, oracion = " << oracion << endl;

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

