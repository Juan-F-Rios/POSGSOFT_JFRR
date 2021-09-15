#include <iostream>
#include "DetalleCriterio.h"
#include "Criterio.h"


DetalleCriterio::DetalleCriterio(Criterio criterio, int nota, int valorPorcentual)
{
    this->criterio = criterio;
    this->nota = nota;
    this->valorPorcentual = valorPorcentual;
}

void DetalleCriterio::mostrarDetalleCriterio()
{
    cout << "La nota es: " << this->nota;
    cout << "El valor porcentual es: " << this->valorPorcentual;
}

void DetalleCriterio::mostrarCriterioActa()
{
    cout << "criterio " << criterio.getId() << "\t" << nota << "\t" << valorPorcentual << "\n";
}

Criterio DetalleCriterio::getCriterio()
{
    return this->criterio;
}

int DetalleCriterio::getNota()
{
    return nota;
}

void DetalleCriterio::setNota(float nota)
{
    this->nota = nota;
}

float DetalleCriterio::getValorPorcentual()
{
    return valorPorcentual;
}

void DetalleCriterio::setValorPorcentual(float valorPorcentual)
{
    this->valorPorcentual = valorPorcentual;
}


