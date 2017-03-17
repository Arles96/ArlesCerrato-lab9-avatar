#include "Bender.h"
#include "Airbenders.h"
#include "Earthbenders.h"
#include "Firebenders.h"
#include "Waterbenders.h"
#include <vector>
#include <string>


using namespace std;

void removeMemory(vector<Bender*>);

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
    while (opcion!="1" || opcion!="2"){
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
      cout << "4.- Waterbenders" << endl << endl;
      cout << "INgrese ua opcion: ";
      cin>>agregar;
      while (agregar!="1" || agregar!="2" || agregar!="3" || agregar!="4") {
        cout << "Error en la opcion" << endl;
        cout << "Ingrese una opcion";
        cin>>agregar;
      }
      cout << endl;
      string nombre;
      if (agregar=="1") {
        cout << "AGREGANDO AIRBENDERS" << endl << endl;
        cout << "Ingrese el nombre: ";
        cin>>nombre;
        Airbenders* a = new Airbenders(nombre);
        guerreros.push_back(a);
        cout << "Se ha agregado un Airbenders" << endl;
      }
      else if (agregar=="2") {
        cout << "AGREGANDO EARTHBENDERS" << endl << endl;
        cout << "Ingrese el nombre: ";
        cin>>nombre;
        Earthbenders* e = new Earthbenders(nombre);
        guerreros.push_back(e);
        cout << "Se ha agregado un Earthbenders" << endl;
      }
      else if (agregar=="3") {
        cout << "AGREGANDO FIREBENDERS" << endl << endl;
        cout << "Ingrese el nombre: ";
        cin>>nombre;
        Firebenders* f = new Firebenders(nombre);
        guerreros.push_back(f);
        cout << "Se ha agregado un Firebenders" << endl;
      }
      else if (agregar=="4") {
        cout << "AGREGANDO WATERBENDERS" << endl << endl;
        cout << "Ingrese el nombre: ";
        cin>>nombre;
        Waterbenders* w = new Waterbenders(nombre);
        guerreros.push_back(w);
        cout << "Se ha agregadp un Waterbenders" << endl;
      }
    }//fin agregar
    else {

    }
    cout << endl;
    cout << "Desea continuar: ";
    cin>>respuesta;
  }
}
