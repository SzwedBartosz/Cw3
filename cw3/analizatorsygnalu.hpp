#ifndef ANALIZATORSYGNALU_HPP
#define ANALIZATORSYGNALU_HPP
#include "SygnalProbkowany.hpp"
#include <iostream>

class analizatorsygnalu{
AnalizatorSygnalu();
public:

/** \brief dlugosc sygnalu probkowanego
 *
 * \param sygnal const SygnalProbkowany&
 * \return double
 *
 */
double dlugosc( const SygnalProbkowany& sygnal);
/** \brief minimalna wartosc sygnalu probkowanego
 *
 * \param sygnal const SygnalProbkowany&
 * \return double
 *
 */
double minimum(const SygnalProbkowany& sygnal);
/** \brief maksymalna wartosc sygnalu probkowanego
 *
 * \param sygnal const SygnalProbkowany&
 * \return double
 *
 */
double maksimum(const SygnalProbkowany& sygnal);
/** \brief srednia wartosc sygnalu probkowanego
 *
 * \param sygnal const SygnalProbkowany&
 * \return double
 *
 */
double srednia(const SygnalProbkowany& sygnal);
/** \brief calka z syngalu probkowanego
 *
 * \param sygnal const SygnalProbkowany&
 * \return double
 *
 */
double calka(const SygnalProbkowany& sygnal);
};


#endif
