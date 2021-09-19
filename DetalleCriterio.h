#ifndef DETALLECRITERIO_H
#define DETALLECRITERIO_H

#include <iostream>
#include <stdlib.h>
#include "DetalleCriterio.h"
#include "Criterio.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

class DetalleCriterio
{
private:
    Criterio criterio;
    double nota;
    double valorPorcentual;

public:
    DetalleCriterio(Criterio criterio, double nota, double valorPorcentual);
    Criterio getCriterio();
    double getNota();
    void setNota(double nota);
    double getValorPorcentual();
    void setValorPorcentual(double valorPorcentual);
    void mostrarCriterioActa();
    void mostrarDetalleCriterio();
};
#endif