#pragma once
#include <string>
#include <iostream>
using namespace std;
class Vendedor
{
private:
	string nombre;
	string apellido;
	static int codigoVendedor;
public:
	Vendedor(string nombre, string apellido);
	void Cotizar() {};

};

