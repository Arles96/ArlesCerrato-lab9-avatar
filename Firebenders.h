#include "Bender.h"

#ifndef FIREBENDERS_H_
#define FIREBENDERS_H_

using namespace std;

class Firebenders : public Bender
{
public:
  Firebenders();
  Firebenders(string);
  ~Firebenders();
  virtual void AtaqueRegular(Bender*);
  virtual void AtaqueEspecial(Bender*);
};

#endif
