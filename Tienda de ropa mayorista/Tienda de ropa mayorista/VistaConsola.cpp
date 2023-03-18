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
		mostarTitulo();
		//presentador->mostrarTienda();
		//presentador->mostrarVendedor();
		cout << "Seleccione una opcion del menú" << endl<<endl;
		cout << "1)" << " Historial de cotizaciones" << endl;
		cout << "2)" << " Realizar cotizacion" << endl;
		cout << "3)" << " Salir" << endl;

		cin >> input;
		opcion = validarEntrada(input);
		system("cls");
		
		seleccionar(opcion);
		
	} while (opcion !=3);

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
	case 2: Cotizar();
			
			system("cls");

		default:
			break;
	}
}

void VistaConsola::mostrarHistorial()
{
	presentador->mostrarHistorial();
}

void VistaConsola::Cotizar()
{
	mostarTitulo();
	cout << " - COTIZAR" << endl;
	cout << "<---->" << endl;
	cout << "Presionar 3 para volver al menu anterior" << endl;
	cout << "<---->" << endl;
	mostrarMenuCotizar();

}

void VistaConsola::mostrarMenuCotizar()
{	
	string input;
	int opcion;
	do
	{	
		
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
		mostarTitulo();
		cout << " - COTIZAR" << endl;
		cout << "<---->" << endl;
		cout << "Presionar 3 para volver al menu anterior" << endl;
		cout << "<---->" << endl;
	} while (opcion != 3);
	
}

void VistaConsola::mostrarMenuCamisa()
{	
	int opcion=0;
		string input;
		int manga, cuello, calidad, cantidad;
		double precio=0;
	
		do
		{
			encabezado();
			cout << "La camisa a cotizar , ¿Es manga larga? " << endl;
			cout << "0) SI" << endl;
			cout << "1) NO" << endl;

			cin >> input;
			manga = validarEntrada(input);
			system("cls");
			if (manga != 2) {
				MenuCuello();
				cin >> input;
				cuello = validarEntrada(input);
				system("cls");

					if (cuello != 2) {
						MenuCalidad();
						cin >> input;
						calidad = validarEntrada(input);
						system("cls");
						if (calidad != 2) {
								encabezado();
								cout << "ingrese el precio unitario del producto" << endl;
								cin >> precio;

								int stock = presentador->getStockCamisa(calidad, manga, cuello, precio);
								cout << " Existen " << stock << " cantidad de unidades en Stock de esta combinacion" << endl;
								if (stock == 0) {
									cout << " ingrese productos a la tienda antes de realizar una cotizacion" << endl;
									system("pause");
								}
								else {
									
									encabezado();
									cout << "Paso 5: Ingrese la cantidad  de unidades a cotizar";
									cin >> input;
									cantidad = validarEntrada(input);

										if (cantidad <= stock) {
											system("cls");
											encabezado();
											presentador->cotizarCamisa(calidad,manga,cuello,cantidad,precio);
											system("pause");
										}else {
											system("cls");
											cout << " no se puede cotizar mas de las unidades disponibles" << endl;
											system("pause");
										}
										
								}
							}

					}

			}

			system("cls");
			cout << " ¿Desea cotizar otra camisa? " << endl;
			cout << "1)Si" << endl;
			cout << "2)No" << endl;
			cin >> opcion;
			system("cls");

		} while (opcion != 2);
		

	
}

void VistaConsola::encabezado()
{
	mostarTitulo();
	cout << " - COTIZAR" << endl;
	cout << "<---->" << endl;
	cout << "Presionar 2 para volver al menu anterior" << endl;
	cout << "<---->" << endl;

}

int VistaConsola::validarEntrada(string input)
{	
	int num =-1;
	try
	{
		 num = stoi(input);
		 return num;
	}
	catch (const invalid_argument& e) {
		cout << "Error: Entrada invalida, ingrese un numero de las opciones " << endl;
	}

	if (num > 2 || num < 0) {
		cout << "Eror: Ingrese una opcion valida" << endl;
	}
	system("pause");
		return num;
}

