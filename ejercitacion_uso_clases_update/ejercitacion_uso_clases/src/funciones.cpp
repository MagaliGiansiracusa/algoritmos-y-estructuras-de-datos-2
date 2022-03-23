#include <vector>
#include "algobot.h"

using namespace std;

// Ejercicio 1

bool pertenece(vector<int> s, int n){
    bool p= false;
    for (int i = 0; i <s.size() ; i++i) {
        if (s[i]==n){
            p= true;
        }
    }return p;
}
vector<int> quitar_repetidos(vector<int> s) {
    for(int i =0, i<s.size(), i++){

        }

}
    return vector<int>();
}


// Ejercicio 2
vector<int> quitar_repetidos_v2(vector<int> s) {
    return vector<int>();
}

// Ejercicio 3
bool mismos_elementos(vector<int> a, vector<int> b) {
    for (int i = 0; i <b.size() ; ++i) {
        if(pertenece())

    }
    return true;
}

// Ejercicio 4
bool mismos_elementos_v2(vector<int> a, vector<int> b) {
    return true;
}

// Ejercicio 5
map<int, int> contar_apariciones(vector<int> s) {
    return map<int, int>();
}

// Ejercicio 6
vector<int> filtrar_repetidos(vector<int> s) {
    return vector<int>();
}

// Ejercicio 7
set<int> interseccion(set<int> a, set<int> b) {
    return set<int>();
}

// Ejercicio 8
map<int, set<int>> agrupar_por_unidades(vector<int> s) {
    return map<int, set<int>>();
}

// Ejercicio 9
vector<char> traducir(vector<pair<char, char>> tr, vector<char> str) {
    return vector<char>();
}

// Ejercicio 10
bool integrantes_repetidos(vector<Mail> s) {
    return true;
}

// Ejercicio 11
map<set<LU>, Mail> entregas_finales(vector<Mail> s) {
  return map<set<LU>, Mail>();
}

#include <vector>
#include "algobot.h"

using namespace std;

// Ejercicio 1

bool pertenece(vector<int> s, int n){
    bool p= false;
    for (int i = 0; i <s.size() ; i++i) {
        if (s[i]==n){
            p= true;
        }
    }return p;
}
vector<int> quitar_repetidos(vector<int> s) {
    for(int i =0, i <s.size(), i++){

        }

}
    return vector<int>();
}


// Ejercicio 2
vector<int> quitar_repetidos_v2(vector<int> s) {
    set<int> set_s;
    for (int i = 0; i <s.size() ; ++i) {
        set_s.insert(s[i]);
    }
    return set_s;
}

// Ejercicio 3
bool mismos_elementos(vector<int> a, vector<int> b) {
    for (int i = 0; i <b.size() ; ++i) {
        if(pertenece(b,b[i]) && pertenece(a,b[i])){

        }
    }
    return true;
}

// Ejercicio 4
bool mismos_elementos_v2(vector<int> a, vector<int> b) {
    set<int> set_a;
    set<int> set_b;
    for (int i = 0; i < a.size(); ++i) {
        set_a.insert(a[i]);
    }
    for (int i = 0; i <b.size(); ++i) {
        set_b.insert(b[i]);
    }
    if(set_a.size()==set_b.size()){
        return true;
    }else{
        return false;
    }
}

// Ejercicio 5
map<int, int> contar_apariciones(vector<int> s) {
    int cont =0;
    for (int i = 0; i < s.size(); ++i) {
        if (pertenece(s[i],s){

        })

    }
    return map<int, int>();
}

// Ejercicio 6
int cantidad_repetidos(int s, vector<int> v){
    int cont = 0;
    for (int i = 0; i < v.size(); ++i) {
        if (v[i]==s){
            cont ++;
        }
    } return cont;
}
vector<int> filtrar_repetidos(vector<int> s) {
    vector<int>filtrados;
    for (int i = 0; i < s.size(); ++i) {
        if (cantidad_repetidos(s[i],s)==1){
            filtrados.push_back(s[i]);
        }
    }
    return filtrados;
}
// Ejercicio 7
set<int> interseccion(set<int> a, set<int> b) {
    set<int> set_a;
    for (int i = 0; i <a.size() ; ++i) {
        set_a.insert(a[i]);
    }
    vector<int>res;
    for (int i = 0; i < b.size() ; ++i) {
        if (set_a.count(b[i])==1){
            res.push_back(b[i]);
        }
    }
    return res;
}

// Ejercicio 8
map<int, set<int>> agrupar_por_unidades(vector<int> s) {
    return map<int, set<int>>();
}

// Ejercicio 9
vector<char> traducir(vector<pair<char, char>> tr, vector<char> str) {
    vector<int>result;
    for (int i = 0; i <str.size() ; ++i) {
        int j =0;
        while (str[i]== tr[j].first){
            
            j++
        }
                result.push_back(tr[j].second)
            }
        }

    }

    return result;
}

// Ejercicio 10
bool integrantes_repetidos(vector<Mail> s) {
    return true;
}

// Ejercicio 11
map<set<LU>, Mail> entregas_finales(vector<Mail> s) {
  return map<set<LU>, Mail>();
}

