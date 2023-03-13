#pragma once
#include "Prenda.h"

enum class TipoCorte{Chupin,Comun};
class Pantalon :
    public Prenda
{
private:
    TipoCorte corte;
public:
    Pantalon(tipoCalidad calidad, double precio_unitario, int stock, TipoCorte corte) : Prenda(calidad, precio_unitario, stock), corte(corte) {}
	~Pantalon() {};
	double GetPrecio() { return precio; }
	string GetCorte();
};

