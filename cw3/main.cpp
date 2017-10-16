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
    tablica.push_back(Probka(_t,_x));
} return(tablica);
}
void zapis(vector <Probka> dane, string nazwa)
{
   ofstream plik (nazwa);

   for (int i=0;i<dane.size();i++)
   {
       plik<<dane[i].t <<", "<<dane[i].x<< endl;
   }
   plik.close();
}

double obliczDlugosc(vector<Probka> jjj)
{double a=-100000
;
double u=100000;


       double d;
   for(int i=0;i<jjj.size();i++)
   {

       if(jjj[i].x>a){
        a=jjj[i].x;
       }
       if(jjj[i].x<u){
        u=jjj[i].x;
       }

   } cout<<a<<endl;cout<<u<<endl;
   d=a-u;
   cout<<"dlugosc wynosi  "<<  d<<endl;
   return d;
}

double obliczSrednia (vector<Probka> kkk)
{ double o=0; double s;
    for (int i=0;i<kkk.size();i++)
        {double g=0;
        g=g+kkk[i].x;

        o=o++;
s=g/o;
}cout<<s<<endl;

}
int main(int argc,char* argv[])
{

   if (argc != 2) {
 return -1;
}
vector <Probka> dd=wczytaj(argv [1]);
string nazwa_pliku = argv[1];
cout << "Odczytuje plik: " << nazwa_pliku << endl;
obliczDlugosc(dd);
obliczSrednia(dd);
zapis (dd, "nazwa.csv");
    cin.get();
    return 0;
}



