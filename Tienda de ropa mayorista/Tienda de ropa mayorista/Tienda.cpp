#include "Tienda.h"





Tienda::Tienda() : vendedor("Jorge", "Vera")
{
    this->nombre = "Quarkies";
    this->direccion = "Av madero 123 ";
    prendas.push_back(new Camisa(0, 100, 0, 1, 0));
    prendas.push_back(new Camisa(1, 100, 0, 1, 0));
    prendas.push_back(new Camisa(0, 150, 0, 0, 0));
    prendas.push_back(new Camisa(1, 150, 0, 0, 0));
    prendas.push_back(new Camisa(0, 75, 1, 1, 0));
    prendas.push_back(new Camisa(1, 75, 1, 1, 0));
    prendas.push_back(new Camisa(0, 175, 1, 0, 0));
    prendas.push_back(new Camisa(1, 175, 1, 0, 0));
    prendas.push_back(new Pantalon(0, 750, 1, 0));
    prendas.push_back(new Pantalon(1, 750, 1, 0));
    prendas.push_back(new Pantalon(0, 250, 0, 0));
    prendas.push_back(new Pantalon(1, 250, 0, 0));       
}

Tienda::~Tienda()
{
    for (auto prenda : prendas) {
        delete prenda;
    }

}

Cotizacion Tienda::cotizar(Prenda* prenda, int cantidad, double precio)
{
   Cotizacion cotizacion =  vendedor.realizarCotizacion(prenda, cantidad, precio);
   return cotizacion;
}

vector<Prenda*> Tienda::getPrendas()
{   

    return vector<Prenda*>(prendas);
}

void Tienda::getStock()
{   

    for (const auto& prenda : prendas) {
        cout << prenda->getDescripcion() << endl;
    }

}

