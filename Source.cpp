#include "bald.h"
#include "character.h"
#include <locale>

int main() {
    setlocale(LC_ALL, "");

    bald game;
    character miPersonaje;
    

    game.ImprimirMenu();
    game.Iniciar();

    return 0;
}
