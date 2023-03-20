#include "VistaConsola.h"

VistaConsola::VistaConsola()
{
	SetConsoleTitleW(L"Cotizador Express");
	setlocale(LC_ALL, "es_Es");
	presentador = new Presentador(this);
	mostrarMenu();
}

void VistaConsola::mostrarMenu()
{
	string input;
	int opcion;
	do
	{
		system("cls");
		mostarTitulo();
		presentador->mostrarTienda();
		presentador->mostrarVendedor();
		cout << "Seleccione una opcion del menú" << endl << endl;
		cout << "1)" << " Historial de cotizaciones" << endl;
		cout << "2)" << " Realizar cotizacion" << endl;
		cout << "3)" << " Salir" << endl;

		cin >> input;
		opcion = validarEntrada(input);

		system("cls");
		if (opcion == 0 || opcion > 3) {
			cout << "Opcion invalida" << endl;
			system("pause");
		}
		else if (opcion == 3) {
			cout << "Gracias por usar el programa" << endl;
			system("pause");
		}


		seleccionar(opcion);

	} while (opcion != 3);

}



void VistaConsola::mostrarError()
{
}

void VistaConsola::mostarTitulo()
{
	cout << "COTIZADOR EXPRESS" << endl;
	cout << "<---------------------------------------->" << endl;
}

void VistaConsola::seleccionar(int opcion)
{
	switch (opcion)
	{
	case 1: mostrarHistorial();
		system("pause");
		system("cls");
		break;
	case 2:mostrarMenuCotizar();

		system("cls");

	default:
		break;
	}
}

void VistaConsola::mostrarHistorial()
{
	presentador->mostrarHistorial();
}


void VistaConsola::mostrarMenuCotizar()
{
	string input;
	int opcion;
	do
	{
		encabezado();
		cout << "Paso 1: Selecciona la prenda a cotizar:" << endl;
		cout << "1) Camisa" << endl;
		cout << "2) Pantalón " << endl;

		cin >> input;
		opcion = validarEntrada(input);
		system("cls");

		if (opcion == 1) {

			mostrarMenuCamisa();
		}
		else if (opcion == 2) {
			mostrarMenuPantalon();
		}

		if (opcion <= 0 || opcion > 3) {
			cout << "Opcion invalida" << endl;
			system("pause");
		}
		
	} while (opcion != 3);

}

void VistaConsola::mostrarMenuCamisa()
{
	int opcion = 3;
	string input;
	int manga, cuello, calidad, cantidad;
	double precio = 0;

	do
	{
		encabezado();
		cout << "La camisa a cotizar , ¿Es manga corta? " << endl;
		cout << "1) SI" << endl;
		cout << "2) NO" << endl;

		cin >> input;
		manga = validarEntradaCaracteristica(input, opcion);
		system("cls");

		if (opcion < 3 && opcion > 0)
		{
			MenuCuello();
			cin >> input;
			cuello = validarEntradaCaracteristica(input, opcion);
			system("cls");
			if (opcion < 3 && opcion >0)
			{	
				
				MenuCalidad();
				cin >> input;
				calidad = validarEntradaCaracteristica(input, opcion);
				system("cls");
				if (opcion < 3 && opcion > 0) {
					encabezado();
					cout << "ingrese el precio unitario del producto" << endl;
					cin >> input;
					precio = validadEntradaPrecio(input, opcion);
					int stock = presentador->getStockCamisa(calidad, manga, cuello, precio);

					cin.get();
					if (stock == 0) {
						cout << " ingrese productos a la tienda antes de realizar una cotizacion" << endl;
						system("pause");
					}
					else {
						system("cls");
						encabezado();
						cout << " Existen " << stock << " en Stock de esta combinacion" << endl;
						cout << "Paso 5: Ingrese la cantidad  de unidades a cotizar" << endl;
						cin >> input;
						cantidad = validarEntrada(input);
						if (cantidad <= stock) {
							system("cls");
							encabezado();
							presentador->cotizarCamisa(calidad, manga, cuello, cantidad, precio);
							system("pause");
						}
						else {
							system("cls");
							cout << " no se puede cotizar mas de las unidades disponibles" << endl;
							system("pause");
						}
						opcion = 3;
						system("cls");
						cout << " ¿Desea cotizar otra camisa? " << endl;
						cout << "1)Si" << endl;
						cout << "2)No" << endl;
						cin >> input;
						opcion = validarEntrada(input);
						system("cls");
						if (opcion == 2) opcion = 3;
					}
				}
			}
		}
		if (opcion == 0 || opcion > 3) {
			cout << "Opcion invalida, por favor ingrese una de las opciones." << endl;
			system("pause");
		}
		if (opcion == 3) {
			cout << "Gracias por usar el programa" << endl;
			system("pause");
		}


	} while (opcion != 3);



}

