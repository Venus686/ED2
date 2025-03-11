#include <iostream>
#include "miconjunto.h"
#include "tadpersona.h"
using namespace std;

int main()
{
//    Multiconjunto<int> conj;
//    conj.anade(12);
//    conj.anade(1);
//    conj.anade(34);
//    conj.anade(1);
//    conj.anade(1);
//    conj.anade(1);
//    conj.anade(1);
//    conj.mostrar();
//    cout<<conj.cardinalidad()<<endl;
//    cout<<conj.pertenece(1)<<endl;
//    cout<<conj.pertenece(2)<<endl;
//    conj.elimina(1);
//    cout<<conj.pertenece(1)<<endl;
//    conj.mostrar();


    Persona P("Natalia", 19);
    Multiconjunto<Persona> p2;
    p2.anade(P);
    cout<< P.getEdad()<< " "<< P.getNombre()<<endl;

    return 0;
}
