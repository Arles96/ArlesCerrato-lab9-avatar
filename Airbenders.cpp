#include "Airbenders.h"
#include "Firebenders.h"
Airbenders::Airbenders()
{

}

Airbenders::Airbenders(string pNombre) :  Bender(pNombre)
{
  hp = 200;
  defensa = 100;
  ofensa = 15;
  fuerza = 50;
  suerte = 6;

}

Airbenders::~Airbenders(){}

void Airbenders::AtaqueRegular(Bender* bender)
{
  int numero;
  srand(time(0));
  numero = rand()%101;
  while (numero<1 || numero>100) {
    numero = rand()%101;
  }
  int ataque = ofensa;
  if (numero%5==0) {
    ataque = ofensa*1.5;
  }
  if (bender->getDefensa()>0) {
    bender->setHp(bender->getHp() - (ataque/2));
    bender->setDefensa(bender->getDefensa()- (ataque/2));
  }else {
    bender->setHp(bender->getHp()-ataque);
  }
}

void Airbenders::AtaqueEspecial(Bender* bender)
{
  fuerza -=10;
  int numero;
  srand(time(0));
  numero = rand()%101;
  while (numero<1 || numero>100) {
    numero =  rand()%101;
  }
  int ataque = ofensa;
  if (numero%5==0) {
    ataque = ataque*1.5;
  }
  if (typeid(*bender)==typeid(Firebenders)) {
    ataque = ofensa + (ofensa*0.15);
    if (bender->getDefensa()<=0) {
      bender->setHp(bender->getHp()-ataque);
    }else {
      bender->setDefensa(bender->getDefensa()- (ataque/2));
      bender->setHp(bender->getHp()-(ataque/2));
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
