#include "Mago.h"
#include "Personaje.h"



Mago::Mago()
{
    intelecto = 85;
    fuerza = 80;
    agilidad = 75;
}

Mago::~Mago()
{
}


void Mago::bolaDeFuego()
{
    
    int costeMana = 15;
    if (mana >= costeMana) {
        mana -= costeMana;
        int da�o = 20 + (rand() % 10); // Da�o base de 20, con hasta 10 puntos adicionales aleatorios
        bool critico = (rand() % 10) < 2; // 20% de posibilidades de cr�tico
        if (critico) {
            da�o *= 2; // El da�o cr�tico es doble
            cout << "�Impacto cr�tico! Una explosi�n ardiente consume al enemigo, infligiendo " << da�o << " puntos de da�o." << endl;
        }
        else {
            cout << "Tu Bola de Fuego golpea al enemigo, causando " << da�o << " puntos de da�o." << endl;
        }
    }
    else {
        cout << "Mana insuficiente para lanzar Bola de Fuego." << endl;
    }
}

void Mago::rayoDeHielo()
{
  
        int costeMana = 15;
        if (mana >= costeMana) {
            mana -= costeMana;
            cout << "\tHaz lanzado un Rayo de Hielo " << endl;
            cout << "\tEl enemigo est� congelado y no puede atacar durante 1 turnos.";

        }
        else {
            cout << "Mana insuficiente para lanzar Rayo de Hielo." << endl;
        }

    

}

void Mago::fuegoRadiante()
{

    int costeMana = 25;
    if (mana >= costeMana) {
        mana -= costeMana;
        int da�oInicial = 30; 
        cout << "Invocas Fuego Radiante, quemando a todos los enemigos con un brillo cegador, causando " << da�oInicial << " de da�o inicial." << endl;
        cout << "Las llamas persisten, quemando a los enemigos levemente por 7 turnos." << endl;
    }
    else {
        cout << "Mana insuficiente para lanzar Fuego Radiante." << endl;
    }

}

void Mago::lanzarDescarga() {
    int coste_mana = 10; 
    if (mana >= coste_mana) {
        mana -= coste_mana; 
        cout << "Lanzas una poderosa descarga el�ctrica a tu enemigo." << endl;
        // Aqu� aplicar�as el da�o al enemigo
    }
    else {
        cout << "Mana insuficiente para lanzar Descarga." << endl;
    }
}

void Mago::lanzarHielo() {

    int coste_mana = 15; 
    if (mana >= coste_mana) {
        mana -= coste_mana; 
        cout << "Lanzas un fr�o rayo de hielo que congela a tus adversarios." << endl;
    }
    else {
        cout << "Mana insuficiente para lanzar Hielo." << endl;
    }
}

void Mago::cubrirse() {
    
    int duracionDefensa = 1;
    if (turnosDefensa == 0) { // Solo se puede activar si no est� ya activo
        turnosDefensa = duracionDefensa;
        cout << "Te cubres con un escudo m�gico, reduciendo el da�o de los ataques enemigos durante " << duracionDefensa << " turnos." << endl;
    }
    else {
        cout << "El escudo m�gico ya est� activo." << endl;
    }
}

void Mago::actualizar() {
    if (turnosDefensa > 0) {
        --turnosDefensa;
        if (turnosDefensa == 0) {
            cout << "El escudo m�gico se ha desvanecido." << endl;
        }
    }
}