// ArreglosAFunciones.cpp: define el punto de entrada de la aplicaci�n de consola.
// Paso de arreglos y de elementos individuales de arreglos a funciones.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

void modificaArreglo(int[], int);	// apariencia extra�a
void modificaElemento(int);

int main()
{
	const int tamanoArreglo = 5;	// tama�o del arreglo
	int a[tamanoArreglo] = { 0,1,2,3,4 };	// inicializa a

	cout << "Efectos de pasar el arreglo completo por referencia:" << "\n\nLos valores del arreglo original son:\n";

	// despliega el arreglo original
	for (int i = 0; i < tamanoArreglo; i++)
		cout << setw(3) << a[i];

	cout << endl;

	// pasa el arreglo a hacia modificaArreglo por referencia
	modificaArreglo(a, tamanoArreglo);

	cout << "Los valores del arreglo modificado son:\n";

	// despliega el arreglo modificado
	for (int j = 0; j < tamanoArreglo; j++)
		cout << setw(3) << a[j];

	// despliega el valor de a[3]
	cout << "\n\n" << "Efectos de pasar un elemento del arreglo por valor:" << "\n\nEl valor de a[3] es " << a[3] << "\n";

	// pasa el elemento a[3] del arreglo por valor
	modificaElemento(a[3]);

	// muestra el valor de a[3]
	cout << "El valor de a[3] es " << a[3] << endl;

	system("pause");
    return 0;	// indica terminaci�n exitosa
}	// fin de main

// en la funci�n modificaArreglo, "b" apunta hacia el arreglo original "a" en memoria
void modificaArreglo(int b[], int tamanoDelArreglo)
{
	// multiplica cada elemento del arreglo por 2
	for (int k = 0; k < tamanoDelArreglo; k++)
		b[k] *= 2;
}	// fin de la funci�n modificaArreglo

// en la funci�n modificaElemento, "e" es una copia local del elemnto a[3]
// del arreglo que se pasa desde main
void modificaElemento(int e)	
{
	// multiplica par�metros por 2
	cout << "Valor en modificarElemento es " << (e *= 2) << endl;
}	// fin de la funci�n modificaElemento

