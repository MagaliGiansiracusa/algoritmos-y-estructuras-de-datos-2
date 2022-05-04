//
// Created by clinux01 on 04/05/22.
// Ejercicio 1: Pasar a templates
#include<string>

using namespace std;

template<class T>
T cuadrado(T x) {
    return x * x;
}

// Ejercicio 2: Pasar a templates
template<class Contenedor, class Elem>
bool contiene(Contenedor s, Elem c) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) {
            return true;
        }
    }
    return false;
}

//EJ3
template<class Contenedor>
bool esPrefijo(Contenedor a, Contenedor b) {
    int i;
    if(a.size()>b.size()){
        return false;
    }else{
        for(int i = 0; i < a.size(); i++){
            if(a[i]!= b[i]){
                return false;
            }
        }
    }return true;

}

//EJ4
template<class Contenedor, class Elem>
Elem maximo(Contenedor c){
    int max;
    for(int i = 0; i< c.size(); i++){
        if(c[i]>c[i+1]){
            max = c[i];
        }else{
            max;
        }
    }return max;
}
