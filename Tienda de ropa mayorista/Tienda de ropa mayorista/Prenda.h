#pragma once
#include <string>
#include <iostream>
using namespace std;
enum class tipoCalidad {Standard=0, Premium=1};
class Prenda
{
protected:
	tipoCalidad calidad;
	double precio;
	int stock;
public:

	Prenda(int calidad, int stock, double precio);
	virtual ~Prenda() {} // Virtual y destructor para que la clase sea abstracta
	virtual int getCalidad()  = 0; // Funci�n virtual pura
	virtual double getPrecio()  = 0; // Funci�n virtual pura
	virtual int getStock()  = 0; // Funci�n virtual pura
	virtual string getDescripcion() = 0; // Funci�n virtual pura

	
};

