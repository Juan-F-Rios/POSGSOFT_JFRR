#ifndef CRITERIO_H
#define CRITERIO_H

#include <iostream>
#include <stdlib.h>
#include "DetalleCriterio.h"

using std::cin;
using std::cout;
using std::getline;
using std::endl;
using std::string;
using std::iterator;
using std::map;

class Criterio
{
private:
    int numCriterio;
    int nota;
    map<int, DetalleCriterio> listaCriterios;
public:
    Criterio();
    void crearCriterio();
    void mostrarCriterio();
    float evaluarCriterio();
    void modificarCriterio();
    void modificarTextoCriterio();
    void modificarPorcentajeCriterio();
    


};
#endif