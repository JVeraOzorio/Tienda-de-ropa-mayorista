#pragma once
#include "Prenda.h"

enum class TipoManga{Corta,Larga};
enum class TipoCuello{Mao,Comun};
class Camisa :
    public Prenda
{
private :
    TipoManga tipo_manga_;
	TipoCuello tipo_cuello_;
public:
	Camisa(tipoCalidad calidad, double precio_unitario, int stock, TipoManga tipo_manga, TipoCuello tipo_cuello) : Prenda(calidad, precio_unitario, stock), tipo_manga_(tipo_manga), tipo_cuello_(tipo_cuello) {}
	~Camisa() {};
	double GetPrecio() { return precio; }
	string GetManga();
	string GetCuello();


};

