// OperadorUnarioDeResolucionDeAlcance.cpp: define el punto de entrada de la aplicación de consola.
// Uso del operador unario de resolución de alcance.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setprecision;

// define la constante global PI
const double PI = 3.14159265358979;

int main()
{
	// define la constante local PI
	const float PI = static_cast<float>(::PI);

	// despliega los valores local y global de la constante PI
	cout << setprecision(20) << "Valor local float de PI = " << PI << "\nValor global double de PI = " << ::PI << endl;

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

