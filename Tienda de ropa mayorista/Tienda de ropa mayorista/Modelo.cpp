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

bool Modelo::cotizar()
{   



    return false;
}

int Modelo::getStockCamisa(int calidad, int manga, int cuello)
{
    int stockCamisa = 0;

    
    return 0;
}


