#pragma once
#include "Prenda.h"

enum class TipoCorte{Chupin=1,Comun=0};
class Pantalon :
    public Prenda
{
private:
    TipoCorte corte;
public:
   
	~Pantalon() {};
	Pantalon(int calidad, int stock, int corte, double precio);
	double getPrecio() { return precio; }
	int GetCorte();
	int getCalidad();
	int getStock() { return stock; }
	string getDescripcion();
	string getTipoCorte();
	string getTipoCalidad();


};

