#pragma once
#include "Personaje.h"

class Guerrero :public Personaje
{

public:
    Guerrero();

    void ataquePotente();
    void Defensa();
    void gritoGuerra();
    void actualizar();
    void vincularEnemigos(vector<Personaje*>& enemigos);
    int resistencia;
    void punch();
    void patada();
    void defensanormal();


protected:
    int fuerzaExtra = 0; // Aumento temporal de fuerza debido a Grito de Guerra
    int turnosDefensa = 0; // Contador de turnos para Defensa de Hierro
    int turnosGritoGuerra = 0; // Contador de turnos para Grito de Guerra
    vector<Personaje*> enemigos; // Referencia a la lista de enemigos
    int turnosDefensaNormal = 0;
};