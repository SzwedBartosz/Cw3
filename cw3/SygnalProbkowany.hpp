#ifndef SYGNALPROBKOWANY_HPP
#define SYGNALPROBKOWANY_HPP
#include <vector>
#include "probkaa.hpp"
#include <string>
#include "Sygnal.hpp"

class SygnalProbkowany : public Sygnal

{

public:
    SygnalProbkowany(){}
    virtual double x(double t);
    virtual void  wypisz (std::ostream & s) const;
void dodajProbke ( const Probka& p);


 int iloscProbek() const;
 /** \brief stworzenie kolejnej probki
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
 /** \brief wczytanie sygnalu probkowanego
  *
  * \param stream std::ostream&
  * \param sygnal const SygnalProbkowany&
  * \return friend std::ostream&
  *
  */
 friend std::ostream& operator<<(std::ostream& stream, const SygnalProbkowany& sygnal);
/** \brief stworzenie wirtualnego sygnalu probkowanego
 *
 * \return virtual
 *
 */
virtual ~SygnalProbkowany(){}

private:
/** \brief zapisanie probki w postaci wektora
 */
std::vector <Probka> _zmienne;
};

#endif
