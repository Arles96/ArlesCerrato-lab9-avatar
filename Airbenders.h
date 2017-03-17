#include "Bender.h"

#ifndef AIRBENDERS_H_
#define AIRBENDERS_H_

using namespace std;

class Airbenders : public Bender
{
public:
  Airbenders();
  Airbenders(string);
  ~Airbenders();
  virtual void AtaqueEspecial(Bender*);
};

#endif
