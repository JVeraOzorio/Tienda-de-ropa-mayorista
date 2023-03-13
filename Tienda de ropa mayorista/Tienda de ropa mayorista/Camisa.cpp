#include "Camisa.h"

string Camisa::GetManga()
{   
    string _manga;

	switch (tipo_manga_)
	{
	case TipoManga::Corta:
		_manga = "corta";
		break;
	case TipoManga::Larga:
		_manga = "larga";
		break;
	default:
		_manga = "larga";
	}
    return _manga;
}

string Camisa::GetCuello()
{	
	string _cuello;

	switch (tipo_cuello_)
	{
	case TipoCuello::Mao:
		_cuello = "mao";
		break;
	case TipoCuello::Comun:
		_cuello = "comun";
		break;
	default:
		_cuello = "comun";
		break;
	}

	return _cuello;
}
