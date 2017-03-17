#include "Bender.h"


#ifndef EARTHBENDERS_H_
#define EARTHBENDERS_H_

using namespace std;

class Earthbenders : public Bender
{
public:
  Earthbenders();
  Earthbenders(string);
  ~Earthbenders();
  virtual void AtaqueRegular(Bender*);
  virtual void AtaqueEspecial(Bender*);
};

#endif
