#ifndef ANALIZATORSYGNALU_HPP
#define ANALIZATORSYGNALU_HPP
#include "analizatorsygnalu.hpp"
#include <iostream>

class analizatorsygnalu{
AnalizatorSygnalu();

double dlugosc( const Sygnal& sygnal);
double minimum(const Sygnal& sygnal);
double maksimum(const Sygnal& sygnal);
double srednia(const Sygnal& sygnal);
double calka(const Sygnal& sygnal);
};


#endif
