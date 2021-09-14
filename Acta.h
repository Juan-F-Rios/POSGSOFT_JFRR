#ifndef ACTA_H
#define ACTA_H

#include <iostream>
#include <stdlib.h>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Acta
{
private:
// lista de criterios
    int numActa;
    string fecha;
    string autor;
    string nombreTrabajo;
    string tipoTrabajo;
    string director;
    string jurado1;
    string jurado2;

public:
    Acta();
    Acta(string autor,string nombreTrabajo, string tipoTrabajo, string director, string jurado1, string jurado2, string fecha, string numActa);
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
    void setNumActa(int numActa);
    string getFecha();
    void setFecha(string fecha);
    mostrarActa();
    
};

#endif