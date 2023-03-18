#include "Modelo.h"


string Modelo::getNombreTienda()
{   
    string _tienda;
    _tienda = tienda->getNombre() + " | " + tienda->getDireccion();
    return _tienda;
}

string Modelo::getNombreVendedor()
{   
   return tienda->getVendedor();

}

int Modelo::getCodigoVendedor()
{   
   
    return tienda->getCodigoVendedor();
}

vector<Cotizacion> Modelo::getCotizaciones()
{   
   cotizaciones = tienda->getCotizaciones();

   return tienda->getCotizaciones();
 
}


int Modelo::getStockCamisa(int calidad, int manga, int cuello)
{
    return 0;
}

Cotizacion Modelo::cotizarCamisa(int calidad, int manga, int cuello, int cantidad, double precio)
{
    Camisa camisa(calidad, cantidad, manga, cuello, precio);
   

    Cotizacion cotizacion = tienda->cotizar(&camisa, cantidad, precio);
 
    cotizaciones.push_back(cotizacion);

    

    return cotizacion;
}

Cotizacion Modelo::cotizarPantalon(int calidad, int corte, int cantidad, double precio)
{   
    Pantalon pantalon(calidad, cantidad, corte, precio);

    Cotizacion cotizacion = tienda->cotizar(&pantalon, cantidad, precio);

    cotizaciones.push_back(cotizacion);

    return cotizacion;
}

void Modelo::descontarStock(Prenda* prenda, int cantidad)
{

    int camisasDescontadas = 0;
    Camisa* camisa = dynamic_cast<Camisa*>(prenda);
    Pantalon* pantalon = dynamic_cast<Pantalon*>(prenda);
    
    for (Prenda* p : prendas) {
        if (camisa != nullptr) {
            if (p = dynamic_cast <Camisa*>(p));      // recorriendo el vector para descontar el stock
        }
        else if (pantalon != nullptr) {

        }
    }
   
}


