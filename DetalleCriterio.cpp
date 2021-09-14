#include <iostream>
#include "Criterio.h"


DetalleCriterio::DetalleCriterio()
{
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
    cout << acta.getActa() << "\t" << nota << "\t" << valorPorcentual << "\n";
}

Acta DetalleCriterio::getActa()
{
    return this->acta;
}

float DetalleCriterio::getNota()
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


