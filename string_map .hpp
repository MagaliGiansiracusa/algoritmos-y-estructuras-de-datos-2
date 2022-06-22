template <typename T>
string_map<T>::string_map(){
    raiz= new Nodo();
    _size =0;
}

template <typename T>
string_map<T>::string_map(const string_map<T>& aCopiar) : string_map() { *this = aCopiar; } // Provisto por la catedra: utiliza el operador asignacion para realizar la copia.

template <typename T>
string_map<T>& string_map<T>::operator=(const string_map<T>& d) {
    if(raiz!= nullptr){
        delete raiz;
    }

    raiz = new Nodo(*d.raiz);
    _size= d._size;
    return *this ;
}

template <typename T>
string_map<T>::~string_map(){
    _size=0;
    if(raiz != nullptr)
        delete raiz;

    raiz = nullptr;
    // COMPLETAR
}

template <typename T>
T& string_map<T>::operator[](const string& clave){
    Nodo* nodo_actual = raiz;
    Nodo* nodo_previo= nullptr;
    int i =0;
    while (i<clave.length() && nodo_actual != nullptr){
        nodo_previo=nodo_actual;
        nodo_actual= (nodo_actual->siguientes)[clave[i]];
        i++;
    }
    if(i==clave.length() && nodo_actual!= nullptr){
        return nodo_actual->definicion;
    }else{
        i--;
        nodo_actual=nodo_previo;
        while(i<clave.length()){
            Nodo* p = new Nodo();
            (nodo_actual->siguientes[clave[i]]) = p;
            nodo_actual=p;
            i++;
        }
        return nodo_actual->definicion;
    }

}

template <typename T>
void string_map<T>::insert(const pair<string, T>& t){
    string clave= t.first;
    if(raiz == nullptr){
        Nodo* p = new Nodo();
        raiz = p;
    }
    Nodo* nodo_actual = raiz;
    Nodo* nodo_previo= nullptr;
    int i =0;
    while (i<clave.length() && nodo_actual != nullptr){
        nodo_previo=nodo_actual;
        nodo_actual= (nodo_actual->siguientes)[clave[i]];
        i++;
    }
    if(i==clave.length() && nodo_actual!= nullptr){
        if(nodo_actual->definicion != nullptr){
            delete nodo_actual->definicion;
        }
        T* aux = new T(t.second);
        nodo_actual->definicion = aux;
    }else{
        i--;
        nodo_actual=nodo_previo;
        while(i<clave.length()){
            Nodo* p = new Nodo();
            (nodo_actual->siguientes[clave[i]]) = p;
            nodo_actual=p;
            i++;
        }
        nodo_actual->definicion= new T(t.second);
    }
    _size++;
}

template <typename T>
int string_map<T>::count(const string& clave) const{
    Nodo* nodo_actual = raiz;

    int i =0;
    while (i<clave.length() && nodo_actual != nullptr){
        nodo_actual= (nodo_actual->siguientes)[clave[i]];
        i++;
    }
    if(i==clave.length() && nodo_actual!= nullptr && nodo_actual->definicion!= nullptr){
        return 1;
    }else{
        return 0;
    }


}

template <typename T>
const T& string_map<T>::at(const string& clave) const {
    Nodo* nodo_actual = raiz;

    int i =0;
    while (i<clave.length() && nodo_actual != nullptr){
        nodo_actual= (nodo_actual->siguientes)[clave[i]];
        i++;
    }
    if(i==clave.length() && nodo_actual!= nullptr){
        return nodo_actual->definicion;
    }else{
        return nullptr;
    }
}

template <typename T>
T& string_map<T>::at(const string& clave) {
    Nodo* nodo_actual = raiz;

    int i =0;
    while (i<clave.length() && nodo_actual != nullptr){
        nodo_actual= (nodo_actual->siguientes)[clave[i]];
        i++;
    }

    return *(nodo_actual->definicion);

}

template <typename T>
void string_map<T>::erase(const string& clave) {
    Nodo* nodo_actual = raiz;
    Nodo* nodo_previo= nullptr;
    int indice_previo=0;
    int i =0;
    while (i<clave.length() && nodo_actual != nullptr){
        if(nodo_actual->definicion != nullptr || nodo_actual->hijos() > 1 ){
            nodo_previo=nodo_actual;
            indice_previo=i;
        }
        nodo_actual= (nodo_actual->siguientes)[clave[i]];
        i++;
    }

    if(i==clave.length() && nodo_actual!= nullptr){
        if(nodo_actual->definicion != nullptr || nodo_actual->hijos() > 1 ){
            delete nodo_actual->definicion;
            nodo_actual->definicion = nullptr;
            _size--;
            return;
        }
        nodo_actual=nodo_previo->siguientes[clave[i]];
        delete nodo_actual;
        _size--;
    }

    // COMPLETAR
}


template <typename T>
int string_map<T>::size() const{
    return _size;
}

template <typename T>
bool string_map<T>::empty() const{
    return _size==0;
}