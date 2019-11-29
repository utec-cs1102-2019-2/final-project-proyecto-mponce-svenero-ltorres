
#include "Menu.h"
#include <ctime>

Menu ::Menu() {
    E num;
    L l=true;
    cout<<"\n\t.:Iniciar Sesion:.\n";
    cout<<"\n1. Comenzar partida nueva.\n";
    cout<<"2. Cargar partida existente.\n";
    cout<<"3. Salir del juego.\n";
    cout<<"Seleccione una opcion:"<<endl;
    cin>>num;
while(l) {
    switch (num) {
        case 1:
            MenuPricipal();
            break;
        case 2:
            CargarPartida();
            break;
        case 3:
            l = false;
            cout << "Gracias por jugar, Adios.";
            break;
        default:
            cout << "La opcion seleccionada no existe.";
            break;
    }
}
}
void Menu ::CargarPartida() {

}

void Menu ::MenuPricipal() {
    E num;
    L l = true;
    cout << "\n\t.:Menu Principal:.\n";
    cout << "\n1. Comprar Vehiculo" << endl;
    cout << "2. Iniciar Carrera." << endl;
    cout << "3. Guardar Partida." << endl;
    cout << "4. Salir de la partida." << endl;
    cout << "Seleccione la accion a realizar: " << endl;
    cin >> num;
    while (l) {
        switch (num) {
            case 1:
                ComprarVehiculo();
                break;
            case 2:
                PreCarrera();
                break;
            case 3:
                GuardarPartida();
                break;
            case 4:
                Menu();
                break;
            default:
                cout << "La opcion seleccionada no existe.";
                break;
        }
    }
}

void Menu ::ComprarVehiculo() {
    E num;
    L l = true;
    cout << "Dinero Actual: " << Dinero;
    cout << "\n\t::::::::::Vehiculos Disponibles::::::::::\n";
    cout << "Lista\t Precio(S/.)" << endl;
    cout << "1) Automovil\tS/.1000" << endl;
    cout << "2) Troncomovil\tS/.800" << endl;
    cout << "3) Motocicleta\tS/.600" << endl;
    cout << "4) Bicicleta\tS/.400" << endl;
    cout << "Ingrese el numero del vehiculo a comprar(Marque 0 para salir): ";
    cin >> num;
    while (l) {
        switch (num) {
            case 0:
                MenuPricipal();
                break;

            case 1:
                if (Dinero >= 1000) {
                    Dinero -= 1000;
                    cout << "La compra fue un exito.\n";
                    cout << "Su dinero Actuar es: " << Dinero;
                    coches.push_back("Automovil");
                } else {
                    cout << "Lo sentimos, pero no cuenta con saldo suficiente para realizar la compra.";
                    break;
                }
            case 2:
                if (Dinero >= 800) {
                    Dinero -= 800;
                    cout << "La compra fue un exito.\n";
                    cout << "Su dinero Actuar es: " << Dinero;
                    coches.push_back("Troncomovil");
                } else {
                    cout << "Lo sentimos, pero no cuenta con saldo suficiente para realizar la compra.";
                    break;
                }
            case 3:
                if (Dinero >= 600) {
                    Dinero -= 600;
                    cout << "La compra fue un exito.\n";
                    cout << "Su dinero Actuar es: " << Dinero;
                    coches.push_back("Motocicleta");
                } else {
                    cout << "Lo sentimos, pero no cuenta con saldo suficiente para realizar la compra.";
                    break;
                }
            case 4:
                if (Dinero >= 400) {
                    Dinero -= 400;
                    cout << "La compra fue un exito.\n";
                    cout << "Su dinero Actuar es: " << Dinero;
                    coches.push_back("Bicicleta");
                } else {
                    cout << "Lo sentimos, pero no cuenta con saldo suficiente para realizar la compra.";
                    break;
                }
            default:
                cout << "La opcion seleccionada no existe.";
                break;
        }
    }
}
void Menu ::PreCarrera() {
    E num;
    L l = true;
    cout << "\n\t.:CAMPOS:.\n";
    cout << "1. Pista Helada." << endl;
    cout << "2. Pista Rocosa." << endl;
    cout << "3. Pista Suprema." << endl;
    cout << "Digite el numero de la pista a correr: ";
    cin >> num;
    while (l) {
        switch (num) {
            case 1:
                SeleccionarVehiculo();
                break;
            case 2:
                SeleccionarVehiculo();
                break;
            case 3:
                SeleccionarVehiculo();
                break;
            default:
                cout << "La opcion marcada no existe." << endl;
        }
    }
}
void Menu :: SeleccionarVehiculo() {
    E num;
    L l = true;
    cout << "\n\t.:MIS VEHICULOS:.\n";
    MisVehiculos();
    cout << "Digite el numero del vehiculo a utilizar: ";
    cin >> num;
    while (l) {
        switch (num) {
            case 1:
                Carrera();
            case 2:
                Carrera();
            case 3:
                Carrera();
            default:
                cout << "La opcion seleccionada no existe." << endl;
        }

    }
}
void Menu :: MisVehiculos() {
    for(size_t i=0; i< coches.size(); i++){
        cout<<i+1<<") "<<coches[i]<<endl;
    }
}

