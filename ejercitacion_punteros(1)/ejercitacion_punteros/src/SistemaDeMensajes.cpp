#include "SistemaDeMensajes.h"

SistemaDeMensajes::SistemaDeMensajes(){
    for( int i = 0; i < 4; i++){
        _conns[i] =NULL;
    }

};

void SistemaDeMensajes::registrarJugador(int id, string ip){
    if(registrado(id)){
        delete _conns[id];
    }
    ConexionJugador* p = new ConexionJugador(ip);
    _conns[id] = p;
};


void SistemaDeMensajes::enviarMensaje(int id, string mensaje){
    _conns[id]-> enviarMensaje(mensaje);
};


bool SistemaDeMensajes::registrado(int id) const {
    return _conns[id]!= NULL;
};

string SistemaDeMensajes::ipJugador(int id) const {
    return _conns[id]->ip();
}
SistemaDeMensajes:: ~SistemaDeMensajes() {
    for(int id = 0; id < 4; id++) {
        delete _conns[id];
        _conns[id]=NULL;
    }

}

void SistemaDeMensajes::desregistrarJugador(int id){
    delete _conns[id];
    _conns[id] = NULL;
    delete _p[id];
}

Proxy* SistemaDeMensajes::obtenerProxy(int id){
    Proxy* p = new Proxy(_conns[id]);
    _p.push_back(id);
    return p;
}

