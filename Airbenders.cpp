#include "Airbenders.h"

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

void Airbenders::AtaqueEspecial(Bender* bender)
{
  fuerza -=10;
  int numero;
  srand(time(0));
  numero = rand()%101;
  while (numero<1 || numero>100) {
    numero rand()%101;
  }
  if (typeid(*bender)==typeid(Firebenders)) {
    int ataque = ofensa + (ofensa*0.15);
    if (numero%5==0 || bender->getDefensa()<=0) {
      bender->setHp(bender->getHp()-ataque);
    }else {
      bender->setDefensa(bender->getDefensa()- (ataque/2));
      bender->setHp(bender->getHp()-(ataque/2));
    }
  }
  else {
    if (numero%5==0 || bender->getDefensa()<=0) {
      bender->setHp(bender->getHp()-ataque);
    }else {
      bender->setDefensa(bender->getDefensa()- (ataque/2));
      bender->setHp(bender->getHp()-(ataque/2));
    }
  }
}
