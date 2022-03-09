// SumaDosNumeros.cpp: define el punto de entrada de la aplicación de consola.
// Programa de suma.

#include "stdafx.h"
#include <Windows.h>
#include <iostream>

// La función main comienza la ejecución del programa.
int main()
{
	int entero1;	// Primer número que introduce el usuario
	int entero2;	// Segundo número que introduce el usuario
	int suma;		// Variable en la que se almacenará la suma

	std::cout << "Digite el primer entero\n";	// Indicador
	std::cin >> entero1;	// Lee un entero

	std::cout << "Digite el segundo entero\n";	// Indicador
	std::cin >> entero2;	// Lee un entero

	suma = entero1 + entero2;

	std::cout << "La suma es " << suma << std::endl; //Impresión de suma

	system("pause");

    return 0;	// Indica que el programa terminó satisfactoriamente
}	// Fin de la función main

