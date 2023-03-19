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
	vector<Prenda*> prendas;
	vector<Cotizacion> cotizaciones;
	Vendedor *vendedor;
public:
	Modelo() {  vendedor = new Vendedor("Jorge", "Vera"); tienda = new Tienda(this->getVendedor());}
	string getNombreTienda();
	string getNombreVendedor();
	int getCodigoVendedor();
	vector<Cotizacion> getCotizaciones();
	int getStockCamisa(int calidad, int manga, int cuello);
	vector<Prenda*> getPrendas() { return tienda->getPrendas(); }
	void mostrarPrendas() { tienda->getStock(); }
	Cotizacion cotizarCamisa(int calidad, int manga, int cuello, int cantidad, double precio);
    Cotizacion cotizarPantalon(int calidad, int corte, int cantidad, double precio);
	Vendedor* getVendedor() { return vendedor; }
	
};

