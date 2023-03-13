
#pragma once
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <iostream>
#include <string>
#include <ctime>
using namespace std;
class Fecha
{
private:
	int dia;
	int mes;
	int anio;
public:
	Fecha();
	Fecha(int dia, int mes, int anio);
	int getDia() { return dia; }
	int getMes() { return mes; }
	int getAnio() { return anio; }
	string toString();

};

