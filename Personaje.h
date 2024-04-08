#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <string>
#include <vector>
#include <iostream>
#include <fstream>


using namespace std;

class Personaje {
protected:
    int nivel;
    int dinero;
    int puntosHabilidad;
    int estamina;
    int mana;
    int intelecto;
    int fuerza;
    int agilidad;


  

public:
    Personaje();
    ~Personaje();
    void setNivel(int nivel);
    void setDinero(int dinero);
    void setPuntosHabilidad(int puntosHabilidad);
    void setEstamina(int estamina);
    void setMana(int mana);
    void setIntelecto(int intelecto);
    void setFuerza(int fuerza);
    void setAgilidad(int agilidad);
    void setClase();
    void asignarArmaInicial();
    void Equipamiento();
    void item();
    void mostrarEquipamiento() const;
    string _clase;
    string armaInicial;
    vector<string> equipamientoSeleccionado;
    string getClase() const { return _clase; }
    string getArmaInicial() const { return armaInicial; }
    const vector<string>& getEquipamientoSeleccionado() const { return equipamientoSeleccionado; }
    void guardarPartida(const string& nombreArchivo);
    void cargarPartida(const string& nombreArchivo);
};

#endif
