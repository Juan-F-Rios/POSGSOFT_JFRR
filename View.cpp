#include "View.h"

View::View()
{}

void View::mostrarMenuCargoUsuario()
{
    int opcion = -1;
    do
    {
        cout << "\nMenu usuarios\n";
        cout << "1. Asistente posgrado \n";
        cout << "2. Jurado \n";
        cout << "3. Directora \n";
        cout << "0. Salir \n";
        std::cout << "Digita el numero: ";
        std::cin >> opcion;

        switch (opcion)
        {
            case 1:
            mostrarMenuAsistente();
            break;

            case 2:
            mostrarMenuJurado();
            break;

            case 3:
            mostrarMenuDirectora();
            break;

        }

    } while (opcion != 0);
    
}
void View::mostrarMenuAsistente()
{
    int opcion = -1;
    do
    {

        cout << "\nMenu actas asistente\n";
        cout << "1. Crear acta \n";
        cout << "2. Ver historicos \n";
        cout << "0. Volver al menu principal \n";
        std::cout << "Digita el numero: ";
        std::cin >> opcion;

        switch (opcion)
        {

        case 1:
            posgradosIngSoft.crearActa();
            break;
        case 2:
            posgradosIngSoft.mostrarHistoricos();
            break;
        }

    } while (opcion != 0);
}

void View::mostrarMenuJurado()
{
    int opcion = -1;
    do
    {

        cout << "\nMenu actas jurado\n";
        cout << "1. Evaluar trabajo de grado \n";
        cout << "2. Exportar acta \n";
        cout << "0. Volver al menu principal\n";
        std::cout << "Digita el numero: ";
        std::cin >> opcion;

        switch (opcion)
        {

        case 1:
            posgradosIngSoft.evaluarCriterios();
            break;
        case 2:
            posgradosIngSoft.exportarActa();
            break;
        }
    } while (opcion != 0);
}

void View::mostrarMenuDirectora()
{
    int opcion = -1;
    do
    {

        cout << "\nMenu actas directora\n";
        cout << "1. Modificar criterios \n";
        cout << "2. Ver historicos \n";
        cout << "0. Volver al menu principal \n";
        std::cout << "Digita el numero: ";
        std::cin >> opcion;

        switch (opcion)
        {

        case 1:
            posgradosIngSoft.modificarCriterios();
            break;
        case 2:
            posgradosIngSoft.mostrarHistoricos();
            break;
        };

    } while (opcion != 0);
}