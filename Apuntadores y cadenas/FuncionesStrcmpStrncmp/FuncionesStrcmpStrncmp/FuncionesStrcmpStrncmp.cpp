// FuncionesStrcmpStrncmp.cpp: define el punto de entrada de la aplicaci�n de consola.
// Uso de strcmp y strncmp.

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

#include <cstring>	// prototipos para strcmp y strncmp

int main()
{
	char *s1 = "Feliz anio nuevo";
	char *s2 = "Feliz anio nuevo";
	char *s3 = "Felices fiestas";

	cout << "s1 = " << s1 << "\ns2 = " << s2
		<< "\ns3 = " << s3 << "\n\nstrcmp(s1, s2) = "
		<< setw(2) << strcmp(s1, s2)
		<< "\nstrcmp(s1, s3) = " << setw(2)
		<< strcmp(s1, s3) << "\nstrcmp(s3, s1) = "
		<< setw(2) << strcmp(s3, s1);

	cout << "\n\nstrncmp(s1, s3, 6) = " << setw(2)
		<< strncmp(s1, s3, 6) << "\nstrncmp(s1, s3, 7) = "
		<< setw(2) << strncmp(s1, s3, 7)
		<< "\nstrncmp(s3, s1, 7) = "
		<< setw(2) << strncmp(s3, s1, 7) << endl;

	system("pause");
    return 0;	// indica terminaci�n exitosa
}	// fin de main

