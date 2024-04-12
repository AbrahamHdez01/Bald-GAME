#include "Equipo.h"


void Tienda::mostrarInventario(Personaje& personaje)
{
	
	string clase = personaje.getClase();

	if (clase == "Mago")
	{
		cout << "\n\t--BIENVENIDO A LA TIENDA DEL MAGO---" << endl;
		cout << "\n\tEsta es la tienda exclusiva para la clase" << clase << endl;
		cout << "\tJunto al item podrás ver el oro necesario para adquirirla" << endl;
		cout << "\t1.Túnica Mística : 500G" << endl;
		cout << "\t2.Anillo del Hechicero : 600G" << endl;
		cout << "\t3.Sombrero Encantado : 550G" << endl;
		cout << "\t4.Botas Hechizadas : 450G" << endl;
		cout << "\t5.Capa del Sabio : 800G" << endl;
		cout << "\t6.Amuleto Mágico : 750G"<< endl;
		cout << "\t7.Bastón Arcano : 650G" << endl;
		cout << "\t8.Tiara del Maestro : 900G" << endl;
	}
	else if (clase == "Ladrón")
	{
		cout << "\n\t--BIENVENIDO A LA TIENDA DEL LADRON---" << endl;
		cout << "\n\tEsta es la tienda exclusiva para la clase" << clase << endl;
		cout << "\tJunto al item podrás ver el oro necesario para adquirirla" << endl;
		cout << "\t1.Dagas Gemelas: 500G" << endl;
		cout << "\t2.Capa Sombría : 600G" << endl;
		cout << "\t3.Gancho de Escalada : 550G" << endl;
		cout << "\t4.Botas de Ladrón : 450G" << endl;
		cout << "\t5.Botas del Jefe : 750G" << endl;
		cout << "\t6.Túnica de Sigilo : 800G" << endl;
		cout << "\t7.Cimitarra : 650G"<< endl;
		cout << "\t8.nMáscara de Bandido : 550G" << endl;

	}
	else if (clase == "Arquero")
	{
		cout << "\n\t--BIENVENIDO A LA TIENDA DEL ARQUERO---" << endl;
		cout << "\n\tEsta es la tienda exclusiva para la clase" << clase << endl;
		cout << "\tJunto al item podrás ver el oro necesario para adquirirla" << endl;
		cout << "\tArco Largo: 500G" << endl;
		cout << "\tCapucha de Ojo de Halcón : 550G" << endl;
		cout << "\tArmadura de Cuero : 600G" << endl;
		cout << "\tBotas Silenciosas : 450G" << endl;
		cout << "\tCapa del Bosque : 750G" << endl;
		cout << "\tGuantes Reforzados : 550G" << endl;
		cout << "\tBandana de Poder : 650G" << endl;
		cout << "\tBallesta de Precisión : 800G" << endl;

	}
	else if (clase == "Guerrero")
	{
		cout << "\n\t--BIENVENIDO A LA TIENDA DEL GUERRERO---" << endl;
		cout << "\n\tEsta es la tienda exclusiva para la clase" << clase << endl;
		cout << "\tHacha de Batalla : 800G" << endl;
		cout << "\tCasco de Guerrero : 600G" << endl;
		cout << "\tArmadura Reforzada : 1000G" << endl;
		cout << "\tBotas con Púas : 550G" << endl;
		cout << "\tEscudo de Batalla : 750G " << endl;
		cout << "\tBotas de Guerra : 650G" << endl;
		cout << "Corona de Guerrero : 700G" << endl;
		cout << "\tEspada del Gladiador : 850G" << endl;

	}
}
