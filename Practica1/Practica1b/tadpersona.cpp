#include "tadpersona.h"

Persona::Persona(const string& n , int e ){
    nombre=n;
    edad=e;
}
 const string& Persona::getNombre()const{
    return nombre;
}
int Persona::getEdad()const{
    return edad;
}

void Persona::setNombre(const string& m){
    nombre=m;
}

void Persona::setEdad(int e){
    edad=e;
}

bool Persona::operator==(const Persona& p)const{
    bool soniguales=false;
    if(nombre==p.nombre &&this ->edad==p.edad){
        soniguales=true;
    }
    return soniguales;
}
