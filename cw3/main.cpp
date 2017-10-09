#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>
#include <vector>
#include <sstream>
using namespace std;


struct Probka {
double t;
double x;
Probka(double _t,double _x)
{
t=_t;
x=_x;}
};

vector <Probka> wczytaj (string n)
{
    vector <Probka> tablica;
    ifstream plik (n);
    string line;
    while (getline(plik,line))
{
    stringstream aa(line);
    double _t, _x;
    aa>>_t;
    aa.ignore();
    aa>>_x;
    cout<<_t<<endl;
    cout<<_x<<endl;
}
}

int main(int argc,char* argv[])
{

   if (argc != 2) {
 return -1;
}
vector <Probka> dd=wczytaj(argv [1]);
string nazwa_pliku = argv[1];
cout << "Odczytuje plik: " << nazwa_pliku << endl;

    cin.get();
    return 0;
}
