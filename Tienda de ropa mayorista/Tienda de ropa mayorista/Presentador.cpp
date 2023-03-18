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

int Presentador::getStockPantalon(int calidad, int corte, double precio)
{
	vector<Prenda*> prendas = modelo->getPrendas();
	int stockPantalones = 0;
	
	for (int i = 0; i < prendas.size(); i++) {

		Pantalon* pantalon = dynamic_cast<Pantalon*>(prendas[i]);
		if (pantalon != nullptr && pantalon->GetCorte() == corte && pantalon->getCalidad() == calidad) {
			stockPantalones += pantalon->getStock();
		}
	}
	
	
	return stockPantalones;
}

bool Presentador::cotizarPantalon(int calidad, int corte, int cantidad,  double precio)
{
	modelo->cotizarPantalon(calidad, corte, cantidad, precio).mostrar();
	return true; 
}

double Presentador::cotizarCamisa(int calidad, int manga, int cuello, int cantidad, double precio)
{	
	

	modelo->cotizarCamisa(calidad, manga, cuello, cantidad, precio).mostrar();
	
	return 0.0;
}





