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
	vector<Cotizacion*> cotizaciones;
	bool agregarCotizacion(Cotizacion* cotizacion);
public:
	Modelo() : tienda(new Tienda("Quarkis", "Av Siempre viva 123","Jorge","Vera")), prendas(vector<Prenda*>()), cotizaciones(vector<Cotizacion*>()) {}
	string getNombreTienda();
	string getNombreVendedor();
	int getCodigoVendedor();
	vector<Cotizacion*> getCotizaciones() { return cotizaciones; }
	bool cotizar();
	int getStockCamisa(int calidad, int manga, int cuello);
	vector<Prenda*> getPrendas() { return tienda->getPrendas(); }
};

