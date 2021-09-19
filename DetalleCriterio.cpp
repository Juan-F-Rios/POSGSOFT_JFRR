#include <iostream>
#include "DetalleCriterio.h"
#include "Criterio.h"


DetalleCriterio::DetalleCriterio(Criterio criterio, double nota, double valorPorcentual)
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

double DetalleCriterio::getNota()
{
    return nota;
}

void DetalleCriterio::setNota(double nota)
{
    this->nota = nota;
}

double DetalleCriterio::getValorPorcentual()
{
    return valorPorcentual;
}

void DetalleCriterio::setValorPorcentual(double valorPorcentual)
{
    this->valorPorcentual = valorPorcentual;
}


