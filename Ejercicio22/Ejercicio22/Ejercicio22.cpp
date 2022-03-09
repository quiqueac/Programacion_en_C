// Ejercicio22.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;

double Hipotenusa(double, double);
double Area(double, double);
double Angulo(double, double);

int main()
{
	double datoA;
	double datoB;
	double resultado;
	char opcion;
	cout << "Menu" << endl << endl;
	while (true)
	{
		system("cls");
		cout << "a) La hipotenusa de un triangulo rectangulo" << endl;
		cout << "b) El area de un triangulo" << endl;
		cout << "c) El tercer angulo de un triangulo" << endl << endl;
		do
		{
			cout << "Ingresa la opcion: ";
			cin >> opcion;
		} while (opcion != 'a' && opcion != 'b' && opcion != 'c');
		system("cls");
		switch (opcion)
		{
		case 'a':
			cout << "Opcion 'a': la hipotenusa de un triangulo rectangulo" << endl << endl;
			cout << "Ingrese un cateto: ";
			cin >> datoA;
			cout << "Ingrese el otro cateto: ";
			cin >> datoB;
			resultado = Hipotenusa(datoA, datoB);
			cout << endl << "El valor de la hipotenusa es: " << resultado << endl << endl;
			break;
		case 'b':
			cout << "Opcion 'b': el area de un triangulo" << endl << endl;
			cout << "Ingresa base: ";
			cin >> datoA;
			cout << "Ingresa altura: ";
			cin >> datoB;
			resultado = Area(datoA, datoB);
			cout << endl << "El valor del area es: " << resultado << endl << endl;
			break;
		case 'c':
			cout << "Opcion 'c' El tercer angulo de un triangulo" << endl << endl;
			cout << "Ingrese el primer angulo: ";
			cin >> datoA;
			cout << "Ingrese el segundo angulo: ";
			cin >> datoB;
			resultado = Angulo(datoA, datoB);
			if (resultado > 0)
			{
				cout << endl << "El valor del tercer angulo es: " << resultado << endl << endl;
			}
			else
			{
				cout << endl << "No es un triangulo" << endl << endl;
			}
			break;
		}
		system("pause");
	}
	return 0;
}

double Hipotenusa(double catetoA, double catetoB)
{
	double hipotenusa;
	hipotenusa = sqrt((catetoA * catetoA + catetoB * catetoB));
	return hipotenusa;
}

double Area(double base, double altura)
{
	double area;
	area = (base * altura) / 2;
	return area;
}

double Angulo(double primerAngulo, double segundoAngulo)
{
	double tercerAngulo;
	tercerAngulo = 180 - (primerAngulo + segundoAngulo);
	return tercerAngulo;
}
