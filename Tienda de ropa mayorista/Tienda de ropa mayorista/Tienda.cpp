#include "Tienda.h"

void Tienda::AgregarPrenda(int calidad, double precio_unitario, int stock, string tipo)
{
  
}

Tienda::~Tienda()
{
    for (auto prenda : prendas) {
        delete prenda;
    }

}
