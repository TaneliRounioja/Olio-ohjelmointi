#ifndef KERROSTALO_H
#define KERROSTALO_H
#include <iostream>
using namespace std;
#include "katutaso.h"
#include "kerros.h"

class Kerrostalo
{
public:
    Kerrostalo();
    double laskeKulutus(double);

private:
    Katutaso eka;
    Katutaso *ekap = &eka;
    Kerros toka;
    Kerros *tokap = &toka;
    Kerros kolmas;
    Kerros * kolmasp = &kolmas;

};

#endif // KERROSTALO_H
