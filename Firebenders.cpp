#include "Firebenders.h"
#include "Waterbenders.h"

Firebenders::Firebenders(){}

Firebenders::Firebenders(string pNombre) : Bender(pNombre)
{
  hp = 210;
  defensa = 90;
  ofensa = 20;
  fuerza = 45;
  suerte = 4;
}

Firebenders::~Firebenders(){}

void Firebenders::AtaqueRegular(Bender* bender)
{
  int numero;
  srand(time(0));
  numero = rand()%1001;
  while (numero<1 || numero>1000) {
    numero  =rand()%1001;
  }
  int ataque = ofensa;
  if (numero==50) {
    ataque = ofensa*1.5;
  }
  if (bender->getDefensa()>0) {
    bender->setHp(bender->getHp() - (ataque/2));
    bender->setDefensa(bender->getDefensa()- (ataque/2));
  }else {
    bender->setHp(bender->getHp()-ataque);
  }
}

void Firebenders::AtaqueEspecial(Bender* bender)
{
  fuerza -=10;
  int numero;
  srand(time(0));
  numero = rand()%1001;
  while (numero<1 || numero>1000) {
    numero = rand()%1001;
  }
  int ataque=ofensa;
  if (numero==50) {
    ataque = ataque*1.5;
  }
  if (typeid(*bender)==typeid(Waterbenders)) {
    ataque = ofensa + (ofensa*0.25);
    if (bender->getDefensa()<=0) {
      bender->setHp(bender->getHp()-ataque);
    }else {
      bender->setHp(bender->getHp()-(ataque/2));
      bender->setDefensa(bender->getDefensa() - (ataque/2));
    }
  }
  else {
    if (bender->getDefensa()<=0) {
      bender->setHp(bender->getHp()-ataque);
    }else {
      bender->setDefensa(bender->getDefensa()- (ataque/2));
      bender->setHp(bender->getHp()-(ataque/2));
    }
  }
}
