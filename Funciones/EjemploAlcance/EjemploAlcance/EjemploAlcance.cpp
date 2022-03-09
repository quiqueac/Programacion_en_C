// EjemploAlcance.cpp: define el punto de entrada de la aplicaci�n de consola.
// Ejemplo de alcance.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

void usoLocal(void);	// prototipo de funci�n
void usoStaticLocal(void);	// prototipo de funci�n
void usoGlobal(void);	// prototipo de funci�n

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
	usoStaticLocal();	// la x est�tica local retiene su valor previo
	usoGlobal();	// la x global retiene tambi�n su valor

	cout << "\nla x local en main es " << x << endl;

	system("pause");
    return 0;	// indica terminaci�n exitosa
}	// fin de main

// usoLocal1 reinicializa la variable local x durante cada llamada
void usoLocal(void)
{
	int x = 25;	// inicializa cada vez que se llama a usoLocal

	cout << endl << "la x local es " << x << " al entrar a usoLocal" << endl;

	++x;

	cout << "la x local es " << x << " al salir de usoLocal" << endl;
}		// fin de la funci�n usoLocal

/*
usoStaticLocal inicializa a la variable est�tica local x s�lo la primera vez
que se llama a la funci�n; el valor de x se guarda entre las llamadas a esta funci�n
*/
void usoStaticLocal(void)
{
	// se inicializa la primera vez que se llama a usoStaticLocal.
	static int x = 50;

	cout << endl << "la x estatica local es " << x << " al entrar a usoStaticLocal" << endl;

	++x;

	cout << "la x estatica local es " << x << " al salir de usoStaticLocal" << endl;
}	// fin de la funci�n usoStaticLocal

// usoGlobal modifica la variable x global durante cada llamada
void usoGlobal(void)
{
	cout << endl << "la x global es " << x << " al entrar a usoGlobal" << endl;

	x *= 10;

	cout << "la x global es " << x << " al salir de usoGlobal" << endl;
}	// fin de la funci�n usoGlobal

