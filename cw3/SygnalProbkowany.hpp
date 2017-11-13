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
 Probka& operator[](int i);
 const Probka& operator[](int i) const;
 friend std::ostream& operator<<(std::ostream& stream, const SygnalProbkowany& sygnal);
virtual ~SygnalProbkowany(){}

private:
std::vector <Probka> _zmienne;
};

#endif
