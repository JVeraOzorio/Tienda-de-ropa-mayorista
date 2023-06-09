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
   //cotizaciones = tienda->getCotizaciones();

    return cotizaciones;
 
}


int Modelo::getStockCamisa(int calidad, int manga, int cuello)
{
    return 0;
}

Cotizacion Modelo::cotizarCamisa(int calidad, int manga, int cuello, int cantidad, double precio)
{
    Camisa camisa(calidad, cantidad, manga, cuello, precio);
       
   Cotizacion cotizacion = vendedor->realizarCotizacion(&camisa, cantidad, precio);
   cotizaciones.push_back(cotizacion);

    return cotizacion;
}

Cotizacion Modelo::cotizarPantalon(int calidad, int corte, int cantidad, double precio)
{   
    Pantalon pantalon(calidad, cantidad, corte, precio);

    Cotizacion cotizacion = vendedor->realizarCotizacion(&pantalon, cantidad, precio);

    cotizaciones.push_back(cotizacion);

    return cotizacion;
}




