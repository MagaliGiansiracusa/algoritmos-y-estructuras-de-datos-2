//
// Created by clinux01 on 04/05/22.
//

#ifndef SOLUCION_MULTICONJUNTO_HPP
#define SOLUCION_MULTICONJUNTO_HPP

template<class T>
class Multiconjunto{
public:
    Multiconjunto();
    void agregar(T x);
    int ocurrencias(T x) const;

private:
    std:: map<T, int>;
};

#endif //SOLUCION_MULTICONJUNTO_HPP


template<class T>
Multiconjunto <T>::Multiconjunto() {
}

template<class T>
void Multiconjunto <T>::agregar(T x){

}
template<class T>
int Multiconjunto<T>::ocurrencias(T x) const{

}

