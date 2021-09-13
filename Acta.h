#ifndef ACTA_H
#define ACTA_H

#include <iostream>
#include <stdlib.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Acta
{
private:
    int numeroActa;
    string fecha;
    string autor;
    string nombreTrabajo;
    string tipoTrabajo;
    string director;
    string jurado1;
    string jurado2;

public:
    Acta();
    Acta(string autor,string nombreTrabajo, string tipoTrabajo, string director, string jurado1, string jurado2, string fecha, string numeroActa);
    string getAutor();
    void setAutor(string autor);
    string getnombreTrabajo();
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
    void setNumActa(int numeroActa);
    string getFecha();
    void setFecha(string fecha);
    mostrarActa();
    crearActa();

    
};

#endif