// ArregloStatic.cpp: define el punto de entrada de la aplicación de consola.
// Los arreglos static se inicializan en cero.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

void inicEstaticaArreglo(void);	// prototipo de la función
void inicAutomaticaArreglo(void);	// prototipo de la función

int main()
{
	cout << "Primera llamada a cada funcion:\n";
	inicEstaticaArreglo();
	inicAutomaticaArreglo();

	cout << "\n\nSegunda llamada a cada funcion:\n";
	inicEstaticaArreglo();
	inicAutomaticaArreglo();
	cout << endl;

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

// función para mostrar un arreglo estático local
void inicEstaticaArreglo(void)
{
	// inicializa los elementos en 0 la primera vez que se llama a la función
	static int arreglo1[3];

	cout << "\nValores al entrar a InicEstaticaArreglo:\n";

	// salida delcontenido de arreglo1
	for (int i = 0; i < 3; i++)
		cout << "arreglo1[" << i << "] = " << arreglo1[i] << " ";

	cout << "\nValores al salir de inicEstaticaArreglo:\n";

	// modifica y despliega el contenido de arreglo1
	for (int j = 0; j < 3; j++)
		cout << "arreglo1[" << j << "] = " << (arreglo1[j] += 5) << " ";
}	// fin de la funcion inicEstaticaArreglo

// función para mostrar un arreglo automático local
void inicAutomaticaArreglo(void)
{
	// inicializa elementos cada vez que se llama a la función
	int arreglo2[3] = { 1,2,3 };

	cout << "\n\nValores al entrar a InicAutomaticaArreglo:\n";

	// muestra el contenido de arreglo2
	for (int i = 0; i < 3; i++)
		cout << "arreglo2[" << i << "] = " << arreglo2[i] << " ";

	cout << "\nValores al salir de inicAutomaticaArreglo:\n";

	// modifica y despliega el contenido de arreglo2
	for (int j = 0; j < 3; j++)
		cout << "arreglo2[" << j << "] = " << (arreglo2[j] += 5) << " ";
}

