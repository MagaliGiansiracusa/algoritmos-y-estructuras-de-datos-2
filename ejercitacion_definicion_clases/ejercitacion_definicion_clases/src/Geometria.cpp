#include <iostream>

using namespace std;

using uint = unsigned int;

// Ejercicio 1

class Rectangulo {
    public:
        Rectangulo(uint alto, uint ancho);
        uint alto();
        uint ancho();
        float area();

    private:
        int alto_;
        int ancho_;

};

Rectangulo::Rectangulo(uint alto, uint ancho) : /* Completar */ {};

uint Rectangulo::alto() {
    // Completar
}

// Completar definición: ancho

// Completar definición: area

// Ejercicio 2

// Clase Elipse

// Ejercicio 3

class Cuadrado {
    public:
        Cuadrado(uint lado);
        uint lado();
        float area();

    private:
        Rectangulo r_;
};

Cuadrado::Cuadrado(uint lado): r_(lado, lado) {}

uint Cuadrado::lado() {
    // Completar
}

float Cuadrado::area() {
    // Completar
}

// Ejercicio 4

// Clase Circulo


// Ejercicio 5

ostream& operator<<(ostream& os, Rectangulo r) {
    os << "Rect(" << r.ancho() << ", " << r.alto() << ")";
    return os;
}

// ostream Elipse

// Ejercicio 6

Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@MagaliGiansiracusa 
IsaacEdgarCamacho
/
AyED2
Public
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
AyED2/Taller/02/src/Geometria.cpp

isaac Camacho agrego hasta el ejercicio 9
Latest commit 93873b6 on 22 Dec 2021
 History
 0 contributors
Executable File  136 lines (105 sloc)  2.28 KB
   
#include <iostream>

using namespace std;

using uint = unsigned int;

// Ejercicio 1

class Rectangulo {
    public:
        Rectangulo(uint alto, uint ancho);
        uint alto();
        uint ancho();
        float area();
        //ostream& operator<<(ostream& os, Rectangulo r);

    private:
        int alto_;
        int ancho_;

};

Rectangulo::Rectangulo(uint alto, uint ancho): alto_(alto),
                                               ancho_(ancho) {};

uint Rectangulo::alto() {
    return alto_;
}

// Completar definición: ancho
uint Rectangulo::ancho(){
    return ancho_;
}
// Completar definición: area
float Rectangulo::area(){
    return ancho() * alto();
}
// Ejercicio 2

// Clase Elipse
class Elipse{
    public:
        Elipse(uint, uint);
        uint r_a();
        uint r_b();
        float area();
    private:
        uint a;
        uint b;
        float pi;
};

Elipse::Elipse(uint ra, uint rb):a(ra),b(rb){
    pi = 3.14;
}

uint Elipse::r_a(){
    return a;    
}

uint Elipse::r_b(){
    return b;
}

float Elipse::area(){
    return a * b * pi;
}
// Ejercicio 3

class Cuadrado {
    public:
        Cuadrado(uint lado);
        uint lado();
        float area();

    private:
        Rectangulo r_;
};

Cuadrado::Cuadrado(uint lado): r_(lado, lado) {}

uint Cuadrado::lado() {
    return r_.alto();
}

float Cuadrado::area() {
    return r_.area();
}

// Ejercicio 4

// Clase Circulo
class Circulo{
    public:
        Circulo(uint radio);
        uint radio();
        float area();
    private:
        Elipse e;

};

Circulo::Circulo(uint radio):e(radio,radio){}

uint Circulo::radio(){
    return e.r_a();
}

float Circulo::area(){
    return e.area();
}

// Ejercicio 5

ostream& operator<<(ostream& os, Rectangulo r) {
    os << "Rect(" << r.alto() << ", " << r.ancho() << ")";
    return os;
}

// ostream Elipse
ostream& operator<<(ostream& os, Elipse r) {
    os << "Elipse(" << r.r_a() << ", " << r.r_b() << ")";
    return os;
}
// Ejercicio 6

ostream& operator<<(ostream& os, Cuadrado r) {
    os << "Cuad(" << r.lado()<< ")";
    return os;
}

ostream& operator<<(ostream& os, Circulo r) {
    os << "Circ(" << r.radio() << ")";
    return os;
}

© 2022 GitHub, Inc.
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
Loading complete

