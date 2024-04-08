#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>


using namespace std;

class character {
private:
    string _nombre;
    string _raza;
    string _genero;
    string _orientacion;

public:
    character();
    ~character();

    void setNombre();
    void setRaza();
    void setGenero();
    void setOrientacion();
    void crearPersonaje();
};


