// JuegoAzarLlamadoCraps.cpp: define el punto de entrada de la aplicación de consola.
// Craps.
/* Un jugador lanza dos dados. Cada dado tiene seis caras.
   Estas caras contienen 1, 2, 3, 4, 5 y 6 puntos.
   Una vez que los dados caen, 
   se calcula la suma de los puntos de las caras superiores de ambos dados.
   Si la suma es 7 u 11 en el primer tiro, el jugador gana.
   Si la suma es 2, 3 o 12 en el primer tiro (llamado "craps"),
   el jugador pierde (es decir la "casa" gana).
   Si la suma es 4, 5, 6, 8, 9 o 10 en el primer tiro,
   entonces ésta se convierte en "punto" del jugador.
   Para ganar, usted debe continuar tirando los dados hasta que se haga su punto.
   El jugador pierde si tira 7 antes de hacer su punto.
*/

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

// contiene los prototipos de las funciones srand y rand
#include <cstdlib>

#include <ctime>	// contiene el prototipo de la función time

int tiraDados(void);	// prototipo de la función

int main()
{
	// enumeración de constantes que representan el estado del juego
	enum Status{CONTINUA, GANA, PIERDE};

	int suma;
	int miPunto;

	Status estadoJuego;	// puede contener CONTINUA, GANA o PIERDE

	// randomiza el generador de números aleatorios mediante la hora actual
	srand(time(0));

	suma = tiraDados();	// primer tiro de dados

	// determina el estado del juego y la puntuación con base en la suma de puntos del dado
	switch (suma)
	{
		// gana en el primer tiro
	case 7:
	case 11:
		estadoJuego = GANA;
		break;

		// pierde en el primer tiro
	case 2:
	case 3:
	case 12:
		estadoJuego = PIERDE;
		break;

		// recuerda puntos
	default:
		estadoJuego = CONTINUA;
		miPunto = suma;
		cout << "La puntuacion es " << miPunto << endl;
		break;	// opcional
	}	// fin de switch

	// mientras el juego no se complete ...
	while (estadoJuego == CONTINUA)
	{
		suma = tiraDados();	// tira dados nuevamente

		// determina el estado del juego
		if (suma == miPunto)
			estadoJuego = GANA;
		else
			if (suma == 7)	// pierde por tirar 7
				estadoJuego = PIERDE;
	}	// fin de while

	// despliega mensaje de ganador o perdedor
	if (estadoJuego == GANA)
		cout << "El jugador gana" << endl;
	else
		cout << "El jugador pierde" << endl;

	system("pause");
	return 0;	// indica terminación exitosa
}	// fin de main

// tira dados, calcula la suma y despliega resultados

int tiraDados(void)
{
	int dado1;
	int dado2;
	int sumaTrabajo;

	dado1 = 1 + rand() % 6;	// obtiene valor aleatorio del dado1
	dado2 = 1 + rand() % 6;	// obtiene valor aleatorio del dado2
	sumaTrabajo = dado1 + dado2;	// suma dado1 y dado2

	// despliega los resultados del tiro
	cout << "El jugador tiro " << dado1 << " + " << dado2
		<< " = " << sumaTrabajo << endl;

	return sumaTrabajo;	// devuelve la suma de los dados
}	// fin de la función tiraDados

