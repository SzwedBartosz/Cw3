#ifndef SYGNALLOADER_HPP
#define SYGNALLOADER_HPP
#include "SygnalProbkowany.hpp"
#include <string>


class sygnalloader {

public:
sygnalloader(){}
SygnalProbkowany wczytajSygnal (std::string nazwaPliku);
void zapiszSygnal (SygnalProbkowany& sygnal, std::string nazwaPliku);



};

#endif
