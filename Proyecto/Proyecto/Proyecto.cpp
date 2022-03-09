// Proyecto.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

struct Administrador
{
	const string Usuario = "Carlos";
	const string Contraseña = "StarWars";
} administrador;

struct Fecha
{
	int dia;
	string mes;
	int año;
};

struct Cliente
{
	string primerNombre;
	string segundoNombre;
	string apellidoMaterno;
	string apellidoPaterno;
	string nombreDeUsuario;
	string domicilio;
	string numeroDeCuenta;
	char contraseña[25] = "";
	double montoDeApertura = 5000;
	double ultimoSaldo;
	double abono;
	double retiro;
	double saldoPasado;
	int telefono;
	int cantidadAbonos;
	int cantidadRetiros;
	Fecha fechaCliente;
};

void MenuPrincipal();
void MenuUsuario(struct Cliente[], int &);
void AccesoAdministrador(struct Cliente[], int);
void NuevoUsuario(struct Cliente[], int);
void Contraseña(char []);
void MenuAdministrador(struct Cliente[], int);
bool SubMenuUsuario(struct Cliente *);
void EstadoDeCuenta(struct Cliente);
bool ListaDeClientes(struct Cliente[], int);
double Retiro(double, int &);
double Abono(double, int &);
bool ChecarContraseña(string, char []);
bool ChecarSesion(struct Cliente[], string, char[], int);
bool ClienteNumero(struct Cliente[], int);

int main()
{
	MenuPrincipal();
    return 0;
}

