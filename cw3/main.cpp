#include <iostream>

#include "probka.hpp"
#include "sygnal.hpp"

using namespace std;


int main(int argc,char* argv[])
{

   if (argc != 2) {
 return -1;
}

string nazwa_pliku = argv[1];

sygnal s1;
s1.wczytywanie(nazwa_pliku);
s1.odczytywanie();
cout<< "srednia wynosi"<< s1.oblicz_Srednia()<<endl;
cout<< "calka wynosi"<< s1.calka()<<endl;
cout<< "dlugosc wynosi"<< s1.oblicz_Dlugosc()<<endl;

s1.zapis ("nazwa.csv");
    cin.get();


return 0;
}
