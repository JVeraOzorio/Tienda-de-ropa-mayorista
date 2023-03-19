#include "Cotizacion.h"
int Cotizacion::contador = 0;

void Cotizacion::mostrar()
{
	cout << "Codigo Cotizacion: " << codigoCotizacion ++ << endl;
	cout << "Fecha de realizacion: " << fecha_.toString() << endl;//fecha_.getDia() <<  " | " << fecha_.getMes() << " | " << fecha_.getAnio() << endl; 
	cout << "Codigo de Vendedor: " << codigoVendedor_ << endl;
	cout << "Prenda : " << prenda_ << endl;
	cout << "Precio : " << precio_ << endl;
	cout << "Cantidad : " << cantidad_ << endl;
	cout << "Precio Final: " << precio_ * cantidad_ << endl << endl;
	
}

