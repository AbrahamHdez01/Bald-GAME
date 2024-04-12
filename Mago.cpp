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
        int daño = 20 + (rand() % 10); // Daño base de 20, con hasta 10 puntos adicionales aleatorios
        bool critico = (rand() % 10) < 2; // 20% de posibilidades de crítico
        if (critico) {
            daño *= 2; // El daño crítico es doble
            cout << "¡Impacto crítico! Una explosión ardiente consume al enemigo, infligiendo " << daño << " puntos de daño." << endl;
        }
        else {
            cout << "Tu Bola de Fuego golpea al enemigo, causando " << daño << " puntos de daño." << endl;
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
            cout << "\tEl enemigo está congelado y no puede atacar durante 1 turnos.";

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
        int dañoInicial = 30; 
        cout << "Invocas Fuego Radiante, quemando a todos los enemigos con un brillo cegador, causando " << dañoInicial << " de daño inicial." << endl;
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
        cout << "Lanzas una poderosa descarga eléctrica a tu enemigo." << endl;
        // Aquí aplicarías el daño al enemigo
    }
    else {
        cout << "Mana insuficiente para lanzar Descarga." << endl;
    }
}

void Mago::lanzarHielo() {

    int coste_mana = 15; 
    if (mana >= coste_mana) {
        mana -= coste_mana; 
        cout << "Lanzas un frío rayo de hielo que congela a tus adversarios." << endl;
    }
    else {
        cout << "Mana insuficiente para lanzar Hielo." << endl;
    }
}

void Mago::cubrirse() {
    
    int duracionDefensa = 1;
    if (turnosDefensa == 0) { // Solo se puede activar si no está ya activo
        turnosDefensa = duracionDefensa;
        cout << "Te cubres con un escudo mágico, reduciendo el daño de los ataques enemigos durante " << duracionDefensa << " turnos." << endl;
    }
    else {
        cout << "El escudo mágico ya está activo." << endl;
    }
}

void Mago::actualizar() {
    if (turnosDefensa > 0) {
        --turnosDefensa;
        if (turnosDefensa == 0) {
            cout << "El escudo mágico se ha desvanecido." << endl;
        }
    }
}