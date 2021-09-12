#ifndef VIEW_H
#define VIEW_H

#include <iostream>
#include <stdlib.h>
#include <Archivo.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class View
{
    private:
    Archivo posgradosIngSoft;
    void mostrarMenuAsistente();
    void mostrarMenuJurado();
    void mostrarMenuDirectora();

    public:
    View();
    void mostrarMenuUsuario();

};
#endif