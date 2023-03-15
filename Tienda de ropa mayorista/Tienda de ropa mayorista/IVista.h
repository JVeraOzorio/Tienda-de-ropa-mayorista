#pragma once
#include <string>
#include <iostream>
using namespace std;

class IVista
{
	public:
	virtual void mostrarMenu() = 0;
	virtual void mostrarMensaje(string) = 0;
	virtual void mostrarError()=0;
};

