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
    double porcentaje;

public:
    Criterio();
    Criterio(int id, string texto, double porcentaje);
    int getId();
    void setId(int id);
    string getTexto();
    void setTexto(string texto);
    double getPorcentaje();
    void setPorcentaje(double porcentaje);
    void mostrarCriterio();
    
};
#endif