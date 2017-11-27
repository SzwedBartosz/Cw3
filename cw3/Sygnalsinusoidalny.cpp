#include "Sygnalsinusoidalny.hpp"
#include <cmath>
#include <iostream>

using namespace std;

 double SygnalSinusoidalny::x(double t) {
return _A * sin(_w * t + _psi);
}
 void SygnalSinusoidalny::wypisz(std::ostream& s)const { using namespace std;
s << "Sygnal sinusoidalny" << endl;
s << " A=" << _A << endl;
s << " w=" << _w << endl;
s << " psi=" << _psi << endl;
}
