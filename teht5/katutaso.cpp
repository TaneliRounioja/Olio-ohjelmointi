#include "katutaso.h"

Katutaso::Katutaso()
{
    cout<<"Katutaso luotu"<<endl;
}

void Katutaso::maaritaAsunnot()
{
    cout<<"Maaritetaan 2 kpl katutason asuntoja"<<endl;
    as1p->maarita(2,100);
    as2p->maarita(2,100);
}

double Katutaso::laskeKulutus(double hinta)
{
    return as1p->laskeKulutus(hinta)+as2p->laskeKulutus(hinta);
}
