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
	 void encabezado();
	 int validarEntrada(string input);
	 void MenuCuello();
	 void MenuCalidad();
	 void mostrarMenuPantalon();
	 int validarEntradaCaracteristica(string input,int &opcion);
	 double validadEntradaPrecio(string inout, int& opcion);
	 ~VistaConsola() { delete presentador; }
	 
};

