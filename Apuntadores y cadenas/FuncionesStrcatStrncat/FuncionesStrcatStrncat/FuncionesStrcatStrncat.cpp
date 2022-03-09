// FuncionesStrcatStrncat.cpp: define el punto de entrada de la aplicación de consola.
// Uso de strcat y strncat.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

#include <cstring>	//prototipos para strcat y strncat

int main()
{
	char s1[20] = "Feliz";
	char s2[] = "Anio Nuevo ";
	char s3[40] = "";

	cout << "s1 = " << s1 << "\ns2 = " << s2;

	strcat_s(s1, s2);	// concatena s2 a s1

	cout << "\n\nDespues de strcat(s1, s2):\ns1 = " << s1 << "\ns2 = " << s2;

	// concatena los primeros 5 caracteres de s1 a s3
	strncat_s(s3, s1, 6);	// coloca '\0' después delúltimo carácter

	cout << "\n\nDespues de strncat(s3, s1, 6):\ns1 = " << s1 << "\ns3 = " << s3;

	strcat_s(s3, s1);	// concatena s1 a s3
	cout << "\n\nDespues de strcat(s3, s1):\ns1 = " << s1 << "\ns3 = " << s3 << endl;

	system("pause");
    return 0;	// indica terminación exitosa
}	// fin de main

