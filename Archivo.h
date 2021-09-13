#ifndef ARCHIVO_H
#define ARCHIVO_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include <map>
#include <vector>
#include <iterator>
#include "Acta.h"
#include "Criterio.h"

using std::cin;
using std::cout;
using std::string;
using std::getline;
using std::iterator;
using std::vector;

class Archivo
{
private:
    string nombre; 
    int numActa;
    vector<Acta>actas;

public:
    Archivo();
    void crearActa();
    void mostrarActas();
};
#endif