// FuncionesSinArgumentos.cpp: define el punto de entrada de la aplicación de consola.
// Funciones que no toman argumentos

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

void funcion1();	// prototipo de la función
void funcion2();	// prototipo de la función

int main()
{
	funcion1();	// llama a la funcion1 sin argumentos
	funcion2();	// llama a la funcion2 sin argumentos

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

// la funcion1 utiliza una lista de parámetros vacía para especificar que 
// la función no recibe argumentos
void funcion1()
{
	cout << "La funcion1 no toma argumentos" << endl;
}	// fin de funcion1

// la funcion2 utiliza una lista de parámetros vacía para especificar que 
// la función no recibe argumentos
void funcion2(void)
{
	cout << "La funcion2 tampoco toma argumentos" << endl;
}	// fin de funcion2

