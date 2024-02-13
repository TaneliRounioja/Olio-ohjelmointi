#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout<<"Kerrostalo luotu"<<endl;
    cout<<"Maaritellaan koko kerrostalon kaikki asunnot"<<endl;
    ekap->maaritaAsunnot();
    tokap->maaritaAsunnot();
    kolmasp->maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double hinta)
{
    double katutasonKulutus = ekap->laskeKulutus(hinta);
    double kerrostenKulutus = tokap->laskeKulutus(hinta) + kolmasp->laskeKulutus(hinta);
    return katutasonKulutus+kerrostenKulutus;
}
