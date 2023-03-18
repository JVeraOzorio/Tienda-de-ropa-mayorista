#pragma once
#include <algorithm>
#include <windows.h>
#include <stdlib.h>
#include "IVista.h"
#include "Presentador.h"
class VistaConsola :
    public IVista
{
private:
	Presentador * presentador;
public:
	 VistaConsola();
	 void mostrarMenu();
	 void mostrarMensaje(string) {};
	 void mostrarError();
	 void mostarTitulo();
	 void mostrarHistorial();
	 void mostrarMenuCotizar();
	 void mostrarMenuCamisa();
	 void seleccionar (int);
	 void Cotizar();
	 void encabezado();
	 int validarEntrada(string input);
	 int MenuManga();
	 void MenuCuello();
	 void MenuCorte();
	 void MenuCalidad();
	 bool validarStock(int stock, int cantidadProductoCotizar);
	 void mostrarMenuPantalon();
	 int guardarOpcionCorte(int opcion);
	 int guardarOpcionCalidad(int opcion);
	 int guardarOpcionManga(int opcion);
	 int guardarOpcionCuello(int opcion);
	 int guardarOpcionCantidad(int opcion);
	 double guardarOpcionPrecio(int &opcion);
	 double validarEntradaPrecio(string input);
	 int validarEntradaCaracteristica(string input,int &opcion);
	 double validadEntradaPrecio(string inout, int& opcion);


	 void prueba();
	 

};

