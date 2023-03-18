#include "Vendedor.h"

int Vendedor::codigoVendedor = 0;
Vendedor::Vendedor(string _nombre, string _apellido)
{
	nombre = _nombre;
	apellido = _apellido;
	codigoVendedor++;
}

Cotizacion Vendedor::realizarCotizacion(Prenda* prenda, int cantidad, double precio)
{	
	if (Camisa* c = dynamic_cast<Camisa*> (prenda)){

		//Falla el calulo de la camisa manga corta, cuello mao.

		if (c->GetManga() == 1) {
			precio = precio * 0.90;
		}
		if (c->GetCuello() == 0) {
			precio = precio * 1.03;
		}
		if (c->getCalidad() == 1) {
			precio = precio * 1.3;
		}

		precio = std::floor(precio * 100) / 100;

		Cotizacion cotizacion(codigoVendedor, c, cantidad, precio);
		cotizaciones.push_back(cotizacion);
		return cotizacion;
	}
	else if (Pantalon* p = dynamic_cast<Pantalon*> (prenda)) {

		if (p->GetCorte() == 0) {
			precio = precio * 0.88;
		}
		if (p->getCalidad() == 1) {
			precio = precio * 1.3;
		}
		precio = std::floor(precio * 100) / 100;
		Cotizacion cotizacion(codigoVendedor, p, cantidad, precio);
		cotizaciones.push_back(cotizacion);
		return cotizacion;
	}
	else {
		cout << "No se puede cotizar la prenda " << endl;
	}

	
}


