#include "Fecha.h"

Fecha::Fecha()
{
    
    time_t rawtime;
    struct tm timeinfo;

    time(&rawtime);
    timeinfo = *(localtime(&rawtime));

    dia = timeinfo.tm_mday;
    mes = timeinfo.tm_mon + 1;
    anio = timeinfo.tm_year + 1900;
    hora = timeinfo.tm_hour ;
    minuto = timeinfo.tm_min;

}

Fecha::Fecha(int dia, int mes, int anio)
{
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
}

string Fecha::toString()
{
    std::ostringstream streamFecha;
    streamFecha << dia << "/" << mes << "/" << anio << " | " << hora << ":" << minuto;
    return streamFecha.str();
}

