#include "Personaje.h"
#include "character.h"
#include "bald.h"

Personaje::Personaje() : nivel(0), dinero(0), puntosHabilidad(0), estamina(0), mana(100), intelecto(0), fuerza(0), agilidad(0) {
}

Personaje::~Personaje() {
}

void Personaje::setNivel(int nivel) {
    this->nivel = nivel;
}

void Personaje::setDinero(int dinero) {
    this->dinero = dinero;
}

void Personaje::setPuntosHabilidad(int puntosHabilidad) {
    this->puntosHabilidad = puntosHabilidad;
}

void Personaje::setEstamina(int estamina) {
    this->estamina = estamina;
}

void Personaje::setMana(int mana) {
    this->mana = mana;
}

void Personaje::setIntelecto(int intelecto) {
    this->intelecto = intelecto;
}

void Personaje::setFuerza(int fuerza) {
    this->fuerza = fuerza;
}

void Personaje::setAgilidad(int agilidad) {
    this->agilidad = agilidad;
}

void Personaje::setClase()
{
     //(Guerrero, Arquero, Mago, Ladr�n)
    int opcion;
    opcion = true;
    cout << "\nSelecciona tu clase:" << endl;
    cout << "1. Guerrero" << endl;
    cout << "2. Arquero" << endl;
    cout << "3. Mago" << endl;
    cout << "4. Ladr�n" << endl;
    cout << " Elige tu clase: ";
    cin >> opcion;

    switch (opcion) {
    case 1:
        _clase = "Guerrero";
        //inserar dibujo de guerrero
        break;
    case 2:
        _clase = "Arquero";
        //insertar dibujo de arquero
        break;
    case 3:
        _clase = "Mago";
        break;
    case 4:
        _clase = "Ladr�n";
        break;
    default:
        cout << "Opci�n no v�lida " << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        break;
    }

   

}

void Personaje::Equipamiento() {
    int opc;
    opc = true;
    vector<string> equipamiento = { "Armadura", "Arma", "Botas", "Amuleto", "Casco" };

    cout << "\n";
    cout << "\tHemos llegado a la parte donde escoger�s tu equipamiento." << endl;
    cout << "\tPara ello necesitar�s escoger dos accesorios." << endl;
    cout << "\tElige sabiamente, solamente puedes llevar contigo 2 accesorios." << endl;
    cout << "\n1.Armadura\n2. Arma\n3. Botas\n4. Amuleto\n5. Casco" << endl;

    equipamientoSeleccionado.clear(); 

    while (equipamientoSeleccionado.size() < 2) {
        cout << "Opci�n " << equipamientoSeleccionado.size() + 1 << ": ";

        while (!(cin >> opc) || opc < 1 || opc > 5) {
            cout << "Por favor, introduce un n�mero v�lido del 1 al 5: ";
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        }

        string accesorio = equipamiento[opc - 1];
        if (find(equipamientoSeleccionado.begin(), equipamientoSeleccionado.end(), accesorio) != equipamientoSeleccionado.end()) {
            cout << "Ya has seleccionado ese accesorio. Por favor, elige otro." << endl;
        }
        else {
            equipamientoSeleccionado.push_back(accesorio);
            cout << "Seleccionado: " << accesorio << endl;
        }
    }

    cout << "Has seleccionado los siguientes accesorios:" << endl;
    for (const auto& accesorio : equipamientoSeleccionado) {
        cout << "- " << accesorio << endl;
    }
    if (opc == true)
    {
        cout << "\n" << endl;
        cout << "\nHas seleccionado la clase: " << _clase << endl;
    }
    else
    {
        cout << "\nElija de nuevo" << endl;
    }
}


void Personaje::item()
{
    cout << "Dependiendo el guerrero que eligas, podr�s acceder a diferentes items" << endl;
}


void Personaje::asignarArmaInicial() {
    if (_clase == "Mago") {
        armaInicial = "Varita del Mago";
    }
    else if (_clase == "Ladr�n") {
        armaInicial = "Daga";
    }
    else if (_clase == "Arquero") {
        armaInicial = "Arco del Aprendiz";
    }
    else if (_clase == "Guerrero") {
        armaInicial = "Espada";
    }

    cout << "\nArma inicial equipada: " << armaInicial << endl;
}


void Personaje::mostrarEquipamiento() const {
    cout << "Equipamiento actual:" << endl;
    for (const auto& accesorio : equipamientoSeleccionado) {
		cout <<"--"<< accesorio << endl;
	}

}

void Personaje::guardarPartida(const string& nombreArchivo)
{
  

}

void Personaje::cargarPartida(const string& nombreArchivo)
{
    

}
