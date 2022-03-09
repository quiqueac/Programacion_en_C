// PasoDeArgumentosPorValorYReferencia.cpp: define el punto de entrada de la aplicación de consola.
// Comparación entre el paso por valor y el paso por referencia
// mediante referencias.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

int cuadradoPorValor(int);	// prototipo de función
void cuadradoPorReferencia(int &);	// prototipo de función

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
	return 0;	// indica terminación exitosa
}	// fin de main


// cuadradoPorValor multiplica el número por sí mismo, almacena
// el resultado en numero y devuelve el nuevo valor de numero
int cuadradoPorValor(int numero)
{
	return numero * numero;	// argumento no modificado de la función que llama
}	// fin de la función cuadradoPorValor

// cuadradoPorReferencia multiplica numeroRef por sí mismo y
// almacena el resultado en la variable a la cual numeroRef hace
// referencia en la función main
void cuadradoPorReferencia(int &numeroRef)
{
	numeroRef *= numeroRef;	// argumento modificado de la función que llama
}	// fin de la función cuadradoPorReferencia

