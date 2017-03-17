#include "Bender.h"

#ifndef BENDER_H_
#define BENDER_H_

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
