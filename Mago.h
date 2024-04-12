#pragma once
#include "Personaje.h"


class Mago : public Personaje {

public:
    Mago();
    ~Mago();
    void bolaDeFuego();
    void rayoDeHielo();
    void fuegoRadiante();

    void lanzarDescarga(); 
    void lanzarHielo();    
    void cubrirse();       
    void actualizar();

private:
    int turnosDefensa = 0; // Duraci�n restante del efecto defensivo


};


