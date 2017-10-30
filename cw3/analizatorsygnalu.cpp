#include "analizatorsygnalu.hpp"
#include <iostream>
#include "syngall.hpp"


using namespace std;

double analizatorsygnalu::minimum (const syngall& sygnal)
{
    double min=10000;
    for (int i=0;i<sygnal.iloscProbek();i++)
    {
        if(sygnal[i].x<min){
            min=sygnal[i].x;
        }
    }return min;
}
/*double sygnal::sygnal_maximum()
{
    double max=-10000;
    for (int i=0;i>syngall.iloscProbek();i++)
    {
        if(_zmienne[i].x>max){
            max=_zmienne[i].x;
        }
    }return max;
}


double sygnal::oblicz_Dlugosc()
{double a=-100000;

double u=100000;

double d;

   for(int i=0;i<_zmienne.size();i++)
   {

       if(_zmienne[i].x>a)
        {
        a=_zmienne[i].x;
       }
       if(_zmienne[i].x<u)
        {
        u = _zmienne[i].x;
       }

   return d;
}
}

double sygnal::oblicz_Srednia()
{ double o=0;
    for (int i=0;i<_zmienne.size();i++)
        { o=o+ _zmienne[i].x;  }
   if(_zmienne.size()>0)
    {
       o=o/_zmienne.size();
   }
       double oblicz_Srednia;
return o;

}

double sygnal::calka()
{
    double dt1, dpole1, calka;
    for (int i = 0; i <= (_zmienne.size()) -1; i++)
    {
     dt1 = _zmienne[i + 1].t - _zmienne[i].t;
     dpole1 = (_zmienne[i].x + _zmienne[i + 1].x) * dt1 / 2;
    calka = calka + dpole1;
    }
   return calka;

}
*/
