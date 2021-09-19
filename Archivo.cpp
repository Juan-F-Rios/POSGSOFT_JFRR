#include <iostream>
#include "Archivo.h"
using namespace std;


Archivo::Archivo()
{ //constructor
    Criterio criterioTemp;
    int numCriterio;
    double porcentajeInicial = 12.5;
    this->nombre = "Archivo posgrados en ingeniería de software";
	this->numActa = 1;
    this->cantCriterio = 8;
    for(numCriterio = 1; numCriterio <= cantCriterio; numCriterio++)
    {
        criterioTemp.setId(numCriterio);
        criterioTemp.setTexto("texto");
        criterioTemp.setPorcentaje(porcentajeInicial);

        listaCriterios[numCriterio] = criterioTemp;
    }
}

bool Archivo::existeCriterioId(int id)
{
    if(this->listaCriterios.find(id) != this->listaCriterios.end() )
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Archivo::existeActaId(int numActa)
{
    if(this->listaActas.find(numActa) != this->listaActas.end() )
    {
        return true;
    }
    else
    {
        return false;
    }
}


void Archivo::crearActa()
{
    cin.clear();
    cin.sync();
    int tipoTrabajoUsuario = -1;
    string autor;
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
    acta.setNumActa(this->numActa);
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
    }while(tipoTrabajoUsuario != 1 && tipoTrabajoUsuario != 2);
    
    
    acta.setAutor(autor);
    acta.setNombreTrabajo(nombreTrabajo);
    acta.setDirector(director);
    acta.setJurado1(jurado1);
    acta.setJurado2(jurado2);

    listaActas[this->numActa++] = acta;

}

void Archivo::mostrarActaElegida(int numActaElegida)
{
    for (map<int, Acta>::iterator pActa = listaActas.begin();
		 pActa != listaActas.end(); pActa++)
	{
		Acta valor = pActa->second;
		if(numActaElegida = pActa->first )
        {
		    valor.mostrarActa();
        }
    }
}

void Archivo::mostrarActas()
{
    for (map<int, Acta>::iterator pActa = listaActas.begin();
		 pActa != listaActas.end(); pActa++)
	{
		Acta valor = pActa->second;
		valor.mostrarActa();
	}
}

void Archivo::mostrarCriterios()
{
    for (map<int, Criterio>::iterator pCriterio = listaCriterios.begin();
		 pCriterio != listaCriterios.end(); pCriterio++)
	{
		Criterio valor = pCriterio->second;
		valor.mostrarCriterio();
	}
}

void Archivo::crearCriterios()
{
    int id;
    //int cantCriterio = 8;
    string texto;
    int porcentaje;

    for( id = 1; id <= cantCriterio; id++)
    {
        cout << "Ingrese la descripción del criterio  " << id << ": ";
        getline(cin, texto);
        cout << "Ingrese el porcentaje del criterio " << porcentaje << ". ";
        cin >> porcentaje;

        Criterio criterioTemp;
        
        criterioTemp.setId(id);
        criterioTemp.setTexto(texto);
        criterioTemp.setPorcentaje(porcentaje);

        listaCriterios[id] = criterioTemp;

    }
}

void Archivo::modificarCriterios()
{
    int numCriterioMod;
    string texto;
    int porcentaje;
    mostrarCriterios();
    do
    {
        cout << "Ingrese el criterio a modificar: ";
        cin >> numCriterioMod;
    }while(!existeCriterioId(numCriterioMod));

    Criterio criterioTemp1 = this->listaCriterios[numCriterioMod];
    
    cin.clear();
    cin.sync();
    cout << criterioTemp1.getId();
    cout << "Ingrese la nueva descripcion: ";
    getline(cin,texto);
    cout << "Ingrese el nuevo peso porcentual: ";
    cin >> porcentaje;

    criterioTemp1.setTexto(texto);
    criterioTemp1.setPorcentaje(porcentaje);

    this->listaCriterios[numCriterioMod] = criterioTemp1;

}

