#ifndef __miconjunto__
#define __miconjunto__
#include <iostream>
#include "tadpersona.h"
using namespace std;

template<typename T>
class Multiconjunto {
private:
    T c[100];
    int num;
public:
    Multiconjunto();
    bool esVacio() const;
    int cardinalidad() const;
    void anade(const T&objeto);
    void elimina(const T& objeto);
    bool pertenece(const T& objeto) const;
    void mostrar() const;
};


#endif // __MAIN_H__

