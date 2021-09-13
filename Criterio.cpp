#include <iostream>
#include "Criterio.h"

Criterio::Criterio()
{
    int this->numCriterio = 1;
}

void Criterio::crearCriterio()
{
    string texto;
    int porcentaje;
    cout << "Ingrese la descripcion del criterio: ";
    getline(cin, texto);
    cout << "Ingrese el valor porcentual del criterio: ";
    cin >> porcentaje;

    DetalleCriterio detalleCriterio;
    detalleCriterio.setId(this->numCriterio ++);
    detalleCriterio.setTexto(texto);
    detalleCriterio.setPorcentaje(porcentaje);

    listaCriterios[numCriterio] = detalleCriterio;
}

float Criterio::evaluarCriterio()
{
    float nota;
    float valorPorcentual;
    cout << "Ingrese la nota del criterio: ";
    cin >> nota;
    valorPorcentual = (this->porcentaje/100)*nota;
    return valorPorcentual;
}

void Criterio::mostrarCriterio()
{
    for (map<int, DetalleCriterio>::iterator pCriterio = listaCriterios.begin();
		 pCriterio != listaCriterios.end(); pCriterio++)
	    {
		    DetalleCriterio valor = pCriterio->second;
		    valor.mostrarDetalleCriterio();
        }
}

void Criterio::modificarCriterio()
{
    //hallar la manera de elegir el criterio(importando apuntador)
    string texto;
    int porcentaje;
    cout << "Ingrese la nueva descripcion del criterio: ";
    getline(cin, texto);
    cout << "Ingrese el nuevo valor porcentual del criterio: ";
    cin >> porcentaje;

    DetalleCriterio detalleCriterio;
    detalleCriterio.setTexto(texto);
    detalleCriterio.setPorcentaje(porcentaje);

}

void Criterio::modificarTextoCriterio()
{
    string texto;
    cout << "Ingrese la nueva descripcion del criterio: ";
    getline(cin, texto);
}

void Criterio::modificarPorcentajeCriterio()
{
    int porcentaje;
    cout << "Ingrese el nuevo valor porcentual: "
    cin >> porcentaje;
}