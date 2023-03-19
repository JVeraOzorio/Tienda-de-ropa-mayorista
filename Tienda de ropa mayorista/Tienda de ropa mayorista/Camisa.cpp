#include "Camisa.h"

Camisa::Camisa(int calidad, int stock, int manga, int cuello, double precio) : Prenda(calidad,stock,precio)
{
	this->tipo_cuello_ = cuello == 0 ? TipoCuello::Comun : TipoCuello::Mao;
	this->tipo_manga_ = manga == 0 ? TipoManga::Corta : TipoManga::Larga;

}

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
	descripcion = "Camisa " + getTipoCalidad() + " | " + getTipoManga() + " | " + getTipoCuello();
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

string Camisa::getTipoManga()
{	
	switch (tipo_manga_)
	{
	case TipoManga::Corta: return " manga corta";
		break;
	case TipoManga::Larga: return " manga larga";
		break;
	default:
		break;
	}

	return string();
}

string Camisa::getTipoCuello()
{	
	switch (tipo_cuello_)
	{
	case TipoCuello::Mao: return "Cuello mao";
		break;
	case TipoCuello::Comun: return "Cuello común";
		break;
	default:
		break;
	}
	return string();
}

string Camisa::getTipoCalidad()
{	
	switch (calidad)
	{
	case tipoCalidad::Standard: return "Standard";
		break;
	case tipoCalidad::Premium: return "Premium";
		break;
	default:
		break;
	}

	return string();
}
