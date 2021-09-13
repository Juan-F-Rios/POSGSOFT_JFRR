#include <iostream>
#include "DetalleCriterio.h"


DetalleCriterio::DetalleCriterio()
{}

DetalleCriterio::DetalleCriterio(int id, string texto, int porcentaje)
{
    this->id = id;
    this->texto = texto;
    this->porcentaje = porcentaje;   
}

int DetalleCriterio::getId()
{
    return id;
}

void DetalleCriterio::setId(int id)
{
    this->id = id;
}

string DetalleCriterio::getTexto()
{
    return texto;
}

void DetalleCriterio::setTexto(string texto)
{
    this->texto = texto;
}

int DetalleCriterio::getPorcentaje()
{
    return porcentaje;
}

void DetalleCriterio::setPorcentaje(int porcentaje)
{
    this->porcentaje = porcentaje;
}

void DetalleCriterio::mostrarDetalleCriterio()
{
    cout << "id " << this->id;
    cout << "texto " << this->texto;
    cout << "porcentaje " << this->porcentaje;
}