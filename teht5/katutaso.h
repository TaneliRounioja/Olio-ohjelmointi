#ifndef KATUTASO_H
#define KATUTASO_H

#include <iostream>
using namespace std;

#include "kerros.h"



class Katutaso : public Kerros
{
public:
    Katutaso();
    virtual void maaritaAsunnot(void) override;
    double laskeKulutus(double);

private:
    asunto as1;
    asunto *as1p = &as1;
    asunto as2;
    asunto *as2p = &as2;
};

#endif // KATUTASO_H
