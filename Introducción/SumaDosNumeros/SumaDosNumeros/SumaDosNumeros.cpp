// SumaDosNumeros.cpp: define el punto de entrada de la aplicaci�n de consola.
// Programa de suma.

#include "stdafx.h"
#include <Windows.h>
#include <iostream>

// La funci�n main comienza la ejecuci�n del programa.
int main()
{
	int entero1;	// Primer n�mero que introduce el usuario
	int entero2;	// Segundo n�mero que introduce el usuario
	int suma;		// Variable en la que se almacenar� la suma

	std::cout << "Digite el primer entero\n";	// Indicador
	std::cin >> entero1;	// Lee un entero

	std::cout << "Digite el segundo entero\n";	// Indicador
	std::cin >> entero2;	// Lee un entero

	suma = entero1 + entero2;

	std::cout << "La suma es " << suma << std::endl; //Impresi�n de suma

	system("pause");

    return 0;	// Indica que el programa termin� satisfactoriamente
}	// Fin de la funci�n main