void Archivo::agregarNota(double &notaFinal, double &pesoPorcentual, Acta &Acta, int numActaEvaluar)
{
    Criterio criterioTemp;
    int numCriterio, notaMin = 0, notaMax = 5;
    //cantCriterio = 8
    double valorPorcentual, nota, notaJurado1 = -1.0, notaJurado2 = -1;

    for(numCriterio = 1; numCriterio <= cantCriterio; numCriterio++)
    {//ciclo for para evaluar cada criterio
        criterioTemp = this->listaCriterios[numCriterio];
        Criterio criterioTemp = this->listaCriterios[numCriterio];
        cout << "Criterio: " << numCriterio << "\n";
        criterioTemp.mostrarCriterio();
        //do while para recibir notas mayores o iguales a 0 y menores o iguales a 5
        do
        {
            cout << "Ingrese la nota del criterio " << numCriterio << " del jurado 1: ";
            cin >> notaJurado1;

        } while (notaJurado1 < notaMin || notaJurado1 > notaMax );

        do
        {
            cout << "Ingrese la nota del criterio " << numCriterio << " del jurado 2: ";
            cin >> notaJurado2;

        } while (notaJurado2 < notaMin || notaJurado2 > notaMax);
        


        nota = (notaJurado1 + notaJurado2)/2;
        valorPorcentual = nota * (criterioTemp.getPorcentaje()/100);

        
        DetalleCriterio notas(criterioTemp, nota, valorPorcentual);


        notaFinal += valorPorcentual;
        pesoPorcentual += valorPorcentual;

        listaActas[numActaEvaluar].agregarEvaluacion(notas);   

    }
}

void Archivo::evaluarCriterios()
{
    
    double notaFinal = 0.0, pesoPorcentual = 0.0;
    int numActaEvaluar;
    //cantCriterio = 8;
    double aprobar = 3.5;
    Acta acta;
    string observaciones;
    
    do
    {
        cout << "Ingrese el numero del acta a evaluar: ";
        cin >> numActaEvaluar;

    }while(!existeActaId(numActaEvaluar));

    agregarNota(notaFinal, pesoPorcentual, acta, numActaEvaluar);
  
    
    listaActas[numActaEvaluar].setNotaFinal(notaFinal);
    listaActas[numActaEvaluar].setPesoPorcentual(pesoPorcentual);
    if (notaFinal >= aprobar)
    {
        listaActas[numActaEvaluar].setAprobado("Aprobado ");
    }
    else
    {
        listaActas[numActaEvaluar].setAprobado("No aprobado ");
    }
    cin.clear();
    cin.sync();
    cout << "Ingrese las observaciones finales: ";
    getline(cin,observaciones);
    listaActas[numActaEvaluar].setObservaciones(observaciones);
}

void Archivo::mostrarHistoricos()
{
    mostrarActas();
}

void Archivo::exportarActa()
{
    ofstream myfile;
    int numeroActaExpo;
    //int cantCriterio = 8;

    cout << "Ingrese el numero de acta a exportar: ";
    cin >> numeroActaExpo;
    myfile.open ("Acta.txt");
    myfile << "Acta numero " << listaActas[numeroActaExpo].getNumActa() << "\n";
	myfile << "Fecha " << listaActas[numeroActaExpo].getFecha() << "\n";
	myfile << "Autor " << this->listaActas[numeroActaExpo].getAutor() << "\n";
	myfile << "Nombre del trabajo " << listaActas[numeroActaExpo].getNombreTrabajo() << "\n";
	myfile << "Tipo de trabajo " << listaActas[numeroActaExpo].getTipoTrabajo() << "\n";
	myfile << "Director " << listaActas[numeroActaExpo].getDirector() << "\n";
	myfile << "Jurado1 " << listaActas[numeroActaExpo].getJurado1() << " Jurado 2" << listaActas[numeroActaExpo].getJurado2() << "\n\n";
	myfile << "Nota final " << listaActas[numeroActaExpo].getNotaFinal() << "\n";
    for(numCriterio = 1; numCriterio <= cantCriterio; numCriterio++ )
    {
    myfile << "Criterios \n" << "Id: " << listaCriterios[numCriterio].getId() << " Descripcion: " << listaCriterios[numCriterio].getTexto() << " Porcentaje: " << listaCriterios[numCriterio].getPorcentaje();
    }
    myfile << "El trabajo fue: " << listaActas[numeroActaExpo].getAprobado();
    myfile << "El jurado hace las siguientes observaciones: " << listaActas[numeroActaExpo].getObservaciones();
    myfile.close();


}
