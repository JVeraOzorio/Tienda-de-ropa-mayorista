#include "Vendedor.h"

int Vendedor::codigoVendedor = 0;
Vendedor::Vendedor(string _nombre, string _apellido)
{
	nombre = _nombre;
	apellido = _apellido;
	codigoVendedor++;
}

vector<Cotizacion> Vendedor::realizarCotizacion()
{	
	

	return vector<Cotizacion>();
}