int VistaConsola::MenuManga()
{	
	
	string input;
	int manga;
	do
	{
		encabezado();
		cout << "Paso 2.a:";
		cout << "La camisa a cotizar , ¿Es manga larga? " << endl;
		cout << "0) SI" << endl;
		cout << "1) NO" << endl;

		cin >> input;
		manga = validarEntrada(input);
		system("cls");
		
	} while (manga!=3 );
	return manga;
}

void VistaConsola::MenuCuello()
{	
	encabezado();
	cout << "Paso 2.b La camisa, ¿Es cuello Mao?" << endl;
	cout << "0) SI" << endl;
	cout << "1) NO" << endl;
}

void VistaConsola::MenuCalidad()
{
	encabezado();
	cout << "Paso 3 : Seleccione la calidad de la prenda" << endl;
	cout << "0) Standart" << endl;
	cout << "1) Premium " << endl;
}

bool VistaConsola::validarStock(int stock, int cantidadProductoCotizar)
{		
	cout << "ENTRO " << endl;
	if (stock < cantidadProductoCotizar) {
		return false;
	}
	else return true;
}

void VistaConsola::mostrarMenuPantalon()
{	
	string input;
	int opcion = 0, calidad = 0, corte = 0, cantidad =0;
	double precio=0;
	do
	{
		encabezado();
		cout << "El pantalón a cotizar, ¿Es chupín?" << endl;
		cout << "1) SI" << endl;
		cout << "2) NO" << endl;
		cin >> input;
		opcion = validarEntrada(input);
		corte = guardarOpcionCorte(opcion);
		system("cls");
		calidad = guardarOpcionCalidad(opcion);
		system("cls");
		//precio = guardarOpcionPrecio(opcion);
		encabezado();
		cout << "ingrese el precio unitario del producto" << endl;
		cin >> input;
		precio = validarEntradaPrecio(input);

		int stock = presentador->getStockPantalon(calidad, corte,precio);
		cout << " Existen " << stock << " cantidad de unidades en Stock de esta combinacion" << endl;
		if (stock == 0) {
			cout << " ingrese productos a la tienda antes de realizar una cotizacion" << endl;
			system("pause");
		}
		else {

			encabezado();
			cout << "Paso 5: Ingrese la cantidad  de unidades a cotizar" << endl;
			cin >> input;
			cantidad = validarEntrada(input);

			system("cls");
			if (cantidad <= stock) {
				system("cls");
				//encabezado();
				presentador->cotizarPantalon(calidad, corte, cantidad ,precio);
				system("pause");
			}
			else {
				system("cls");
				cout << " no se puede cotizar mas de las unidades disponibles" << endl;
				system("pause");
			}
			
		}


	} while (opcion!=3);

	
}

int VistaConsola::guardarOpcionCorte(int opcion)
{	
	int corte = -1;

	if (opcion == 1 ) {
		corte = 0;
	}
	else if(opcion == 2 ) {
		corte = 1;
	}
	return corte;
}

int VistaConsola::guardarOpcionCalidad(int opcion)
{	
	string input;
	int calidad = 0;
	MenuCalidad();
	cin >> input;
	calidad = validarEntrada(input);
	system("cls");

	return calidad;
}

double VistaConsola::guardarOpcionPrecio(int &opcion)
{	
	string input;
	double precio;
	encabezado();
	cout << "ingrese el precio unitario del producto" << endl;
	cin >> input;
	precio = validarEntradaPrecio(input);

	if (precio == 3) { opcion = precio; }

	return 0;
}

double VistaConsola::validarEntradaPrecio(string input)
{	

	double num = -1;
	try
	{
		num = stod(input);
		return num;
	}
	catch (const invalid_argument& e) {
		cout << "Error: Entrada invalida, ingrese un numero de las opciones " << endl;
	}

	if (num > 2 || num < 0) {
		cout << "Eror: Ingrese una opcion valida" << endl;
	}
	system("pause");
	return num;
}

void VistaConsola::prueba()
{
	//presentador->cotizarCamisa(1, 0, 0, 10, 10);

}

