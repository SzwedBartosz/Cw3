#include <iostream>
#include "probkaa.hpp"
#include "syngall.hpp"
#include "sygnalloader.hpp"
#include "analizatorsygnalu.hpp"

using namespace std;

int main(int argc,char* argv[])
{

   if (argc != 2) {
 return -1;
}

string nazwa_pliku = argv[1];
analizatorsygnalu a1;
syngall s1;
s1.wczytywanie(nazwa_pliku);
s1.odczytywanie();
cout<< "srednia wynosi"<< a1.oblicz_Srednia(s1)<<endl;
cout<< "calka wynosi"<< a1.calka(s1)<<endl;
cout<< "dlugosc wynosi"<< a1.oblicz_Dlugosc(s1)<<endl;
cout<< "maximum wynosi"<< a1.sygnal_miximum(s1)<<endl;
cout<< "minimum wynosi"<< a1.sygnal_minimum(s1)<<endl;


s1.zapis ("nazwa.csv");
    cin.get();


return 0;
}
