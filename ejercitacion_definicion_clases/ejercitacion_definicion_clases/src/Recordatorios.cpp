#include <iostream>
#include <list>

using namespace std;

using uint = unsigned int;

// Pre: 0 <= mes < 12
uint dias_en_mes(uint mes) {
    uint dias[] = {
        // ene, feb, mar, abr, may, jun
        31, 28, 31, 30, 31, 30,
        // jul, ago, sep, oct, nov, dic
        31, 31, 30, 31, 30, 31
    };
    return dias[mes - 1];
}

// Ejercicio 7, 8, 9 y 10

// Clase Fecha

class Fecha {
  public:
    Fecha(int mes, int dia);
    int mes();
    int dia();
    bool operator==(Fecha o);
    bool operator<(Fecha o); // para agenda
    void incrementar_dia();

  private:
    int mes_;
    int dia_;
};

Fecha::Fecha(int mes, int dia) : mes_(mes), dia_(dia) {};

int Fecha::mes(){
    return mes_;
};

int Fecha::dia(){
    return dia_;
};


ostream& operator<<(ostream& os, Fecha f) {
    os << f.dia() << "/" << f.mes();
    return os;
}


bool Fecha::operator==(Fecha o) {
    bool igual_dia = this->dia() == o.dia();
    bool igual_mes = this->mes() == o.mes();
    return igual_dia and igual_mes;
}


// para agenda

bool Fecha::operator<(Fecha o) {
    bool igual_dia = this->dia() <o.dia();
    bool igual_mes = this->mes() < o.mes();
    return igual_dia or igual_mes;
}

void Fecha::incrementar_dia(){
    if (dia_ < dias_en_mes(mes_)){
        dia_++;
    } else{
        dia_ = 1;
        mes_++;
    }
};


// Ejercicio 11, 12
// Clase Horario

class Horario {
    public:
        Horario(uint hora, uint min);
        uint hora();
        uint min();
        bool operator==(Horario o);
        bool operator<(Horario o);

    private:
        uint hora_;
        uint min_;
};

Horario::Horario(uint hora, uint min) : hora_(hora), min_(min){};

uint Horario::hora(){
    return hora_;
};

uint Horario::min(){
    return min_;
};


ostream& operator<<(ostream& os, Horario h) {
    os << h.hora() << ":" << h.min();
    return os;
}

bool Horario::operator==(Horario o) {
    bool igual_hora = this->hora() == o.hora();
    bool igual_min = this->min() == o.min();
    return igual_min and igual_hora;
}

bool Horario::operator<(Horario o) {
    bool horaMenor = this->hora() < o.hora();
    bool minMenor = this->min() < o.min();
    return horaMenor or minMenor;
}

// Ejercicio 13

using Mensaje = string;

class Recordatorio{
    public:
        Recordatorio(Fecha f, Horario h, Mensaje m);
        Fecha fecha();
        Horario horario();
        Mensaje mensaje();
        bool operator<(Recordatorio rec);


    private:
        Fecha f_;
        Horario h_;
        Mensaje m_;

};

Recordatorio::Recordatorio(Fecha f, Horario h, Mensaje m) : f_(f), h_(h), m_(m) {};


Horario Recordatorio::horario() {
    return h_;
}
Fecha Recordatorio::fecha() {
    return f_;
}
string Recordatorio::mensaje() {
    return m_;
}

// para agenda 
bool Recordatorio::operator<(Recordatorio rec) {
    bool fechaMenor = this->fecha() < rec.fecha();
    bool igualFecha = this->fecha() == rec.fecha();
    bool horarioMenor = this->horario() < rec.horario();
    return fechaMenor || (igualFecha & horarioMenor);
}


ostream& operator<<(ostream& os, Recordatorio r) {
    os << r.mensaje() << " @ " << r.fecha() << " " << r.horario();
    return os;
}


// Ejercicio 14

// Clase Agenda
class Agenda {
    public:
        Agenda(Fecha fecha_inicial);
        Fecha hoy();
        list<Recordatorio> recordatorios_de_hoy();
        void agregar_recordatorio(Recordatorio rec);
        void incrementar_dia();


    private:
        Fecha hoy_;
        list<Recordatorio> recordatorios_;

};

Agenda::Agenda(Fecha fecha_inicial) : hoy_(fecha_inicial),recordatorios_() {};

Fecha Agenda::hoy() {
    return hoy_;
}

list<Recordatorio> Agenda::recordatorios_de_hoy() {
    list<Recordatorio> eventos_hoy;
    for (Recordatorio r : recordatorios_) {
        if (r.fecha() == hoy_ ){
            eventos_hoy.push_back(r);
        }
    }
    return eventos_hoy;
}

void Agenda::agregar_recordatorio(Recordatorio rec) {
    recordatorios_.push_back(rec);
}
void Agenda::incrementar_dia() {
    hoy_.incrementar_dia();
}

ostream& operator<<(ostream& os, Agenda a) {
    list<Recordatorio> eventos = a.recordatorios_de_hoy();
    eventos.sort();
    os << a.hoy() << endl;
    os << "==" << endl;
    for(Recordatorio r : eventos) {
            os << r << endl;
    }
    return os;
}