void MenuPrincipal()
{
	static int contador = -1;
	static struct Cliente clientes[25];
	int opcionPrincipal;
	do
	{
		system("cls");
		cout << "Menu principal" << endl << endl;
		cout << "1. Usuario" << endl;
		cout << "2. Administrador" << endl;
		cout << "3. Salir" << endl << endl;
		cout << "Ingrese la opcion: ";
		cin >> opcionPrincipal;
		switch (opcionPrincipal)
		{
		case 1:
			MenuUsuario(clientes, contador);
			break;
		case 2:
			AccesoAdministrador(clientes, contador);
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

void MenuUsuario(struct Cliente clientes[], int &contador)
{
	string usuarioCliente;
	char contraseñaCliente[25] = "";
	int contadores = 0;
	int opcionUsuario;
	int conta;
	bool sesionIncorrecta = true;
	do
	{
		system("cls");
		cout << "Menu principal de usuario" << endl << endl;
		cout << "1. Nuevo usuario" << endl;
		cout << "2. Ingresar al sistema" << endl;
		cout << "3. Regresar al menu principal" << endl << endl;
		cout << "Ingrese la opcion: ";
		cin >> opcionUsuario;
		switch (opcionUsuario)
		{
		case 1:
			contador++;
			conta = contador;
			NuevoUsuario(clientes, conta);
			break;
		case 2:
			system("cls");
			cout << "Ingresar al sistema" << endl << endl;
			cout << "Nombre de usuario: ";
			cin >> usuarioCliente;
			cout << "Contrasena: ";
			Contraseña(contraseñaCliente);
			if (contador != 0)
			{
				contadores = contador - 1;
			}
			sesionIncorrecta = ChecarSesion(clientes, usuarioCliente, contraseñaCliente, conta);
			if (sesionIncorrecta == false)
			{
				SubMenuUsuario(&clientes[contadores]);
			}
			else
			{
				cout << endl << "Error" << endl;
				system("pause");
			}
			break;
		case 3:
			break;
		default:
			cout << "No existe esa opcion" << endl;
			system("pause");
			break;
		}
	} while (opcionUsuario != 3);
	MenuPrincipal();
}

void NuevoUsuario(struct Cliente cliente[], int contador)
{
	Fecha fechaCliente;
	string primerNombre;
	string segundoNombre;
	string apellidoPaterno;
	string apellidoMaterno;
	string nombreDeUsuario;
	string numeroDeCuenta;
	string domicilio;
	string copia;
	char contraseñaIgual[25] = "";
	char contraseña[25] = "";
	double montoDeApertura = 5000;
	int telefono;
	int longitud;
	int contado;
	bool contraseñaIncorrecta = false;
	bool usuarioIncorrecto = false;
	system("cls");
	cout << "Nuevo usuario" << endl << endl;
	cout << "Primer nombre: ";
	cin >> primerNombre;
	cout << "Segundo nombre: ";
	cin >> segundoNombre;
	cout << "Apellido paterno: ";
	cin >> apellidoPaterno;
	cout << "Apellido materno: ";
	cin >> apellidoMaterno;
	do
	{
		cout << "Nombre de usuario: ";
		cin >> nombreDeUsuario;
		for (contado = 0; contado < contador; contado++)
		{
			if (nombreDeUsuario.compare(cliente[contado].nombreDeUsuario) <= 0)
			{
				usuarioIncorrecto = true;
				cout << endl << "Ya existe este usuario" << endl;
			}
			else
			{
				usuarioIncorrecto = false;
			}
		}
	} while (usuarioIncorrecto);
	do
	{
		if (contraseñaIncorrecta)
		{
			cout << endl << endl << "Vuelve a intentarlo" << endl;
		}
		cout << "Contrasena: ";
		Contraseña(contraseña);
		cout << endl << "Confirmacion de contrasena: ";
		Contraseña(contraseñaIgual);
		contraseñaIncorrecta = ChecarContraseña(contraseñaIgual, contraseña);
	} while (contraseñaIncorrecta);
	cout << endl;
	do
	{
		if (montoDeApertura < 5000)
		{
			cout << endl << "Valor incorrecto" << endl;
		}
		cout << "Monto: ";
		cin >> montoDeApertura;
	} while (montoDeApertura < 5000);
	longitud = 5;
	do
	{
		if (longitud != 5)
		{
			cout << endl << "Valor incorrecto" << endl;
		}
		cout << "Numero de cuenta: ";
		cin >> numeroDeCuenta;
		longitud = numeroDeCuenta.length();
	} while (longitud != 5);
	cout << "Domicilio: ";
	cin >> domicilio;
	cout << "Telefono: ";
	cin >> telefono;
	cout << "Dia de nacimiento: ";
	cin >> fechaCliente.dia;
	cout << "Mes de nacimiento: ";
	cin >> fechaCliente.mes;
	cout << "Ano de nacimiento: ";
	cin >> fechaCliente.año;
	cliente[contador].primerNombre = primerNombre;
	cliente[contador].segundoNombre = segundoNombre;
	cliente[contador].apellidoPaterno = apellidoPaterno;
	cliente[contador].apellidoMaterno = apellidoMaterno;
	cliente[contador].nombreDeUsuario = nombreDeUsuario;
	*cliente[contador].contraseña = *contraseña;
	cliente[contador].montoDeApertura = montoDeApertura;
	cliente[contador].numeroDeCuenta = numeroDeCuenta;
	cliente[contador].domicilio = domicilio;
	cliente[contador].telefono = telefono;
	cliente[contador].fechaCliente.dia = fechaCliente.dia;
	cliente[contador].fechaCliente.mes = fechaCliente.mes;
	cliente[contador].fechaCliente.año = fechaCliente.año;
	cliente[contador].ultimoSaldo = cliente[contador].montoDeApertura;
	cliente[contador].saldoPasado = cliente[contador].ultimoSaldo;
}

bool SubMenuUsuario(struct Cliente *cliente)
{
	int opcionUsuario;
	double abono = 0;
	double retiro = 0;
	do
	{
		system("cls");
		cout << "Sub menu de usuario" << endl << endl;
		cout << "1. Abono a cuenta" << endl;
		cout << "2. Retiro a cuenta" << endl;
		cout << "3. Estado de cuenta" << endl;
		cout << "4. Regresar a menu principal de usuario" << endl << endl;
		cout << "Ingrese la opcion: ";
		cin >> opcionUsuario;
		switch (opcionUsuario)
		{
		case 1:
			system("cls");
			cout << "Abono a cuenta" << endl << endl;
			do
			{
				cout << "Ingresa el abono: ";
				cin >> abono;
				if (abono > 0)
				{
					cliente->abono = Abono(abono, cliente->cantidadAbonos);
					cliente->saldoPasado = cliente->ultimoSaldo;
					cliente->ultimoSaldo = cliente->ultimoSaldo + abono - retiro;
				}
				else
				{
					cout << "Error. Debe de ser mayor a 0" << endl;
					system("pause");
				}
			} while (abono < 1);
			system("pause");
			break;
		case 2:
			system("cls");
			cout << "Retiro a cuenta" << endl << endl;
			do
			{
				cout << "Ingresa el retiro: ";
				cin >> retiro;
				if (retiro > 0)
				{
					if (retiro > cliente->ultimoSaldo)
					{
						cout << "No se puede retirar mas dinero del que tienes" << endl;
						system("pause");
					}
					else
					{
						cliente->retiro = Retiro(retiro, cliente->cantidadRetiros);
						cliente->saldoPasado = cliente->ultimoSaldo;
						cliente->ultimoSaldo = cliente->ultimoSaldo - retiro;
					}
				}
				else
				{
					cout << "Error. Debe de ser mayor a 0" << endl;
					system("pause");
				}
			} while (retiro < 1);
			break;
		case 3:
			EstadoDeCuenta(*cliente);
			break;
		case 4:
			break;
		default:
			cout << "No existe esa opcion" << endl;
			system("pause");
			break;
		}
	} while (opcionUsuario != 4);
	return true;
}

double Abono(double abono, int &cantidad)
{
	static double total;
	total += abono;
	cantidad++;
	return total;
}

double Retiro(double retiro, int &cantidad)
{
	static double total;
	total += retiro;
	cantidad++;
	return total;
}

void EstadoDeCuenta(struct Cliente cliente)
{
	int contador;
	contador = sizeof(*cliente.contraseña) / sizeof(char);
	system("cls");
	cout << "Estado de cuenta Cliente: " << cliente.primerNombre << " " << cliente.apellidoPaterno << endl << endl;
	cout << "Numero de cuenta: " << cliente.numeroDeCuenta << "\t" << "Monto de apertura: $" << cliente.montoDeApertura << endl << endl;
	cout << "Domicilio: " << cliente.domicilio << endl << endl;
	cout << "Telefono: " << cliente.telefono << "\t" << "Fecha de nacimiento: " << cliente.fechaCliente.dia << "/" << cliente.fechaCliente.mes << "/" << cliente.fechaCliente.año << endl << endl;
	cout << "Usuario: " << cliente.nombreDeUsuario << "\t" << "Password: ";
	for (int c = 0; c < contador; c++)
	{
		cout << "*";
	}
	cout << endl << endl;
	cout << "== == == == == == == == == == == == == == == == == == == == == == == == == == ==" << endl << endl;
	cout << "Cuenta inicial: $" << cliente.montoDeApertura << "\t" << "Ultimo saldo: $" << cliente.saldoPasado << endl << endl;
	cout << "Abonos: $" << cliente.abono << "\t" << "Total de abonos: " << cliente.cantidadAbonos << endl << endl;
	cout << "Retiros: $" << cliente.retiro << "\t" << "Total de retiros: " << cliente.cantidadRetiros << endl << endl;
	cout << "Saldo final: $" << cliente.ultimoSaldo << endl << endl;
	system("pause");
	return;
}

void AccesoAdministrador(struct Cliente clientes[], int contador)
{
	string usuarioAdministrador;
	char contraseñaAdministrador[255] = "";
	int indicador;
	system("cls");
	cout << "Administrador" << endl << endl;
	cout << "Nombre de usuario: ";
	cin >> usuarioAdministrador;
	cout << "Contrasena: ";
	Contraseña(contraseñaAdministrador);
	if (administrador.Usuario.compare(usuarioAdministrador) == 0)
	{
		indicador = administrador.Contraseña.compare(contraseñaAdministrador);
		if (indicador <= 0)
		{
			MenuAdministrador(clientes, contador);
		}
		else
		{
			cout << endl << "Error" << endl;
		}
	}
	else
	{
		cout << endl << "Error" << endl;
	}
	system("pause");
	MenuPrincipal();
}

void MenuAdministrador(struct Cliente clientes[], int contador)
{
	int opcionUsuario;
	do
	{
		system("cls");
		cout << "Menu principal del administrador" << endl << endl;
		cout << "1. Ver lista de clientes del sistema" << endl;
		cout << "2. Ver datos de usuario por numero de cuenta" << endl;
		cout << "3. Regresar al menu principal" << endl << endl;
		cout << "Ingrese la opcion: ";
		cin >> opcionUsuario;
		switch (opcionUsuario)
		{
		case 1:
			ListaDeClientes(clientes, contador);
			break;
		case 2:
			ClienteNumero(clientes, contador);
			break;
		case 3:
			break;
		default:
			cout << "No existe esa opcion" << endl;
			system("pause");
			break;
		}
	} while (opcionUsuario != 3);
	MenuPrincipal();
}

bool ListaDeClientes(struct Cliente cliente[], int contador)
{
	int cont;
	system("cls");
	cout << "Lista de clientes" << endl << endl;
	for (cont = 0; cont <= contador; cont++)
	{
		cout << cont + 1 << ". " << cliente[cont].primerNombre << " " << cliente[cont].segundoNombre << " " << cliente[cont].apellidoPaterno << " " << cliente[cont].apellidoMaterno << endl;
	}
	cout << endl;
	system("pause");
	return true;
}

bool ClienteNumero(struct Cliente cliente[], int contador)
{
	int conta;
	int iguales;
	string usuario;
	cout << "Introduzca el nombre de usuario: ";
	cin >> usuario;
	for (conta = 0; conta <= contador; conta++)
	{
		iguales = usuario.compare(cliente[contador].nombreDeUsuario);
		if (iguales == 0)
		{
			int conti;
			conti = sizeof(*cliente->contraseña) / sizeof(char);
			system("cls");
			cout << "Estado de cuenta Cliente: " << cliente->primerNombre << " " << cliente->apellidoPaterno << endl << endl;
			cout << "Numero de cuenta: " << cliente->numeroDeCuenta << "\t" << "Monto de apertura: $" << cliente->montoDeApertura << endl << endl;
			cout << "Domicilio: " << cliente->domicilio << endl << endl;
			cout << "Telefono: " << cliente->telefono << "\t" << "Fecha de nacimiento: " << cliente->fechaCliente.dia << "/" << cliente->fechaCliente.mes << "/" << cliente->fechaCliente.año << endl << endl;
			cout << "Usuario: " << cliente->nombreDeUsuario << "\t" << "Password: ";
			for (int c = 0; c < conti; c++)
			{
				cout << "*";
			}
			cout << endl << endl;
			cout << "== == == == == == == == == == == == == == == == == == == == == == == == == == ==" << endl << endl;
			cout << "Cuenta inicial: $" << cliente->montoDeApertura << "\t" << "Saldo final: $" << cliente->ultimoSaldo << endl << endl;
			system("pause");
			break;
		}
		else
		{
			cout << endl << endl << "No se encontro" << endl;
			system("pause");
		}
	}
	return true;
}

void Contraseña(char contraseña[])
{
	int i = 0;
	do
	{
		contraseña[i] = (unsigned char)_getch();
		if (contraseña[i] != 8)
		{
			cout << '*';
			i++;
		}
		else if (i > 0)
		{
			cout << (char)8 << (char)32 << (char)8;
			i--;
		}
		cout.flush();
	} while (contraseña[i - 1] != 13);
	cout << (char)8 << (char)32 << (char)8;
}

bool ChecarContraseña(string contraseñaOriginal, char contraseña[])
{
	int comparacion;
	comparacion = contraseñaOriginal.compare(contraseña);
	if (comparacion <= 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool ChecarSesion(Cliente clientes[], string usuario, char contraseña[], int conta)
{
	int contador;
	bool condicion = true;
	int iguales;
	for (contador = 0; contador <= conta; contador++)
	{
		iguales = usuario.compare(clientes[contador].nombreDeUsuario);
		if (iguales <= 0)
		{
			if (ChecarContraseña(clientes[contador].contraseña, contraseña) == false)
			{
				condicion = false;
				return condicion;
			}
			else
			{
				condicion = true;
			}
		}
		else
		{
			condicion = true;
		}
	}
	return condicion;
}
