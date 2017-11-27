#ifndef SYGNALLOADER_HPP
#define SYGNALLOADER_HPP
#include "SygnalProbkowany.hpp"
#include <string>


class sygnalloader {

public:
sygnalloader(){}
/** \brief wczytanie sygnalu probkowanego z pliku
 */
SygnalProbkowany wczytajSygnal (std::string nazwaPliku);
/** \brief zapisanie sygnalu probkowanego do pliku
 */
void zapiszSygnal (SygnalProbkowany& sygnal, std::string nazwaPliku);



};

#endif
