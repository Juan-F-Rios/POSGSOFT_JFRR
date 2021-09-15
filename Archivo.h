#ifndef ARCHIVO_H
#define ARCHIVO_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include <map>
#include <vector>
#include <iterator>
#include <fstream>
#include "Acta.h"
#include "Criterio.h"

using std::cin;
using std::cout;
using std::string;
using std::getline;
using std::iterator;
using std::vector;
using std::map;

class Archivo
{
private:
    string nombre;
    int numActa;
    int numCriterio;
    int cantCriterio;
    float porcentajeInicial();
    map<int,Acta> listaActas;
    map<int,Criterio> listaCriterios;

public:
    Archivo();
    void crearActa();
    void crearCriterios();
    void modificarCriterios();
    void mostrarActas();
    bool existeCriterioId(int id);
    bool existeActaId(int numActa);
    void evaluarCriterios();
    void mostrarActaElegida(int numActaElegida);
    void agregarNota(float &notaFinal, float &pesoPorcentual, Acta &acta, int numActaEvaluar);
    void mostrarHistoricos();
    void exportarActa();
    void mostrarCriterios();
};
#endif