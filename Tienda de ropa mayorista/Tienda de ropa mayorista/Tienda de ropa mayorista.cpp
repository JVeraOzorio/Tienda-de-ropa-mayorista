// Tienda de ropa mayorista.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "VistaConsola.h"
#include "Tienda.h"
#include <vector>
#include "Presentador.h"
#include "Cotizacion.h"

int main()
{	
	SetConsoleTitleW(L"Cotizador Express");
	setlocale(LC_ALL, "es_Es");
	VistaConsola menu;
	/*Modelo modelo;
	vector<Prenda*> prendas = modelo.getPrendas();

	for (auto prenda : prendas)
	{
		Camisa* camisa = dynamic_cast<Camisa*>(prenda);
		if (camisa != nullptr && camisa->getCalidad() == 0) {
			cout << camisa->getDescripcion() << " " << camisa->getStock() << endl;

		}
	}*/
}
