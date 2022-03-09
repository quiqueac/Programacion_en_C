// Ejercicio21.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

double Factorial(double);
bool Cero(double);

int main()
{
	double m;
	double n;
	double resultado;
	bool condicionIncumplida;
	while (true)
	{
		system("cls");
		do
		{
			cout << "Introduzca 'm': ";
			cin >> m;
			condicionIncumplida = Cero(m);
		} while (condicionIncumplida);
		do
		{
			cout << "Introduzca 'n': ";
			cin >> n;
			condicionIncumplida = Cero(n);
		} while (condicionIncumplida);
		resultado = Factorial(m) / (Factorial(m - n) * Factorial(n));
		cout << resultado << endl;
		system("pause");
	}
	return 0;
}

double Factorial(double n)
{
	int i; double res = 1.0;
	for (i = n; i >= 1; i--)
	{
		res *= i;
	}
	return res;
}

bool Cero(double n)
{
	bool condicionIncumplida;
	if (n < 0)
	{
		condicionIncumplida = true;
		cout << "El numero no puede ser negativo" << endl;
	}
	else
	{
		condicionIncumplida = false;
	}
	return condicionIncumplida;
}
