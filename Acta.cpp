#include <iostream>
#include "Acta.h"

Acta::Acta()
{}

Acta::Acta(string autor,string nombreTrabajo, string director, string jurado1, string jurado2)
{
    this-> autor = autor;
    this-> nombreTrabajo = nombreTrabajo;
    this-> tipoTrabajo = tipoTrabajo;
    this-> director = director;
    this-> jurado1 = jurado1;
    this-> jurado2 = jurado2;

}

string Acta::getAutor()
{
	return autor;
}

void Acta::setAutor(string autor)
{
	this->autor = autor;
}

string Acta::getnombreTrabajo()
{
	return nombreTrabajo;
}

void Acta::setNombreTrabajo(string nombreTrabajo)
{
	this->nombreTrabajo = nombreTrabajo;
}

string Acta::getJurado1()
{
	return jurado1;
}

void Acta::setJurado1(string jurado1)
{
	this->jurado1 = jurado1;
}

string Acta::getJurado2()
{
	return jurado2;
}

void Acta::setJurado2(string jurado2)
{
	this->jurado2 = jurado2;
}


