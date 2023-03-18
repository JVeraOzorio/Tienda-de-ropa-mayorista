#pragma once
#include <string>
#include <iostream>
#include "Tienda.h"
#include "Vendedor.h"
#include "Prenda.h"
#include "Cotizacion.h"
#include <vector>

using namespace std;

class Modelo
{
private:
	Tienda* tienda;
	//vector<Vendedor*> vendedores;
	vector<Prenda*> prendas;
	vector<Cotizacion> cotizaciones;
	//bool agregarCotizacion(Cotizacion* cotizacion);
public:
	Modelo() { tienda = new Tienda(); }
	string getNombreTienda();
	string getNombreVendedor();
	int getCodigoVendedor();
	vector<Cotizacion> getCotizaciones();
	bool cotizar();
	int getStockCamisa(int calidad, int manga, int cuello);
	vector<Prenda*> getPrendas() { return tienda->getPrendas(); }
	void mostrarPrendas() { tienda->getStock(); }
	Cotizacion cotizarCamisa(int calidad, int manga, int cuello, int cantidad, double precio);
    Cotizacion cotizarPantalon(int calidad, int corte, int cantidad, double precio);
	void descontarStock(Prenda* prenda, int cantidad);
};

