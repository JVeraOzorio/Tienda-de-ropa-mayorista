#include "Pantalon.h"

string Pantalon::GetCorte()
{   
    string _corte;

	switch (corte)
	{
	case TipoCorte::Chupin:
		_corte = "chupin";
		break;
	case TipoCorte::Comun:
		_corte = "comun";
		break;
	default:
		_corte = "comun";
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
