#include <iostream>
#include "Criterio.h"


Criterio::Criterio()
{}

Criterio::Criterio(int id, string texto, float porcentaje)
{
    this->id = id;
    this->texto = texto;
    this->porcentaje = porcentaje;   
}

int Criterio::getId()
{
    return id;
}

void Criterio::setId(int id)
{
    this->id = id;
}

string Criterio::getTexto()
{
    return texto;
}

void Criterio::setTexto(string texto)
{
    this->texto = texto;
}

int Criterio::getPorcentaje()
{
    return porcentaje;
}

void Criterio::setPorcentaje(int porcentaje)
{
    this->porcentaje = porcentaje;
}

void Criterio::mostrarCriterio()
{
    cout << "id " << this->id << "\n";
    cout << "texto " << this->texto << "\n";
    cout << "porcentaje " << this->porcentaje << "\n\n";
}