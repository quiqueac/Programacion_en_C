// TiroDado6000Veces.cpp: define el punto de entrada de la aplicación de consola.
// Tiro de un dado de seis lados 6000 veces.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

#include <cstdlib>	// contiene el prototipo de función para rand

int main()
{
	int frecuencia1 = 0;
	int frecuencia2 = 0;
	int frecuencia3 = 0;
	int frecuencia4 = 0;
	int frecuencia5 = 0;
	int frecuencia6 = 0;
	int cara;	// representa un tiro del dado

	// ciclo de 6000 veces y resumen de resultados
	for (int tiro = 1; tiro <= 6000; tiro++)
	{
		cara = 1 + rand() % 6;	// número aleatorio entre 1 y 6

		// determina el valor de la cara del dado e incrementa el contador apropiado
		switch (cara)
		{
		case 1:	// tiro 1
			++frecuencia1;
			break;
		case 2:	// tiro 2
			++frecuencia2;
			break;
		case 3:	// tiro 3
			++frecuencia3;
			break;
		case 4:	// tiro 4
			++frecuencia4;
			break;
		case 5:	// tiro 5
			++frecuencia5;
			break;
		case 6:	// tiro 6
			++frecuencia6;
			break;
		default:	// valor no valido
			cout << "El programa nunca debe llegar hasta  aqui!" << endl;
		}	// fin de switch
	}	// fin de for

	// despliega los resultados en forma tabular
	cout << "Cara" << setw(13) << "Frecuencia"
		<< "\n   1" << setw(13) << frecuencia1
		<< "\n   2" << setw(13) << frecuencia2
		<< "\n   3" << setw(13) << frecuencia3
		<< "\n   4" << setw(13) << frecuencia4
		<< "\n   5" << setw(13) << frecuencia5
		<< "\n   6" << setw(13) << frecuencia6 << endl;

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

