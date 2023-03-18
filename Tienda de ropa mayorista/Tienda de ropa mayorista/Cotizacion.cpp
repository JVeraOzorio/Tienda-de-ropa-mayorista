#include "Cotizacion.h"
int Cotizacion::codigoCotizacion = 0;

void Cotizacion::mostrar()
{
	cout << "Codigo Cotizacion: " << codigoCotizacion << endl;
	cout << "Fecha de realizacion: " << fecha_.getDia() <<  " | " << fecha_.getMes() << " | " << fecha_.getAnio() << endl;
	cout << "Codigo de Vendedor: " << codigoVendedor_ << endl;
	//cout << "Prenda : " << prenda_->getDescripcion() << endl;
	cout << "Precio : " << precio_ << endl;
	cout << "Cantidad : " << cantidad_ << endl;
	cout << "Precio Final: " << precio_ * cantidad_ << endl << endl;
	
}
