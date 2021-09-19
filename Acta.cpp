#include <iostream>
#include "Acta.h"

Acta::Acta()
{}

Acta::Acta(string aprobado, string observaciones, string autor,string nombreTrabajo, string tipoTrabajo, string director, string jurado1, string jurado2, string fecha, int numActa)
{
	this->fecha = fecha;
    this-> autor = autor;
    this-> nombreTrabajo = nombreTrabajo;
    this-> tipoTrabajo = tipoTrabajo;
    this-> director = director;
    this-> jurado1 = jurado1;
    this-> jurado2 = jurado2;
	this-> numActa = numActa;
	this->aprobado = aprobado;
	this->observaciones = observaciones;

}

void Acta::agregarEvaluacion(DetalleCriterio evaluacion)
{
	evaluaciones.push_back(evaluacion);
}

string Acta::getAprobado()
{
	return this->aprobado;
}
void Acta::setAprobado(string aprobado)
{
	this->aprobado = aprobado;
}

string Acta::getObservaciones()
{
	return observaciones;
}

void Acta::setObservaciones(string observaciones)
{
	this->observaciones = observaciones;
}
double Acta::getNotaFinal()
{
	return this->notaFinal;
}

void Acta::setNotaFinal(double notaFinal)
{
	this->notaFinal = notaFinal;
}

void Acta::setPesoPorcentual(double pesoPorcentual)
{
	this->pesoPorcentual = pesoPorcentual;
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

string Acta::getDirector()
{
	return director;
}

void Acta::setDirector(string director)
{
	this->director = director;
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
	return numActa;
}

void Acta::setNumActa(int numActa)
{
	this->numActa = numActa;
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
	cout << "Acta numero " << this->numActa << "\n";
	cout << "Fecha " << this->fecha << "\n";
	cout << "Autor " << this->autor << "\n";
	cout << "Nombre del trabajo " << this->nombreTrabajo << "\n";
	cout << "Tipo de trabajo " << this->tipoTrabajo << "\n";
	cout << "Director " << this->director << "\n";
	cout << "Jurado1 " << this->jurado1 << " Jurado 2" << this->jurado2 << "\n\n";
	cout << "Nota final " << this->notaFinal << "\n";
	cout << "El trabajo fue: " << this->aprobado << "\n";
	cout << "Observaciones del jurado: " << this->observaciones << "\n";
	mostrarDetallesActa();

}

void Acta::mostrarDetallesActa()
{
	for (vector<DetalleCriterio>::iterator pDetalle = evaluaciones.begin();
		 pDetalle != evaluaciones.end(); pDetalle++)
	{
		pDetalle->mostrarCriterioActa();
	}

}