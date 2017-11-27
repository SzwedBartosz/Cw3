#ifndef SYGNAL_HPP
#define SYGNAL_HPP
#include <iostream>
#include "windows.h"
#include <fstream>


class Sygnal{
public:
/** \brief funkcja wirtualna sygnalu
 *
 * \return virtual
 *
 */
virtual ~Sygnal() {}
/** \brief funkcja wirtualna sygnalu dyskretnego
 *
 * \param t double
 * \return virtual double
 *
 */
virtual double x(double t) = 0;
/** \brief wypisanie wartosci sygnalu w zadanym czasie
 */
virtual void  wypisz (std::ostream & s) const = 0 ;
/** \brief funkcja zaprzyjazniona wczytujaca sygnal
 */
friend std::ostream& operator <<(std::ostream& s, const Sygnal&
sygnal) {
/** \brief wypisanie sygnalu
 */
sygnal.wypisz(s);
return s;
}
};







#endif
