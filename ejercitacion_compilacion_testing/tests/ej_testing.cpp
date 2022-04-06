#include "gtest-1.8.1/gtest.h"
#include "../src/Libreta.h"
#include "../src/Truco.h"
#include <map>
#include <cmath>

using namespace std;

// Ejercicio 4
TEST(Aritmetica, suma) {
    int calculos = 15 + 7;
    int respuesta = 22;
    EXPECT_EQ( calculos, respuesta);
}

// Ejercicio 5
TEST( Aritmetica, potencia) {
    EXPECT_EQ(pow(10,2), 100);
}

// Ejercicios 6..9
TEST(Aritmetica, potencia_general) {
    for (int i = -5; i < 6; i++) {
            EXPECT_EQ(pow(i, 2), i * i);
        }
    }
TEST(Map, obtener){
    map<int,int> m;
    m.insert(make_pair(4,3));
    EXPECT_EQ(m.at(4), 3);
}

TEST(Map, definir){
    map<int,int> m;
    EXPECT_EQ(m.count(5),0);
    m.insert(make_pair(5,8));
    EXPECT_EQ(m.at(5),8);
}

