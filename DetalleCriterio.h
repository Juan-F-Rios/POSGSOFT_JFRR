#ifndef DETALLECRITERIO_H
#define DETALLECRITERIO_H

#include <iostream>
#include <stdlib.h>
#include "Criterio.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

Class DetalleCriterio()
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
    void setOorcentaje(int porcentaje);

};
#endif