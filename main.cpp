#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <string>


using namespace std;


struct kocsi
{
    string azonosito;
    int kapacitas = 0;
    string kezdo_allomas;
};


struct menetrend
{
    pair<string,int> menetrendek;
};


struct termek
{
    string id;
    string forrashely;
    string celhely;
    int meret;
};




int main()
{
    kocsi k;
    menetrend m;
    termek t;


    string azon, kezd, kap;

    ifstream infile("kocsik.txt");
    if (infile.is_open())
    {
        while(infile.good())
        {
            getline(infile,azon,' ');
            k.azonosito = azon;
            cout << azon << '\t';

            getline(infile,kap,' ');
            k.kapacitas = stoi(kap);
            cout << k.kapacitas << '\t';

            getline(infile,kezd);
            k.kezdo_allomas = kezd;
            cout << kezd << endl;

        }
        infile.close();
        cout << endl;
    }

    else
    {
        cout << "a kocsikat tartalmazo fajlt nem sikerult megnyitni";

    }








    string i, forr, cel, mer;

    ifstream infile2("aruk.txt");
    if (infile2.is_open())
    {
        while(infile2.good())
        {
            getline(infile2,i,' ');
            t.id = i;
            cout << i << '\t';

            getline(infile2,forr,' ');
            t.forrashely = forr;
            cout << forr << '\t';

            getline(infile2,cel,' ');
            t.celhely = cel;
            cout << cel << '\t';

            getline(infile2,mer);
            t.meret = stoi(mer);
            cout << t.meret << endl;

        }
        infile.close();
        cout << endl;
    }

    else
    {
        cout << "az arukat tartalmazo fajlt nem sikerult megnyitni";

    }

    return 0;
}
