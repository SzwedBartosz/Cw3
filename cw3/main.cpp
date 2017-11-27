#include <iostream>
#include "probkaa.hpp"
#include "Sygnal.hpp"
#include "sygnalloader.hpp"
#include "analizatorsygnalu.hpp"
#include "windows.h"
#include "SygnalProbkowany.hpp"
#include "Sygnalsinusoidalny.hpp"

using namespace std;

int main(int argc,char* argv[])
{

   if (argc != 2) {
 return -1;
}

string nazwa_pliku = argv[1];
analizatorsygnalu a1;
SygnalProbkowany s1;
sygnalloader sl1;

s1 = sl1.wczytajSygnal(nazwa_pliku);

Sygnal* ss1 = new SygnalSinusoidalny(1.0, 6.28, 0.0);
SygnalProbkowany ns1;

for(double t=0;t<a1.dlugosc(s1);t+=0.001)
{
double g;
g=ss1->x(t)-s1.x(t);
Probka p2(t,g);
ns1.dodajProbke(p2);
}

sl1.zapiszSygnal (ns1, "plik2.csv");
    cin.get();



return 0;
}
