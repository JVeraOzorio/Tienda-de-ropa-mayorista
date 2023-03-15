#include "Presentador.h"

void Presentador::mostrarTienda()
{
	cout << "   " << modelo->getNombreTienda() << endl;
	cout << "<---------------------------------------->" << endl;
}

void Presentador::mostrarVendedor()
{
	cout << modelo->getNombreVendedor() << " | " << modelo->getCodigoVendedor() << endl;

	cout << "<---------------------------------------->" << endl << endl;
}

void Presentador::mostrarHistorial()
{
	std::vector<Cotizacion*> cotizacion = modelo->getCotizaciones();
	if (cotizacion.empty()) {
		cout << "No hay ninguna cotizacion para mostrar." << endl;
	}
	else {
		for (int i = 0; i < cotizacion.size(); i++) {
			cotizacion[i]->mostrar();
		}
	}
}

int Presentador::getStockCamisa(int calidad, int manga, int cuello, double precio)
{	
	vector<Prenda*> prendas = modelo->getPrendas();
	
	int stockCamisa = 0;
	for (int i = 0; i < prendas.size(); i++)
	{
		Camisa* camisa = dynamic_cast<Camisa*>(prendas[i]);
		if (camisa != nullptr && camisa->getCalidad() == calidad && camisa->GetCuello() == cuello && camisa->GetManga() == manga)
		{
			stockCamisa += camisa->getStock();		
		}
	}
	return stockCamisa;
}

double Presentador::cotizarCamisa(int calidad, int manga, int cuello, int cantidad, double precuio)
{
	modelo.
}





