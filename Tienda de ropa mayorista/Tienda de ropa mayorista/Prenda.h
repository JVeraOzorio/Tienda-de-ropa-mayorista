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
	int cantidad;
public:
	Prenda(tipoCalidad calidad, float precio, int cantidad);
	virtual ~Prenda() =0; // Virtual y destructor para que la clase sea abstracta
	virtual int getCalidad()  = 0; // Función virtual pura
	virtual double getPrecio()  = 0; // Función virtual pura
	virtual int getStock()  = 0; // Función virtual pura
	virtual string getDescripcion() = 0; // Función virtual pura

	
};

