#include "Airbenders.h"

Airbenders::Airbenders()
{

}

Airbenders::Airbenders(string pNombre) :  Bender(pNombre)
{

}

void Airbenders::AtaqueEspecial(Bender* bender)
{
  if (typeid(bender)==typeid(Firebenders)) {
    int ataque = ofensa + (ofensa*0.15);
    bender->setHp(bender->getHp()-ataque);
  }
}
