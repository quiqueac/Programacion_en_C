// ForConContinue.cpp: define el punto de entrada de la aplicación de consola.
// Uso de la instrucción continue en una estructura for.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

// la función main comienza la ejecución del programa
int main()
{
	// repite 10 veces
	for (int x = 1; x <= 10; x++)
	{
		// si x es 5, continúa con la siguiente iteración del ciclo
		if (x == 5)
			continue;	// evita el resto del código en el cuerpo del ciclo

		cout << x << " ";	// despliega el valor de x
	}	// fin de la estructura for

	cout << "\nUso de continue para evitar que se despliegue el valor 5" << endl;

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de la función main

