#include "Bender.h"
#include "Airbenders.h"
#include "Earthbenders.h"
#include "Firebenders.h"
#include "Waterbenders.h"
#include <vector>
#include <string>


using namespace std;

int main()
{
  string respuesta = "s";
  vector <Bender*> guerreros;
  while (respuesta=="s"){
    string opcion;
    cout << "MENU PRINCIPAL" << endl << endl;
    cout << "1.- Agregar" << endl;
    cout << "2. Jugar" << endl << endl;
    cout << "Ingrese una opcion: ";
    cin>>opcion;
    while (opcion=="1" || opcion=="2"){
      cout << "Error en la opcion" << endl;
      cout << "Ingrese ua opcion: ";
      cin>>opcion;
    }
    if (opcion=="1"){
      string agregar;
      cout << "MENU AGREGAR" << endl << endl;
      cout << "1.- Airbenders" << endl;
      cout << "2.- Earthbenders" << endl;
      cout << "3.- Firebenders" << endl;
      cout << "4.- Waterbenders" << endl;
    }
    cout << "Desea continuar: ";
    cin>>respuesta;
  }
}
