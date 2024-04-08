#include "bald.h"
#include "character.h"
#include "Personaje.h"

#include <limits> // Para limpiar el buffer de entrada

bald::bald() {}

bald::~bald() {}

void bald::ImprimirMenu() {
    int opcion = 0;

    cout << "BBBBB   IIIIII EEEEEEE NN   NN VV     VV EEEEEEE NN   NN IIIIII DDDDD    OOO  \n";
    cout << "BB   B    II   EE      NNN  NN VV     VV EE      NNN  NN   II   DD  DD  OO OO \n";
    cout << "BBBBB     II   EEEE    NN N NN VV     VV EEEE    NN N NN   II   DD   DD OO OO \n";
    cout << "BB   B    II   EE      NN  NNN  VV   VV  EE      NN  NNN   II   DD  DD  OO OO \n";
    cout << "BBBBB   IIIIII EEEEEEE NN   NN   VVVV   EEEEEEE  NN   NN IIIIII DDDDD    OOO  \n";

    cout << "\n\tBIENVENIDO A BALDUR\n" << endl;

        do {
            cout << "  Seleccione una opcion:\n\n"
                << "\t 1.Iniciar juego\n"
                << "\t 2.Salir del juego\n"
                << endl;

            cout << "Opcion: ";

            while (!(cin >> opcion)) {
                cout << "Ingrese un número válido: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            switch (opcion) {
            case 1:
                Iniciar();
                break;

            case 2:
                cout << "  _____                         ____                 " << endl;
                cout << " / ____|                       / __ \\                " << endl;
                cout << "| |  __  __ _ _ __ ___   ___  | |  | |_   _____ _ __ " << endl;
                cout << "| | |_ |/ _` | '_ ` _ \\ / _ \\ | |  | \\ \\ / / _ \\ '__|" << endl;
                cout << "| |__| | (_| | | | | | |  __/ | |__| |\\ V /  __/ |   " << endl;
                cout << " \\_____|\\__,_|_| |_| |_|\\___|  \\____/  \\_/ \\___|_|   " << endl;
                exit(EXIT_SUCCESS);
                break;

            default:
                cout << "Ingrese una opcion valida" << endl;
                break;
            }
        } while (opcion != 1 && opcion != 2);
    }



void bald::Iniciar() {
    int opt;
    cout << "\nIngrese una opcion\n"

        << "1.Comenzar partida\n"
        << "2.Cargar partida\n"
        << "3.Salir al Menu Principal\n"
        << endl;

    cout << "Opcion: ";

    while (!(cin >> opt)) {
        cout << "Ingrese un número válido: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    switch (opt) {

    case 1: {
        cout << "\nINICIALIZANDO PARTIDA" << endl;
        character jugador;
        jugador.crearPersonaje();
        MenuJuego();

        break;
    }

    case 2:
        cout << "\nCARGANDO PARTIDA" << endl;

        break;

    case 3:
        cout << "\nSALIENDO AL MENU PRINCIPAL\n" << endl;
        ImprimirMenu();
        break;

    default:
        cout << "Ingrese una opcion valida" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        Iniciar(); 
        break;
    }
}

void bald::MenuJuego() {

    Personaje jugador;
    int opcion = 0;
    bool continuar = true; // Controla la continuidad del bucle del menú

    while (continuar) {

        cout << "\n\nMenú de juego\n" << endl;
        cout << "1. Ver estadísticas" << endl;
        cout << "2. Comprar equipo" << endl;
        cout << "3. Gastar puntos de habilidad" << endl;
        cout << "4. Ir a una aventura" << endl;
        cout << "5. Guardar partida" << endl;
        cout << "6. Cargar partida" << endl; 
        cout << "7. Salir" << endl; 
        cout << "Opcion: ";

        while (!(cin >> opcion)) {
            cout << "Por favor, introduce un número válido." << endl;
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Opcion: ";
        }

        switch (opcion) {
        case 1:
            cout << "Mostrando estadísticas..." << endl;
            break;
        case 2:
            cout << "Comprando equipo..." << endl;
            break;
        case 3:
            cout << "Gastando puntos de habilidad..." << endl;
            break;
        case 4:
            cout << "Yendo a una aventura..." << endl;
            break;
        case 5:
            jugador.guardarPartida("partida_guardada.txt");
            cout << "Partida guardada con éxito." << endl;
            break;
        case 6:
            jugador.cargarPartida("partida_guardada.txt");
            cout << "Partida cargada con éxito." << endl;
            break;
        case 7: 
            cout << "Saliendo al menú principal..." << endl;
            continuar = false;
            ImprimirMenu();
            break;

        default:
            cout << "Opción no válida. Por favor, elige una opción entre 1 y 6." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            Iniciar();
            break;
        }
    }
}

