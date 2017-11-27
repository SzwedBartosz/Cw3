#ifndef PROBKA_HPP
#define PROBKA_HPP // PEOBKA_HPP
#include <iostream>

class Probka {
    public:
 double t;
 double x;
 Probka();
 /** \brief operator zaprzyjazniony, wczytanie sygnalu
  *
  * \param stream std::ostream&
  * \param probka const Probka&
  * \return friend std::ostream&
  *
  */
 friend std::ostream& operator<<(std::ostream& stream,const Probka& probka)
 {
 stream<<probka.t <<" " <<probka.x  <<std::endl;
 return stream;
 }

 Probka(double _t,double _x);
};

#endif

