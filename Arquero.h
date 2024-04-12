#pragma once
#include "Personaje.h"

class Arquero: Personaje
{
public:
	//Disparo Rápido(5 pts), Ojo de Halcón(18 pts) (Dura 7 turnos, aumenta la fuerza
	//	de medianamente), Rafaga de Flechas(27 pts) (Ataca a todos los enemigos, y al inicio de
	//		cada turno a todos los enemigos levemente por 5 turnos) y ademas tener  metodos por default para atacar y defender

	Arquero();
	~Arquero();
	void disparoRapido();
	void ojoDeHalcon();
	void rafagaDeFlechas();
	void actualizar();
	void lanzarflechas();
	void defensanormal();
	


private:
	
	int resistencia = 100;
	int turnosDefensa = 0; // Duración restante del efecto defensivo
	int turnosOjoHalcon = 0;
	int turnosRafagaFlechas = 0;
	int fuerzaExtra = 0;
	int turnosDefensaNormal = 0;



};