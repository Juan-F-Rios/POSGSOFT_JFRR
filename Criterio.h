#ifndef CRITERIO_H
#define CRITERIO_H

#include <iostream>
#include <stdlib.h>
#include "Criterio.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Criterio
{
private:
    int id;
    string texto;
    int porcentaje;

public:
    int getId();
    void setId(int id);
    string getTexto();
    void setTexto(string texto);
    int getPorcentaje();
    void setPorcentaje(int porcentaje);
    void mostrarCriterio();
    void agregarDetalleCriterio();

};
#endif