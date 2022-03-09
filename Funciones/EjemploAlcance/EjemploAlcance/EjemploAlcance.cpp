// EjemploAlcance.cpp: define el punto de entrada de la aplicación de consola.
// Ejemplo de alcance.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

void usoLocal(void);	// prototipo de función
void usoStaticLocal(void);	// prototipo de función
void usoGlobal(void);	// prototipo de función

int x = 1;	// variable global

int main()
{
	int x = 5;

	cout << "la x local en el alcance externo de main es " << x << endl;

	{	// inicia nuevo alcance
		int x = 7;

		cout << "la x local en el alcance interior de main es " << x << endl;
	}	// finaliza nuevo alcance

	cout << "la x local en el alcance externo de main es " << x << endl;

	usoLocal();	// usoLocal tiene una x local
	usoStaticLocal();	// usoStaticLocal tiene una x static local
	usoGlobal();	// usoGlobal utiliza a la x global
	usoLocal();	// usoLocal reinicializa su x local
	usoStaticLocal();	// la x estática local retiene su valor previo
	usoGlobal();	// la x global retiene también su valor

	cout << "\nla x local en main es " << x << endl;

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

// usoLocal1 reinicializa la variable local x durante cada llamada
void usoLocal(void)
{
	int x = 25;	// inicializa cada vez que se llama a usoLocal

	cout << endl << "la x local es " << x << " al entrar a usoLocal" << endl;

	++x;

	cout << "la x local es " << x << " al salir de usoLocal" << endl;
}		// fin de la función usoLocal

/*
usoStaticLocal inicializa a la variable estática local x sólo la primera vez
que se llama a la función; el valor de x se guarda entre las llamadas a esta función
*/
void usoStaticLocal(void)
{
	// se inicializa la primera vez que se llama a usoStaticLocal.
	static int x = 50;

	cout << endl << "la x estatica local es " << x << " al entrar a usoStaticLocal" << endl;

	++x;

	cout << "la x estatica local es " << x << " al salir de usoStaticLocal" << endl;
}	// fin de la función usoStaticLocal

// usoGlobal modifica la variable x global durante cada llamada
void usoGlobal(void)
{
	cout << endl << "la x global es " << x << " al entrar a usoGlobal" << endl;

	x *= 10;

	cout << "la x global es " << x << " al salir de usoGlobal" << endl;
}	// fin de la función usoGlobal

