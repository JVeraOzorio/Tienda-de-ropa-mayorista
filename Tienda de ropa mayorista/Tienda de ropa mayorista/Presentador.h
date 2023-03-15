#pragma once
#include "IVista.h"
#include "Modelo.h"
class Presentador
{
private:
		IVista * vista;
		Modelo * modelo;
	public:
		Presentador(IVista* vista) : vista(vista), modelo(new Modelo()) {}
		void iniciar();
		void mostrarTienda();
		void mostrarVendedor();
		void mostrarHistorial();
		int getStockCamisa(int calidad,int manga, int cuello, double precio);
		bool cotizarPantalon();
		double cotizarCamisa(int calidad, int manga, int cuello, int cantidad, double precuio);
};

