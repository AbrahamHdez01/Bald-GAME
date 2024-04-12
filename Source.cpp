#include "bald.h"
#include "character.h"
#include <locale>

int main() {
    setlocale(LC_ALL, "");
    srand(time(0));

    bald game;
    character miPersonaje;
    

    game.ImprimirMenu();
    game.Iniciar();

    return 0;
}
