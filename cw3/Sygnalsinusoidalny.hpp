#ifndef SYGNALSINUSOIDALNY_HPP
#define SYGNALSINUSOIDALNY_HPP
#include <iostream>
#include "Sygnal.hpp"
#include <cmath>


class SygnalSinusoidalny:public Sygnal {
public:

/** \brief stworzenie sygnalu sinusoidalnego o okreslonych parametrach
 *
 * \param psi
 * \return SygnalSinusoidalny(double a=1.0, double w=1.0, double psi=0.0) :_A(a), _w(w),
 *
 */
SygnalSinusoidalny(double a=1.0, double w=1.0, double psi=0.0) :_A(a), _w(w), _psi(psi) {};
/** \brief konstruktor wirtualny sygnalusinosidalnego
 *
 * \return virtual
 *
 */
virtual ~SygnalSinusoidalny() {}
virtual double x(double t) ;
virtual void wypisz(std::ostream& s) const ;
/** \brief pobranie wartosci parametrow prywatnych
 *
 * \return double
 *
 */
double get_A() const {return _A;}
double get_w() const{return _w;}
double get_psi() const {return _psi;}

/** \brief zmiana wartosci parametrow prywatnych
 *
 * \param amplituda double
 * \return void
 *
 */
void set_A(double amplituda){_A=amplituda; }
void set_w(double czestotliwosc){_w=czestotliwosc;}
void set_psi(double przesfaz){_psi=przesfaz;}

private:
double _A;
double _w;
double _psi;
};
#endif // SYGNALSINUSOIDALNY_HPP
