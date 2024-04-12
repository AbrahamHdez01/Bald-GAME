#include "Arquero.h"

Arquero::Arquero()
{
    intelecto = 90;
    fuerza = 75;
    agilidad = 80;
}

Arquero::~Arquero()
{
}

void Arquero::disparoRapido()
{
    if (mana >= 10) {
		mana -= 10;
		int daño = 15 + (rand() % 10); // Daño base de 15, con hasta 10 puntos adicionales aleatorios
		bool critico = (rand() % 10) < 2; // 20% de posibilidades de crítico
        if (critico) {
			daño *= 2; // El daño crítico es doble
			cout << "¡Impacto crítico! Una flecha certera atraviesa al enemigo, infligiendo " << daño << " puntos de daño." << endl;
		}
		else {
			cout << "Tu flecha golpea al enemigo, causando " << daño << " puntos de daño." << endl;
		}
	}
	else {
		cout << "Mana insuficiente para lanzar Disparo Rápido." << endl;
	}
}

void Arquero::ojoDeHalcon()
{
	if (mana >= 18) {
		mana -= 18;
		cout << "Tu visión se agudiza, aumentando tu fuerza medianamente." << endl;
		fuerzaExtra = 5;
		turnosOjoHalcon = 7;
	}
	else {
		cout << "Mana insuficiente para lanzar Ojo de Halcón." << endl;
	}
}

void Arquero::rafagaDeFlechas()
{
	if (mana >= 27) {
		mana -= 27;
		int daño = 10 + (rand() % 5); // Daño base de 10, con hasta 5 puntos adicionales aleatorios
		cout << "Una lluvia de flechas cae sobre los enemigos, causando " << daño << " puntos de daño a todos." << endl;
		turnosRafagaFlechas = 5;
	}
	else {
		cout << "Mana insuficiente para lanzar Ráfaga de Flechas." << endl;
	}
}

void Arquero::actualizar()
{
	if (turnosDefensa > 0) {
		turnosDefensa--;
		if (turnosDefensa == 0) {
			cout << "La Defensa de Hierro ha expirado." << endl;
			resistencia -= 10;
		}
	}
	if (turnosOjoHalcon > 0) {
		turnosOjoHalcon--;
		if (turnosOjoHalcon == 0) {
			cout << "El efecto de Ojo de Halcón ha expirado." << endl;
			fuerzaExtra = 0;
		}
	}
	if (turnosRafagaFlechas > 0) {
		turnosRafagaFlechas--;
		if (turnosRafagaFlechas == 0) {
			cout << "El efecto de Ráfaga de Flechas ha expirado." << endl;
		}
	}
}

void Arquero::lanzarflechas()
{
	if (mana >= 15) {
		mana -= 15;
		int daño = 20 + (rand() % 11); // Daño base de 20, con hasta 10 puntos adicionales aleatorios
		cout << "Lanzas flechas a los enemigos, causando " << daño << " puntos de daño." << endl;
	}
	else {
		cout << "Mana insuficiente para lanzar Flechas." << endl;
	}

}

void Arquero::defensanormal()
{
	if (mana >= 10) {
		mana -= 10;
		cout << "Te preparas para el ataque, aumentando tu resistencia levemente." << endl;
		resistencia += 5;
		turnosDefensaNormal = 3;
	}
	else {
		cout << "Mana insuficiente para activar Defensa Normal." << endl;
	}
}
