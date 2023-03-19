#pragma once
#include <string>
#include <iostream>
#include "Fecha.h"
#include "Prenda.h"
#include "Camisa.h"
#include "Pantalon.h"
using namespace std;

class Cotizacion
{
private:
	int codigoCotizacion = 0;
	Fecha fecha_;
	int codigoVendedor_;
	string prenda_;
	int cantidad_;
	double precio_;
	static int contador;
public:
	Cotizacion(int codigoVendedor, string prenda, int cantidad, double precio) : fecha_(), codigoVendedor_(codigoVendedor), prenda_(prenda), cantidad_(cantidad), precio_(precio) {  codigoCotizacion = ++contador; }
	void mostrar();
	
	

};

