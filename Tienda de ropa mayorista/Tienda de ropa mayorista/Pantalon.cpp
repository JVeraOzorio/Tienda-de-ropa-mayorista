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
