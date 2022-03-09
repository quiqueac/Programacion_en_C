// Pedidos.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void menu();
void registrar(struct Pedido *pedido);
void imprimir(struct Pedido *pedido);

struct Pedido
{
	int numero;
	int dia;
	int mes;
	int agno;
	char nombre[50];
	char descripcion[255];
};

int main()
{
	menu();
	system("pause");
    return 0;
}

void menu()
{
	struct Pedido pedido;
	int opcionPrincipal;

	do
	{
		system("cls");
		cout << "Menu principal" << endl << endl;
		cout << "1. Registrar" << endl;
		cout << "2. Imprimir" << endl;
		cout << "3. Salir" << endl << endl;
		cout << "Ingrese la opcion: ";
		cin >> opcionPrincipal;
		switch (opcionPrincipal)
		{
		case 1:
			registrar(&pedido);
			break;
		case 2:
			imprimir(&pedido);
			system("pause");
			break;
		case 3:
			break;
		default:
			cout << "No existe esa opcion" << endl;
			system("pause");
			break;
		}
	} while (opcionPrincipal != 3);
}

void registrar(struct Pedido *pedido)
{
	cout << "Ingresa el numero de pedido" << endl;
	cin >> pedido->numero;
	cout << "Ingresa el dia" << endl;
	cin >> pedido->dia;
	cout << "Ingresa el mes" << endl;
	cin >> pedido->mes;
	cout << "Ingresa el agno" << endl;
	cin >> pedido->agno;
	cout << "Ingresa el nombre del solicitante" << endl;
	cin >> pedido->nombre;
	cout << "Ingresa la descripcion" << endl;
	cin >> pedido->descripcion;
}

void imprimir(struct Pedido *pedido)
{
	cout << "Numero de pedido" << endl;
	cout << pedido->numero << endl;
	cout << "Fecha" << endl;
	cout << pedido->dia << "/" << pedido->mes << "/" << pedido->agno << endl;
	cout << "Nombre del solicitante" << endl;
	cout << pedido->nombre << endl;
	cout << "Descripcion" << endl;
	cout << pedido->descripcion << endl;
}
