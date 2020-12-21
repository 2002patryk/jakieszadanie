#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class ciag{

    int dlugosc;
    int liczba;
    
    vector <int liczba> licz;
    
    
    public:
        void oblicz();
bool sprawdz_czy_szescian(int liczba);

bool ciag::sprawdz_czy_szescian(int liczba)
{
    for (int i=0; i<liczba; i++)
{
     int szescian= i* i * i;
     if (szescian == liczba) return true;
}
return false;
}

void ciag::oblicz()
{
    ifstream plik;
    plik.open("ciagi.txt");
        while(plik.good()){
             plik >> dlugosc;
                 for (int i=0; i<dlugosc; i++)
                    {
                    plik >> liczba;
                        t.push_back(liczba);
                       sprawdz_czy_szescian(liczba)
                        licz.push_back(liczba);
                      }
        }
    plik.close();
}
