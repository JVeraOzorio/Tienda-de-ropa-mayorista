#include "Prenda.h"

Prenda::Prenda(int calidad, int stock, double precio)
{
	 this->calidad = (calidad == 0 ? tipoCalidad::Standard : tipoCalidad::Premium);
	 this->precio = precio;
	 this->stock = stock; 
}
