#include "Waterbenders.h"
#include "Earthbenders.h"

Waterbenders::Waterbenders(){}

Waterbenders::Waterbenders(string pNombre) : Bender(pNombre)
{
  hp = 200;
  defensa = 120;
  ofensa = 20;
  fuerza = 40;
  suerte = 10;
}

Waterbenders::~Waterbenders(){}

void Waterbenders::AtaqueRegular(Bender* bender)
{
  int numero;
  srand(time(0));
  numero = rand()%11;
  while (numero<1 || numero>10) {
    numero= rand()%11;
  }
  int ataque = ofensa;
  if (numero%3==0) {
    ataque = ofensa*1.5;
  }
  if (bender->getDefensa()>0) {
    bender->setHp(bender->getHp() - (ataque/2));
    bender->setDefensa(bender->getDefensa()- (ataque/2));
  }else {
    bender->setHp(bender->getHp()-ataque);
  }
}

void Waterbenders::AtaqueEspecial(Bender* bender)
{
  int numero;
  srand(time(0));
  numero = rand()%11;
  while (numero<1 || numero>10) {
    numero= rand()%11;
  }
  int ataque = ofensa;
  if (numero%3==0) {
    ataque = ofensa*1.5;
  }
  if (typeid(*bender)==typeid(Earthbenders)){
    ataque = ofensa*1.25;
    if (bender->getDefensa()<=0) {
      bender->setHp(bender->getHp() - ataque);
    }else {
      bender->setHp(bender->getHp() - (ataque/2));
      bender->setDefensa(bender->getDefensa() - (ataque/2));
    }
  }
  else {
    if (bender->getDefensa()<=0) {
      bender->setHp(bender->getHp() - ataque);
    }else {
      bender->setHp(bender->getHp() - (ataque/2));
      bender->setDefensa(bender->getDefensa() - (ataque/2));
    }
  }
}
