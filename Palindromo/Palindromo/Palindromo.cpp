// Palindromo.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <string.h>

int es_palindromo(char *);

int main()
{
	int valor;
	char palabra[20];
	printf("Escribe una cadena: ");
	fflush(stdout);
	fgets(palabra, 20, stdin);
	valor = es_palindromo(palabra);
	if (valor)
	{
		printf("\nEs un palindromo.\n");
	}
	else
	{
		printf("\nNo es un palindromo.\n");
	}
	system("pause");
    return 0;
}

int es_palindromo(char *cadena)
{
	int i;
	char invertida[25];

	/* Halla la cadena invertida */
	for (i = 0; i < strlen(cadena); i++)
	{
		invertida[i] = cadena[strlen(cadena) - i - 1];
	}

	/* Coloca caracter de fin de cadena */
	invertida[i] = '\0';

	/* Realiza la comparacion */
	if (!strcmp(cadena, invertida))
		return 1; /* es un palindromo */

	return 0;  /* no es un palindromo */
}
