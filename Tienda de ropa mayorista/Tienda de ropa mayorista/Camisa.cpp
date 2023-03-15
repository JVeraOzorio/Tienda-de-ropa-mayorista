#include "Camisa.h"

int Camisa::GetManga()
{   
    int _manga;

	switch (tipo_manga_)
	{
	case TipoManga::Corta:
		_manga = 0;
		break;
	case TipoManga::Larga:
		_manga = 1;
		break;
	default:
		_manga = 1;
	}
    return _manga;
}

int Camisa::GetCuello()
{	
	int _cuello;

	switch (tipo_cuello_)
	{
	case TipoCuello::Mao:
		_cuello = 1;
		break;
	case TipoCuello::Comun:
		_cuello = 0;
		break;
	default:
		_cuello = 0;
		break;
	}

	return _cuello;
}

string Camisa::getDescripcion()
{
	string descripcion;
	descripcion = "Camisa " + to_string(getCalidad()) + " | " + to_string(GetManga()) + " | " + to_string(GetCuello()) + " | " + to_string(precio);
	return descripcion;
}

int Camisa::getCalidad()
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
