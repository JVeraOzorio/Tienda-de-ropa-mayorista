#pragma once
#include <string>
#include <iostream>
#include "Fecha.h"
#include "Prenda.h"
using namespace std;

class Cotizacion
{
private:
	int codigoCotizacion = 0;
	Fecha fecha_;
	int codigoVendedor_;
	const Prenda* prenda_;
	int cantidad_;
	double precio_;
	static int contador;
public:
	Cotizacion(int codigoVendedor, const Prenda* prenda, int cantidad, double precio) : fecha_(), codigoVendedor_(codigoVendedor), prenda_(prenda), cantidad_(cantidad), precio_(precio) {  codigoCotizacion = ++contador; }
	void mostrar();
	void mostrarPrecio(){cout<<precio_<<endl;}
	void mostrarFecha(){cout << fecha_.toString() << endl;}
	void mostrarCantidad(){cout << cantidad_ << endl;}
	void mostrarCodigoVendedor(){cout << codigoVendedor_ << endl;}
	void mostrarCodigoCotizacion(){cout << codigoCotizacion << endl;}
	void setFecha(Fecha fecha){fecha_ = fecha;}
	Fecha getFecha(){return fecha_;}

};

