#include "kerros.h"

Kerros::Kerros()
{
    cout<<"Kerros luotu"<<endl;
}

void Kerros::maaritaAsunnot()
{
    cout<<"Maaritetaan 4 kpl kerroksen asuntoja"<<endl;
    as1p->maarita(2,100);
    as2p->maarita(2,100);
    as3p->maarita(2,100);
    as4p->maarita(2,100);

}

double Kerros::laskeKulutus(double hinta)
{
    return as1p->laskeKulutus(hinta)+as2p->laskeKulutus(hinta)
           + as3p->laskeKulutus(hinta)+as4p->laskeKulutus(hinta);

}
