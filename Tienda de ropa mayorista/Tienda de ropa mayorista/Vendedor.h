#pragma once
#include <string>
#include <iostream>
#include <vector>
#include"Cotizacion.h"
#include "Camisa.h"
#include "Pantalon.h"
using namespace std;
class Vendedor
{
private:
	string nombre;
	string apellido;
	static int codigoVendedor;
	vector<Cotizacion> cotizaciones;

public:
	Vendedor(string nombre, string apellido);
	string getNombre() { return nombre; }
	string getApellido() { return apellido; }
	int getCodigo() { return codigoVendedor; }
	Cotizacion realizarCotizacion(Prenda* prenda, int cantidad, double precio);
	vector<Cotizacion> getCotizaciones() { return cotizaciones; }
};

