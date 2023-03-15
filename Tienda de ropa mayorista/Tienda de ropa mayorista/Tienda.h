#pragma once
#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Prenda.h"
#include "Camisa.h"
#include "Pantalon.h"
#include "Vendedor.h"

using namespace std;


class Tienda
{
private:
	string nombre;
	string direccion;
	vector<Prenda*> prendas;
	Vendedor vendedor;

public:
	Tienda(string _nombre, string _direccion,string Nombrevendedor, string ApellVendedor) : nombre(_nombre), direccion(_direccion), prendas(vector<Prenda*>()),vendedor(Nombrevendedor,ApellVendedor) { }
	void AgregarPrenda(int calidad, double precio_unitario, int stock, string tipo);
	string getNombre() { return nombre; }
	string getDireccion() {return direccion;}
	string getVendedor() { return vendedor.getNombre() + " " + vendedor.getApellido(); }
	int getCodigoVendedor() { return vendedor.getCodigo(); }
	vector<Prenda*> getPrendas() { return prendas; }

	~Tienda();


};

