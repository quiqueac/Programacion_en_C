// Ejercicio23.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int VocalesConsonantes(string);

int main()
{
	string cadena;
	int contadorLetras;
	while(true)
	{
		system("cls");
		cout << "Ingresa una cadena" << endl;
		getline(cin, cadena, '\n');
		if (cadena.empty())
		{
			cout << "Cadena vacia" << endl << endl;
		}
		else
		{
			contadorLetras = VocalesConsonantes(cadena);
			cout << "Total de caracteres: " << contadorLetras << endl << endl;
		}
		system("pause");
	}
    return 0;
}

int VocalesConsonantes(string cadena)
{
	int contador;
	int contadorVocales;
	int contadorConsonantes;
	int longitud;
	longitud = 0;
	contadorVocales = 0;
	for (contador = 0; cadena[contador] != '\0'; contador++)
	{
		longitud++;
	}
	for (contador = 0; contador < longitud; contador++)
	{
		if (cadena[contador] == 'a' || cadena[contador] == 'A' || cadena[contador] == 'e' || cadena[contador] == 'E' || cadena[contador] == 'i' || cadena[contador] == 'I' || cadena[contador] == 'o' || cadena[contador] == 'O' || cadena[contador] == 'u' || cadena[contador] == 'U')
		{
			contadorVocales++;
		}
	}
	contadorConsonantes = longitud - contadorVocales;
	cout << endl << "Vocales: " << contadorVocales << endl;
	cout << "Consonantes: " << contadorConsonantes << endl;
	return longitud;
}
