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
    float nota;
    float valorPorcentual;

public:
    DetalleCriterio(Criterio criterio, int nota, int valorPorcentual);
    Criterio getCriterio();
    int getNota();
    void setNota(float nota);
    float getValorPorcentual();
    void setValorPorcentual(float valorPorcentual);
    void mostrarCriterioActa();
    void mostrarDetalleCriterio();
};
#endif