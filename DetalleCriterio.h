#ifndef DETALLECRITERIO_H
#define DETALLECRITERIO_H

#include <iostream>
#include <stdlib.h>
#include "DetalleCriterio.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

class DetalleCriterio
{
private:
    float nota;
    float valorPorcentual;

public:
    Acta getActa();
    int getNota();
    void setNota(float nota);
    int getValorPorcentual();
    void setValorPorcentual(float valorPorcentual);
    void mostrarCriterioActa();
    void mostrarDetalleCriterio();
};
#endif