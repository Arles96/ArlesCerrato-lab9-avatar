#include "Bender.h"

Bender::Bender()
{

}

Bender::Bender(string nombre)
{
  this->nombre = nombre;
}

Bender::Bender(string nombre, int hp, int defensa, int ofensa, int fuerza, int suerte)
{
  this->nombre = nombre;
  this->hp=hp;
  this->defensa = defensa;
  this->ofensa = ofensa;
  this->fuerza = fuerza;
  this->suerte = suerte;
}

Bender::~Bender()
{

}

string Bender::getNombre()
{
  return nombre;
}

int Bender::getHp()
{
  return hp;
}

void Bender::setHp(int hp)
{
  this->hp = hp;
}

int Bender::getDefensa()
{
  return defensa;
}

int Bender::getOfensa()
{
  return ofensa;
}

void Bender::setDefensa(int defensa)
{
  this->defensa = defensa;
}

int Bender::getFuerza()
{
  return fuerza;
}

int Bender::getSuerte()
{
  return suerte;
}

void Bender::AtaqueRegular(Bender* bender)
{
  int temp = fuerza;
  if (bender->getDefensa()>0) {
    bender->setHp(bender->getHp() - ofensa/2);

  }else {
    bender->setHp(bender->getHp()-ofensa);
  }
}

void Bender::AtaqueEspecial(Bender* bender)
{
  int ataque = ofensa + (ofensa*.025);
  if (fuerza<=0) {
    cout << "No se puede hacer el ataque especial" << endl;
  }else {
    bender->setHp(bender->getHp()-ataque);
  }
}
