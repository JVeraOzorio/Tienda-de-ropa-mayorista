#pragma once
#include "Prenda.h"

enum class TipoCorte{Chupin=1,Comun=0};
class Pantalon :
    public Prenda
{
private:
    TipoCorte corte;
public:
    Pantalon(tipoCalidad calidad, double precio_unitario, int stock, TipoCorte corte) : Prenda(calidad, precio_unitario, stock), corte(corte) {}
	~Pantalon() {};
	double getPrecio() { return precio; }
	string GetCorte();
	string getDescripcion();
	int getCalidad();
};

