#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int game(int maxnum)
{
    int arvaus = 0;
    int arvaustenMäärä = 0;
    srand(time(NULL));
    int satluku = rand() % maxnum;
    for(;;)
    {
        cout << "Arvaa luku" <<endl;
        cin >> arvaus;

        if(arvaus <satluku)
        {
            cout << "luku on isompi" << endl;
            arvaustenMäärä++;
        }
        else if(arvaus > satluku)
        {
            cout << "luku on on pienempi" << endl;
            arvaustenMäärä++;
        }
        else if(arvaus == satluku)
        {
            cout << "oikea vastaus!!!" << endl;
            arvaustenMäärä++;
            break;
        }
    }

    return arvaustenMäärä;

}

int main()
{
    int maxnum = 0;
    int tulos = 0;
    cout << "anna maksimi numero" << endl;
    cin >> maxnum;

    tulos = game(maxnum);
    cout << "Arvasit oikein " << tulos << " arvauksen jalkeen!" <<endl;
}


