#include "Bender.h"

#ifndef WATERBENDERS_H_
#define WATERBENDERS_H_

using namespace std;

class Waterbenders : public Bender
{
public:
  Waterbenders();
  Waterbenders(string);
  ~Waterbenders();
  virtual void AtaqueRegular(Bender*);
  virtual void AtaqueEspecial(Bender*);
};

#endif
