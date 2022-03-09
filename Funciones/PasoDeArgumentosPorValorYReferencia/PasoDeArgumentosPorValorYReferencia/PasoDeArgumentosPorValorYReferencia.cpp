// PasoDeArgumentosPorValorYReferencia.cpp: define el punto de entrada de la aplicaci�n de consola.
// Comparaci�n entre el paso por valor y el paso por referencia
// mediante referencias.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

int cuadradoPorValor(int);	// prototipo de funci�n
void cuadradoPorReferencia(int &);	// prototipo de funci�n

int main()
{
	int x = 2;
	int z = 4;

	// demuestra cuadradoPorValor
	cout << "x = " << x << " antes de cuadradoPorValor\n";
	cout << "Valor devuelto por cuadradoPorValor: " << cuadradoPorValor(x) << endl;
	cout << "x = " << x << " despues de cuadradoPorValor\n" << endl;

	// demuestra cuadradoPorReferencia
	cout << "z = " << z << " antes de cuadradoPorReferencia\n";
	cuadradoPorReferencia(z);
	cout << "z = " << z << " despues de cuadradoPorReferencia\n";

	system("pause");
	return 0;	// indica terminaci�n exitosa
}	// fin de main


// cuadradoPorValor multiplica el n�mero por s� mismo, almacena
// el resultado en numero y devuelve el nuevo valor de numero
int cuadradoPorValor(int numero)
{
	return numero * numero;	// argumento no modificado de la funci�n que llama
}	// fin de la funci�n cuadradoPorValor

// cuadradoPorReferencia multiplica numeroRef por s� mismo y
// almacena el resultado en la variable a la cual numeroRef hace
// referencia en la funci�n main
void cuadradoPorReferencia(int &numeroRef)
{
	numeroRef *= numeroRef;	// argumento modificado de la funci�n que llama
}	// fin de la funci�n cuadradoPorReferencia

