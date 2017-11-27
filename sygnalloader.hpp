#ifndef SYGNALLOADER_HPP
#define SYGNALLOADER_HPP
#include "syngall.hpp"
#include <string>


class sygnalloader {

public:
sygnalloader(){}
/** \brief wczytanie sygnalu z pliku
*/
syngall wczytajSygnal (std::string nazwaPliku);
/** \brief zapisanie sygnalu do pliku
 */
void zapiszSygnal (syngall& sygnal, std::string nazwaPliku);



};

#endif
