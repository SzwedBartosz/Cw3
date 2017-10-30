#include "sygnalloader.hpp"
#include <string>
#include <iostream>

syngall sygnalloader::wczytajSygnal (std::string nazwaPliku)
{
    ifstream plik (n);
    string line;
    syngall sn;
    while (getline(plik,line))
{
    stringstream aa(line);
    double _t, _x;
    aa>>_t;
    aa.ignore();
    aa>>_x;
    cout<<_t<<endl;
    cout<<_x<<endl;
    sn.dodajProbke (Probka( _t,_x));
}

plik.close();

return syngall;
}

void sygnalloader::zapiszSygnal (syngall& sygnal, std::string nazwaPliku);
{
   ofstream plik (nazwa_pliku);

   for (int i=0;i<syngall.iloscProbek();i++)
   {
       plik<<sygnal[i].t <<" "<<sygnal[i].x<< endl;
   }
   plik.close();
}
