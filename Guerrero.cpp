#include "Guerrero.h"
#include <cstdlib> 
#include <ctime> 

Guerrero::Guerrero()
{
    intelecto = 80;
    fuerza = 85;
    agilidad = 85;
}





void Guerrero::ataquePotente()
{
    int ataque;
    int mana = 100;
    cout << "\nElige un ataque: " << endl;
    cout << "1. Golpe de hierro " << endl;
    cout << "2. Patada de hierro " << endl;
    cout << "Ataque: ";

    while (!(cin >> ataque) || ataque < 1 || ataque > 2) {
        cout << "Opci�n inv�lida. Por favor, elige una opci�n v�lida (1 o 2): ";
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    }

    int da�o;
    int coste_mana = 5; 

    switch (ataque) {
    case 1:
        if (mana >= coste_mana) {
            mana -= coste_mana;
            da�o = 15 + (rand() % 6);
            cout << "El pu�o de hierro inflige " << da�o << " puntos de da�o." << endl;
        }
        else {
            cout << "Mana insuficiente para lanzar Golpe de hierro." << endl;
        }
        break;
    case 2:
        if (mana >= coste_mana) {
            mana -= coste_mana;
            da�o = 20 + (rand() % 11);
            bool critico = (rand() % 10) < 2;
            if (critico) {
                da�o *= 2;
                cout << "�Impacto cr�tico! La Patada de hierro inflige " << da�o << " puntos de da�o." << endl;
            }
            else {
                cout << "La Patada de hierro golpea al enemigo, causando " << da�o << " puntos de da�o." << endl;
            }
        }
        else {
            cout << "Mana insuficiente para lanzar Patada de hierro." << endl;
        }
        break;
    }

}

void Guerrero::Defensa()
{
    int coste_mana = 12;
    if (mana >= coste_mana) {
        mana -= coste_mana;
        resistencia += 10; 
        turnosDefensa = 5; 
        cout << "La Defensa de Hierro ha sido activada durante " << turnosDefensa << " turnos." << endl;
    }
    else {
        cout << "Mana insuficiente para activar la Defensa de Hierro." << endl;
    }

}

void Guerrero::gritoGuerra()
{
    int coste_mana = 25;
    if (mana >= coste_mana) {
        mana -= coste_mana;
        fuerzaExtra += 15;
        turnosGritoGuerra = 7;
        cout << "Grito de Guerra activado durante " << turnosGritoGuerra << " turnos." << endl;
    }

    else {
        cout << "Mana insuficiente para activar Grito de Guerra." << endl;
    }

}

void Guerrero::actualizar()
{
    if (turnosDefensa > 0) {
        --turnosDefensa;
        if (turnosDefensa == 0) {
            resistencia -= 10; 
            cout << "La Defensa de Hierro ha terminado." << endl;
        }
    }
    if (turnosGritoGuerra > 0) {
        --turnosGritoGuerra;
        if (turnosGritoGuerra == 0) {
            fuerzaExtra -= 15;
            cout << "El efecto del Grito de Guerra ha terminado." << endl;
        }
    }

    if (turnosDefensaNormal > 0) {
        --turnosDefensaNormal;
        if (turnosDefensaNormal == 0) {
            resistencia -= 5; // Revierte el incremento de resistencia de la defensa normal
            cout << "La Defensa Normal ha terminado. La resistencia vuelve a la normalidad." << endl;
        }
    }
}

void Guerrero::punch()
{
    int coste_mana = 15;
    if (mana >= 10) {
        cout << "\nHaz activado la hitbox del Mago " << endl;
        mana -= coste_mana;
    }
    else {
        cout << "\nNo cuentas con el mana necesario, preparate para el ataque del enemigo " << endl;
    }
}

void Guerrero::patada()
{
    int coste_mana = 15; // Costo necesario para realizar la patada
    int da�o = 20 + (rand() % 11); // Da�o base de 20, con hasta 10 puntos adicionales aleatorios

    if (mana >= coste_mana) {
        mana -= coste_mana; // Se reduce el mana seg�n el costo de la habilidad
        cout << "\nLanzaste una Patada de Hierro poderosa, infligiendo " << da�o << " puntos de da�o." << endl;

        

        bool critico = (rand() % 100) < 20; // 20% de posibilidades de cr�tico
        if (critico) {
            int da�oCritico = da�o * 2;
            cout << "�Es un golpe cr�tico! Infliges " << da�oCritico << " puntos de da�o adicional." << endl;
          
        }
    }
    else {
        cout << "\nMana insuficiente para lanzar Patada de Hierro. Necesitas al menos " << coste_mana << " puntos de mana." << endl;
    }
}

void Guerrero::defensanormal()
{
    int coste_mana = 5;
    int incrementoResistencia = 5;
    int duracion = 3; // Duraci�n de la defensa normal en turnos

    if (mana >= coste_mana) {
        mana -= coste_mana;
        resistencia += incrementoResistencia; // Aumenta la resistencia
        turnosDefensaNormal = duracion; // Establece la duraci�n de la defensa normal

        cout << "\nDefensa Normal activada. La resistencia aumenta en " << incrementoResistencia
            << " durante " << duracion << " turnos." << endl;
    }
    else {
        cout << "\nMana insuficiente para activar Defensa Normal. Necesitas al menos " << coste_mana << " puntos de mana." << endl;
    }
}
