#include "bald.h"
#include "character.h"
#include "Personaje.h"

#include "character.h"
#include <iostream>
#include <limits>
using namespace std;

character::character() {}

character::~character() {}

void character::setNombre() {
    cout << "\nIngrese nombre: ";
    cin >> ws; // Ignorar espacios en blanco iniciales  ------
    getline(cin, _nombre); 

    if (_nombre.empty()) {
        cout << "\nNombre inválido" << endl;
        setNombre();
    }
    else {
        cout << "\nNombre válido, se agregó correctamente" << endl;
    }
}

void character::setRaza() {
    int option;
    cout << "\nSelección de raza: " << endl;
    cout << "1. Orco" << endl;
    cout << "2. Humano" << endl;
    cout << "3. Elfo" << endl;
    cout << "4. Enano" << endl;
    cout << "Selecciona una opción: ";

    while (!(cin >> option) || option < 1 || option > 4) {
        cout << "Opción no válida. Inténtalo de nuevo." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cout << "Selecciona una opción: ";
    }

    switch (option) {
    case 1: _raza = "Orco"; break;
    case 2: _raza = "Humano"; break;
    case 3: _raza = "Elfo"; break;
    case 4: _raza = "Enano"; break;
    }

    cout << "Has seleccionado ser " << _raza << endl;
}

void character::setGenero() {
    int gen;
    cout << "\nSelecciona el género:" << endl;
    cout << "1. Mujer" << endl;
    cout << "2. Hombre" << endl;
    cout << "3. No binario" << endl;
    cout << "Opción: ";

    while (!(cin >> gen) || gen < 1 || gen > 3) {
        cout << "\nOpción no válida. Inténtalo de nuevo." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Opción: ";
    }

    switch (gen) {
    case 1: _genero = "Mujer"; break;
    case 2: _genero = "Hombre"; break;
    case 3: _genero = "No binario"; break;
    }

    cout << "Tu género es " << _genero << endl;
}

void character::setOrientacion() {
    cout << "\nSelecciona la orientación (bueno, malo, neutro): ";
    cin >> ws; 
    getline(cin, _orientacion); 

    if (_orientacion == "bueno" || _orientacion == "malo" || _orientacion == "neutro") {
        cout << "La orientación del personaje se ha establecido como: " << _orientacion << endl;
    }
    else {
        cout << "Orientación no válida. Debe ser 'bueno', 'malo' o 'neutro'." << endl;
        setOrientacion();
    }
}

void character::crearPersonaje() {
    Personaje persona;
    cout << "---CREACIÓN DE PERSONAJE---" << std::endl;
    setNombre();
    setRaza();
    setGenero();
    setOrientacion();

    persona.setClase(); 
    persona.asignarArmaInicial();
    persona.Equipamiento();
    persona.item();

    cout << "\nResumen del personaje creado:" << endl;
    cout << "Nombre: " << _nombre << endl;
    cout << "Raza: " << _raza << std::endl;
    cout << "Género: " << _genero <<endl;
    cout << "Orientación: " << _orientacion << endl;
    cout << "Clase: " << persona.getClase() << endl;
    cout << "Arma Inicial: " << persona.getArmaInicial() <<endl;
    persona.mostrarEquipamiento();

}



