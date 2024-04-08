#pragma once
#ifndef MAGO_H
#define MAGO_H

#include "Personaje.h"
class Mago : public Personaje {
public:
    Mago(const std::string& nombre = "", int nivel = 1, int dinero = 0, int puntosHabilidad = 0, int estamina = 100, int mana = 150, int intelecto = 15, int fuerza = 10, int agilidad = 10);

};

#endif

#pragma once
#include "Personaje.h"
#include "character.h"

class Mago::Personaje 
{

};