#include "miconjunto.h"

template <typename T> Multiconjunto<T>::Multiconjunto(){
    this->num = 0;
}

template <typename T> bool Multiconjunto<T>::esVacio()const{
    if(this->num==0){
        return true;
    }
        return false;
}

template <typename T> int Multiconjunto<T>::cardinalidad()const{
    return num;
}

template <typename T> void Multiconjunto<T>::anade(const T& objeto){
    if(num<100){
        c[num]=objeto;
        num ++;
    }
}

template <typename T> void Multiconjunto<T>::elimina(const T& objeto){
    int i=0;
    while (i<num){
        if (c[i]==objeto){
            for(int j = i;j <num -1; j++){
                c[j] = c[j + 1];
            }
            num--;
            i--;
        }
        i++;
    }
}

template <typename T> bool Multiconjunto<T>::pertenece(const T& objeto)const{
    bool pertenece=false;
    int i=0;
    while (i<num){
        if (c[i]==objeto){
            pertenece=true;
        }else{
            i++;
        }
    }
    return pertenece;
}

//template <typename T> void Multiconjunto<T>::mostrar() const{
//    cout<<"Lista: "<<endl;
//    for(int i = 0; i < num;i++){
//        cout<< c[i]<<endl;
//    }
//}


template class Multiconjunto<int>;
template class Multiconjunto<char>;
template class Multiconjunto<double>;
template class Multiconjunto<long>;
template class Multiconjunto<short>;
template class Multiconjunto<bool>;
template class Multiconjunto<Persona>;
