#include <string>
#include <iostream>
#include <typeinfo>
#include <time.h>
#include <stdlib.h>

#ifndef BENDER_H_
#define BENDER_H_

using namespace std;

class Bender
{
protected:
  string nombre;
  int hp;
  int defensa;
  int ofensa;
  int fuerza;
  int suerte;

public:
  Bender();
  Bender(string);
  Bender(string,int,int,int,int, int);
  ~Bender();
  string getNombre();
  int getHp();
  void setHp(int);
  int getDefensa();
  void setDefensa(int);
  int getOfensa();
  int getFuerza();
  int getSuerte();
  virtual void AtaqueRegular(Bender*)=0;
  virtual void AtaqueEspecial(Bender*)=0;
};

#endif
