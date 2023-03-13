#pragma once
#include <string>
#include <iostream>
#include "Fecha.h"
#include "Prenda.h"
using namespace std;

class Cotizacion
{
private:
	static int codigoCotizacion;
	Fecha fecha_;
	int codigoVendedor_;
	const Prenda* prenda_;
	int cantidad_;
	double precio_;
public:
	Cotizacion(Fecha fecha, int codigoVendedor, const Prenda* prenda, int cantidad, double precio) : fecha_(fecha), codigoVendedor_(codigoVendedor), prenda_(prenda), cantidad_(cantidad), precio_(precio) { codigoCotizacion++; }
	
};

