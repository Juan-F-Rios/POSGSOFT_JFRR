#ifndef ACTA_H
#define ACTA_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include "DetalleCriterio.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

class Acta
{
private:
 
    int numActa;
    double notaFinal;
    double pesoPorcentual;
    string fecha;
    string autor;
    string nombreTrabajo;
    string tipoTrabajo;
    string director;
    string jurado1;
    string jurado2;
    vector<DetalleCriterio> evaluaciones;
    string aprobado;
    string observaciones;

public:
    Acta();
    Acta(string aprobado, string observaciones, string autor,string nombreTrabajo, string tipoTrabajo, string director, string jurado1, string jurado2, string fecha, int numActa);
    string getAutor();
    void setAutor(string autor);
    string getNombreTrabajo();
    void setNombreTrabajo(string nombreTrabajo);
    string getTipoTrabajo();
    void setTipoTrabajo(string tipoTrabajo);
    string getDirector();
    void setDirector(string director);
    string getJurado1();
    void setJurado1(string jurado1);
    string getJurado2();
    void setJurado2(string jurado2);
    int getNumActa();
    void setNumActa(int numActa);
    string getFecha();
    void setFecha(string fecha);
    void mostrarActa();
    void agregarEvaluacion(DetalleCriterio evaluacion);
    void setNotaFinal(double notaFinal);
    void setPesoPorcentual(double pesoPorcentual);
    void mostrarDetallesActa();
    double getNotaFinal();
    string getAprobado();
    string getObservaciones();
    void setAprobado(string aprobado);
    void setObservaciones(string observaciones);
    
};

#endif