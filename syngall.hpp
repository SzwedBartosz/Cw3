#ifndef SYNGALL_HPP
#define SYNGALL_HPP
#include <vector>
#include "probkaa.hpp"
#include <string>


class syngall {
public:

/** \brief podzial na probki
 */
void dodajProbke ( const Probka& p);
 /** \brief liczenie ilosci probek
  *
  * \return int
  *
  */
 int iloscProbek() const;
 /** \brief parametry sygnalu poszczegolnych probek
  *
  * \param i int
  * \return Probka&
  *
  */
 Probka& operator[](int i);
 /** \brief stala wartosc probki
  *
  * \param i int
  * \return const Probka&
  *
  */
 const Probka& operator[](int i) const;
 /** \brief operator zaprzyjazniony, wczytujacy sygnal
  *
  * \param stream std::ostream&
  * \param sygnal const syngall&
  * \return friend std::ostream&
  *
  */
 friend std::ostream& operator<<(std::ostream& stream, const syngall& sygnal);


private:
/** \brief tworzenie tablicy z probek
 */
std::vector <Probka> _zmienne;
};

#endif
