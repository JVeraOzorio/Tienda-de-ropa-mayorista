#pragma once
#include "Prenda.h"

enum class TipoManga{Corta=0,Larga=1};
enum class TipoCuello{Mao=1,Comun=0};
class Camisa :
    public Prenda
{
private :
    TipoManga tipo_manga_;
	TipoCuello tipo_cuello_;
public:
	//Camisa(tipoCalidad calidad, double precio_unitario, int stock, TipoManga tipo_manga, TipoCuello tipo_cuello) : Prenda(calidad, precio_unitario, stock), tipo_manga_(tipo_manga), tipo_cuello_(tipo_cuello) {}
	Camisa(int calidad, int stock, int manga, int cuello, double precio);
	~Camisa() {};
	double getPrecio() override { return precio; }
	int GetManga();
	int GetCuello();
	string getDescripcion() override;
	int getCalidad () override;
	int getStock() override { return stock; }
	void mostrarPrecio() { cout << precio; }
};
