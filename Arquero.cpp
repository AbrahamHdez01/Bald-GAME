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
		int da�o = 15 + (rand() % 10); // Da�o base de 15, con hasta 10 puntos adicionales aleatorios
		bool critico = (rand() % 10) < 2; // 20% de posibilidades de cr�tico
        if (critico) {
			da�o *= 2; // El da�o cr�tico es doble
			cout << "�Impacto cr�tico! Una flecha certera atraviesa al enemigo, infligiendo " << da�o << " puntos de da�o." << endl;
		}
		else {
			cout << "Tu flecha golpea al enemigo, causando " << da�o << " puntos de da�o." << endl;
		}
	}
	else {
		cout << "Mana insuficiente para lanzar Disparo R�pido." << endl;
	}
}

void Arquero::ojoDeHalcon()
{
	if (mana >= 18) {
		mana -= 18;
		cout << "Tu visi�n se agudiza, aumentando tu fuerza medianamente." << endl;
		fuerzaExtra = 5;
		turnosOjoHalcon = 7;
	}
	else {
		cout << "Mana insuficiente para lanzar Ojo de Halc�n." << endl;
	}
}

void Arquero::rafagaDeFlechas()
{
	if (mana >= 27) {
		mana -= 27;
		int da�o = 10 + (rand() % 5); // Da�o base de 10, con hasta 5 puntos adicionales aleatorios
		cout << "Una lluvia de flechas cae sobre los enemigos, causando " << da�o << " puntos de da�o a todos." << endl;
		turnosRafagaFlechas = 5;
	}
	else {
		cout << "Mana insuficiente para lanzar R�faga de Flechas." << endl;
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
			cout << "El efecto de Ojo de Halc�n ha expirado." << endl;
			fuerzaExtra = 0;
		}
	}
	if (turnosRafagaFlechas > 0) {
		turnosRafagaFlechas--;
		if (turnosRafagaFlechas == 0) {
			cout << "El efecto de R�faga de Flechas ha expirado." << endl;
		}
	}
}

void Arquero::lanzarflechas()
{
	if (mana >= 15) {
		mana -= 15;
		int da�o = 20 + (rand() % 11); // Da�o base de 20, con hasta 10 puntos adicionales aleatorios
		cout << "Lanzas flechas a los enemigos, causando " << da�o << " puntos de da�o." << endl;
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
