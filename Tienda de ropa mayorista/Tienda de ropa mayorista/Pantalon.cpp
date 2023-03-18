#include "Pantalon.h"

Pantalon::Pantalon(int calidad, int stock, int corte, double precio) : Prenda(calidad, stock, precio)
{
	this->corte = corte == 0 ? TipoCorte::Comun : TipoCorte::Chupin;

}

int Pantalon::GetCorte()
{   
    int _corte;

	switch (corte)
	{
	case TipoCorte::Chupin:
		_corte = 1;
		break;
	case TipoCorte::Comun:
		_corte = 0;
		break;
	default:
		_corte = 0;
		break;
	}

    return _corte;
}

string Pantalon::getDescripcion()
{
	string descripcion = "Pantalon " + GetCorte();
	return descripcion;
}

int Pantalon::getCalidad()
{
	switch (calidad)
	{
		case tipoCalidad::Standard: return 0;
			break;
		case tipoCalidad::Premium: return 1;
			break;
		default: return 0;
			break;
	}
}
