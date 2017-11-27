#ifndef ANALIZATORSYGNALU_HPP
#define ANALIZATORSYGNALU_HPP
#include "syngall.hpp"
#include <iostream>


class analizatorsygnalu{
AnalizatorSygnalu();
public:
/** \brief dlugosc sygnalu
 *
 * \param sygnal const syngall&
 * \return double
 *
 */
double dlugosc( const syngall& sygnal);
/** \brief minimalna wartosc sygnalu
 *
 * \param sygnal const syngall&
 * \return double
 *
 */
double minimum(const syngall& sygnal);
/** \brief maksymalna wartosc sygnalu
 *
 * \param sygnal const syngall&
 * \return double
 *
 */
double maksimum(const syngall& sygnal);
/** \brief srednia wartosc sygnalu
 *
 * \param sygnal const syngall&
 * \return double
 *
 */
double srednia(const syngall& sygnal);
/** \brief calka sygnalu
 *
 * \param sygnal const syngall&
 * \return double
 *
 */
double calka(const syngall& sygnal);
};


#endif
