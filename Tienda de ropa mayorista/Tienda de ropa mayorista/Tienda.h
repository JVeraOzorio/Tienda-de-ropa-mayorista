#pragma once
#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Prenda.h"
#include "Camisa.h"
#include "Pantalon.h"

using namespace std;


class Tienda
{
private:
	string nombre;
	string direccion;
	vector<Prenda*> prendas;
public:
	Tienda(string nombre, string direccion);
	void AgregarPrenda(int calidad, double precio_unitario, int stock, string tipo);
	~Tienda();


};

