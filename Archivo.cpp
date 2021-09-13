#include <iostream>
#include "Archivo.h"

Archivo::Archivo()
{
    this->nombre = "Archivo posgrados en ingeniería de software";
	this->numActa = 1;
    crearActa();
}

void Archivo::crearActa()
{
    int tipoTrabajoUsuario = -1;
    string autor;
    string tipoTrabajoUsuario;
    string nombreTrabajo;
    string tipoTrabajo;
    string director;
    string jurado1;
    string jurado2;

    cout << "Ingrese el nombre del estudiante: ";
    getline(cin,autor);
    cout << "Ingrese el nombre del trabajo: ";
    getline(cin,nombreTrabajo);
    cout << "Ingrese el nombre del director: ";
    getline(cin,director);
    cout << "Ingrese el nombre del jurado1: ";
    getline(cin,jurado1);
    cout << "Ingrese el nombre del jurado2: ";
    getline(cin,jurado2);

    Acta acta;
    acta.setNumero(this->numActa++);
    do
    {
        cout << "Ingrese el tipo de trabajo (1. Aplicado 2. Investigacion): ";
        cin >> tipoTrabajoUsuario;
        if(tipoTrabajoUsuario == 1)
        {
            acta.setTipoTrabajo("Aplicado");
        } 
        if(tipoTrabajoUsuario == 2)
        {
            acta.setTipoTrabajo("Investigacion");
        }
    }while(tipoTrabajoUsuario != 1 || tipoTrabajoUsuario != 2);
    
    
    acta.setAutor(autor);
    acta.setNombreTrabajo(autor);
    acta.setDirector(director);
    acta.setJurado1(jurado1);
    acta.setJurado2(jurado2);

    actas.push_back(acta);

}

void Archivo::mostrarActaElegida(int numActaElegida)
{
    for (vector<Acta>::iterator pActa = actas.begin();
		 pActa != actas.end(); pActa++)
	{
        if(numActaElegida == pActa)
        {
		    pActa->mostrarActa();
        }
    }
}

void Archivo::mostrarActas()
{
    for (vector<Acta>::iterator pActa = actas.begin();
		 pActa != actas.end(); pActa++)
	{
		pActa->mostrarActa();
	}
}

void Archivo::crearCriterios()
{
    int this->numeroDeCriterios = 8;
    for(int i = 0; i <= this->numeroDeCriterios; i++)
    {
        crearCriterio();
    }
    
}

void Archivo::evaluarCriterios()
{
    int numAEvaluar;
    cout << "Ingrese el numero del acta a evaluar: ";
    cin >> numAEvaluar;
    mostrarActaElegida(numAEvaluar);
    listaDeCriterios[numAEvaluar] = 
}

void Archivo::modificarCriterios()
{
    int criterioAMod;
    cout << "Ingrese el numero del criterio a modificar: ";
    cin >> criterioAMod;
    for (map<int, DetalleCriterio>::iterator pCriterio = listaCriterios.begin();
		 pCriterio != listaCriterios.end(); pCriterio++)
	    {
		    DetalleCriterio valor = pCriterio->second;
            if(criterioAMod == valor)
            {
                valor.modificarCriterio();
            }
        }
}

void Archivo::mostrarHistoricos()
{
    mostrarActas();
    
}