void Menu :: Carrera() {
    for(size_t i=1; i<= 7; i++) {
        cout<<"Vuelta: "<<i<<" de 7."<<endl;
        MostrarDatos();
        Pits();
    }
    Dinero +=50;
    Exp +=40;
}
void Menu ::MostrarDatos() {
    Estado();
    Participantes();

}

void Menu ::Estado() {
    E r = 1 + rand()%3;
    if(r ==1 ){
        cout<<"\tTu velocidad no se vio afectada durante la vuelta.";
    }
    else{
        cout<<"\tTu velocidad se vio afectada durante la vuelta.";
    }
}

void Menu ::Participantes() {
    vector<S> Competidores;
    Competidores.push_back("Player");
    S BOTS[15] = {"Manuel", "Jose", "Pedro", "Marco", "Jesus", "Pepe", "Max", "Sergio", "Luis", "Leo", "Julio", "Tomas",
                  "Alex", "Adrian", "Juan"};
    for (size_t i = 0; i < 9; i++) {
        E r = rand() % 16;
        Competidores.push_back(BOTS[r]);
    }
        E tiempo = 0;
        E tiempo_total = 0;
        cout << "\nNo.\tNombre\tTiempo vuelta\tTiempo Acumulado9\n";
        for (size_t i = 0; i < Competidores.size(); i++) {
            E r = rand() % Competidores.size();
            tiempo = rand() % 200;
            cout << i + 1 << "\t" << Competidores[r] << "\t" << tiempo << " seg.\t" << tiempo_total + tiempo << endl;
        }
    }


void Menu::Pits() {
    S respuesta;

    while(true){
        cout<<"\nQuiere ir a los pits?(Digite un si o no): "<<endl;
        cin>>respuesta;
        if(respuesta == "si"){
            MenuPits();
        }
        else{
            break;
        }
    }
}

void Menu ::MenuPits() {
    E num;
    cout<<"\nDinero Actual: "<<Dinero;
    cout<<"\nParte\tPrecio(S/.)"<<endl;
    cout<<"1) Chasis\tS/.100."<<endl;
    cout<<"2) Carroceria\tS/.200."<<endl;
    cout<<"3) Ruedas\tS/.400."<<endl;
    cout<<"4) Zapatillas\tS/.270."<<endl;

        cout<<"\nDigite el numero de la parte a mejorar(Digite 0 para continuar con la carrera): ";
        cin>>num;

        switch(num){
            case 0: break;
            case 1:
                if (Dinero >= 100) {
                    Dinero -= 100;
                    cout << "\nLa compra fue un exito.\n";
                    cout << "\nSu dinero Actuar es: \n" << Dinero;break;
                } else {
                    cout << "\nLo sentimos, pero no cuenta con saldo suficiente para realizar la compra.";
                    break;
                }
            case 2:
                if (Dinero >= 200) {
                    Dinero -= 200;
                    cout << "La compra fue un exito.\n";
                    cout << "Su dinero Actuar es: " << Dinero;break;
                } else {
                    cout << "Lo sentimos, pero no cuenta con saldo suficiente para realizar la compra.";
                    break;
                }
            case 3:
                if (Dinero >= 400) {
                    Dinero -= 400;
                    cout << "La compra fue un exito.\n";
                    cout << "Su dinero Actuar es: " << Dinero;break;
                } else {
                    cout << "Lo sentimos, pero no cuenta con saldo suficiente para realizar la compra.";
                    break;
                }
            case 4:
                if (Dinero >= 270) {
                    Dinero -= 270;
                    cout << "La compra fue un exito.\n";
                    cout << "Su dinero Actuar es: " << Dinero; break;
                } else {
                    cout << "Lo sentimos, pero no cuenta con saldo suficiente para realizar la compra.";
                    break;
                }
            default: cout<<"La opcion selecionada no existe. ";break;
        }
    }


void Menu :: GuardarPartida() {

}