void VistaConsola::encabezado()
{
	mostarTitulo();
	cout << " - COTIZAR" << endl;
	cout << "<---->" << endl;
	cout << "Presionar 3 para volver al menu anterior" << endl;
	cout << "<---->" << endl;

}

int VistaConsola::validarEntrada(string input)
{
	int num = -1;
	try
	{
		num = stoi(input);
		return num;
	}
	catch (const invalid_argument& ) {
		cout << "Error: Entrada invalida, ingrese un numero de las opciones " << endl;
	}

	system("pause");
	return num;
}



void VistaConsola::MenuCuello()
{	
	encabezado();
	cout << "Paso 2.b La camisa, ¿Es cuello común?" << endl;
	cout << "1) SI" << endl;
	cout << "2) NO" << endl;
}

void VistaConsola::MenuCalidad()
{
	encabezado();
	cout << "Paso 3 : Seleccione la calidad de la prenda" << endl;
	cout << "1) Standart" << endl;
	cout << "2) Premium " << endl;
}



void VistaConsola::mostrarMenuPantalon()
{
	string input;
	int opcion = 0, calidad = 0, corte = 0, cantidad = 0;
	double precio = 0;
	do
	{
		encabezado();
		cout << "El pantalón a cotizar, ¿Es chupín?" << endl;
		cout << "1) SI" << endl;
		cout << "2) NO" << endl;
		cin >> input;
		corte = validarEntradaCaracteristica(input, opcion);
		system("cls");

		if (opcion < 3 && opcion > 0) {
			MenuCalidad();
			cin >> input;
			calidad = validarEntradaCaracteristica(input, opcion);
			system("cls");
			if (opcion < 3 && opcion > 0)
			{	
				encabezado();
				cout << "ingrese el precio unitario del producto" << endl;
				cin >> input;
				precio = validadEntradaPrecio(input, opcion);
				int stock = presentador->getStockPantalon(calidad, corte, precio);
				if (stock == 0)
				{
					cout << " No hay stock de este producto, ingrese productos a la tienda antes de realizar una cotizacion" << endl;
					system("pause");
				}
				else {
					system("cls");
					encabezado();
					cout << " Existen " << stock << " en Stock de esta combinacion" << endl;
					cout << "Paso 5: Ingrese la cantidad  de unidades a cotizar" << endl;
					cin >> input;
					cantidad = validarEntrada(input);
					if (cantidad <= stock) {
						system("cls");
						encabezado();
						presentador->cotizarPantalon(calidad, corte, cantidad, precio);
						system("pause");
					}
					else {
						system("cls");
						cout << " no se puede cotizar mas de las unidades disponibles" << endl;
						system("pause");
					}
					opcion = 3;
					system("cls");
					
					cout << " ¿Desea cotizar otro pantalón? " << endl;
					cout << "1)Si" << endl;
					cout << "2)No" << endl;
					cin >> input;
					opcion = validarEntrada(input);
					system("cls");
					if (opcion == 2) opcion = 3;
				}
			}
		}
		if (opcion == 0 || opcion > 3) {
			cout << "Opcion invalida" << endl;
			system("pause");
		}
		if (opcion == 3) {
			cout << "Gracias por usar el programa" << endl;
			system("pause");
		}

	} while (opcion != 3);


}








int VistaConsola::validarEntradaCaracteristica(string input, int& opcion)
{
	int num = -1;
	try
	{
		num = stoi(input);
		opcion = num;

		if (num == 1) {
			num = 0;
		}
		if (num == 2) {
			num = 1;
		}

	}
	catch (const invalid_argument& ) {

		opcion= 4;

	}
	
	return num;
}

double VistaConsola::validadEntradaPrecio(string inout, int& opcion)
{
	double num = -1;
	try
	{
		num = stod(inout);
		opcion = (int) num;

		if (num == 1) {
			num = 0;
		}
		else if (num == 2) {
			num == 1;
		}

	}
	catch (const invalid_argument& ) {
		cout << "Error: Entrada invalida, ingrese un numero de las opciones " << endl;
		system("pause");
		opcion = 4;
	}

	return num;
}


