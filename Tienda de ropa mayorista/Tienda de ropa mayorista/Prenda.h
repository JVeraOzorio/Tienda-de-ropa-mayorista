#pragma once
#include <string>
#include <iostream>
using namespace std;
enum class tipoCalidad {Standard, Premium};
class Prenda
{
protected:
	tipoCalidad calidad;
	float precio;
	int cantidad;
public:
	Prenda(tipoCalidad calidad, float precio, int cantidad);
	virtual ~Prenda() = default; // Virtual y destructor para que la clase sea abstracta
//	virtual string getCalidad() const = 0; // Función virtual pura
//	virtual double getPrecio() const = 0; // Función virtual pura
//	virtual int getCantidad() const = 0; // Función virtual pura
	
};

