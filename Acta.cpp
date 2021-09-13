#include <iostream>
#include "Acta.h"

Acta::Acta()
{}

Acta::Acta(string autor,string nombreTrabajo, string tipoTrabajo, string director, string jurado1, string jurado2, string fecha, string numeroActa)
{
	this->numeroActa = numeroActa;
	this->fecha = fecha;
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

string Acta::getNombreTrabajo()
{
	return nombreTrabajo;
}

void Acta::setNombreTrabajo(string nombreTrabajo)
{
	this->nombreTrabajo = nombreTrabajo;
}

string Acta::getTipoTrabajo()
{
	return tipoTrabajo;
}

void Acta::setTipoTrabajo(string tipoTrabajo)
{
	this->tipoTrabajo = tipoTrabajo;
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

int Acta::getNumActa()
{
	return numeroActa;
}

void Acta::setNumActa(int numeroActa)
{
	this->numeroActa = numeroActa;
}

string Acta::getFecha()
{
	return fecha;
}

void Acta::setFecha(string fecha)
{
	this->fecha = fecha;
}

void Acta::mostrarActa()
{
	cout << "Acta numero " << this->numeroActa << "\n";
	cout << "Fecha " << this->fecha << "\n";
	cout << "Autor " << this->autor << "\n";
	cout << "Nombre del trabajo " << this->nombreTrabajo << "\n";
	cout << "Tipo de trabajo " << this->tipoTrabajo << "\n";
	cout << "Director " << this->director << "\n";
	cout << "Jurado1 " << this->jurado1 << " Jurado 2" << this->jurado2 << "\n";

}