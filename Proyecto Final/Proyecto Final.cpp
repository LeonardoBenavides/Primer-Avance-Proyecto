#include <iostream>
#include <string>
using namespace std;

int main()
{
    int opcion;
    int condicion;
    int i = 0;
    int salir;

    do
    {
        cout << "**MENU DE OPCIONES**" << endl;
        cout << "1. Agendar cita" << endl;
        cout << "2. Modificar cita" << endl;
        cout << "3. Eliminar cita" << endl;
        cout << "4. Lista de citas vigentes" << endl;
        cout << "5. Limpiar pantalla" << endl;
        cout << "6. Salir" << endl;
        cout << "\nIngrese la opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            do
            {
                i = i + 1;    
                    cout << "\n**AGENDAR CITA**" << endl;
                    int numcita;
                    cout << "Su numero de cita es: " << i << endl;               
                    cin.ignore();

                    string nombre;
                    cout << "Ingrese el nombre del paciente:" << endl;
                    getline(cin, nombre);


                    int hora;
                    cout << "Ingrese la hora del tratamiento (en formato 24hrs):" << endl;
                    cin >> hora;
                    cin.ignore();

                    string nomtrat;
                    cout << "Ingrese el nombre del tratamiento:" << endl;
                    getline(cin, nomtrat);

                    string desc;
                    cout << "Ingrese la descripcion:" << endl;
                    getline(cin, desc);

                    int precioUT=450;
                    cout << "El precio unitario del tratamiento es:" << endl;
                    cout << precioUT << endl;

                    int cantrat;
                    cout << "Ingrese la cantidad del tratamiento:" << endl;
                    cin >> cantrat;

                    int preciou=200;
                    cout << "El precio unitario es:" << endl;
                    cout << preciou << endl;

                    int total;
                    cout << "Su total es:" << endl;
                    total = precioUT + cantrat + preciou;
                    cout << total << endl;

                    cout << "\n*Su cita ha sido registrada correctamente*\n" << endl;
                    cout << "Si desea agendar otra cita, ingrese 1, de lo contrario ingrese 2." << endl;
                    cin >> condicion;         
            } 
            while (condicion == 1 && i<=3);
            break;

        case 2:
            cout << "\n**MODIFICAR CITA**" << endl;
            break;

        case 3:
            cout << "\n**ELIMINAR CITA**" << endl;
            break;

        case 4:
            cout << "\n**LISTA DE CITAS VIGENTES**" << endl;
            break;

        case 5:
            cout << "\n**LIMPIAR PANTALLA**" << endl;
            break;

        case 6:
            cout << "\nConfirme para salir del programa" << endl;
            cout << "1. Si" << endl;
            cout << "2. No" << endl;
            cin >> salir;

            if(salir==1)
            {
                return 0;
            }
            break;

        default:
            cout << "Opcion incorrecta, por favor eliga una opcion que si este disponible." << endl;
        }
        cout << "Regresar al menu: 1" << endl;
        cout << "Salir: 2" << endl;
        cin >> condicion;
    } while (condicion == 1);

    return 0;
}