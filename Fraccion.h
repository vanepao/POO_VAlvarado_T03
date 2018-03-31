//
// Created by Vanessa Paola Alvarado on 22/03/18.
//

#ifndef TAREA3_FRACCION_H
#define TAREA3_FRACCION_H

#include <iostream>


class Fraccion {


    friend Fraccion operator +(const Fraccion &n1, const Fraccion &n2);
    friend Fraccion operator -(const Fraccion &n1, const Fraccion &n2);
    friend Fraccion operator * (const Fraccion &n1, const Fraccion &n2);
    friend Fraccion operator /(const Fraccion &n1, const Fraccion &n2);
    friend bool operator <(const Fraccion &n1, const Fraccion &n2);
    friend bool operator >(const Fraccion &n1, const Fraccion &n2);
    friend bool operator <=(const Fraccion &n1, const Fraccion &n2);
    friend bool operator >=(const Fraccion &n1, const Fraccion &n2);
    friend bool operator ==(const Fraccion &n1, const Fraccion &n2);
    friend bool operator !=(const Fraccion &n1, const Fraccion &n2);

private:
    int numerador, denominador;


public:
    //Metodos
    Fraccion();
    Fraccion (int numerador, int denominador);

    std::string to_String();
    int capsulasuma;

};


#endif //TAREA3_FRACCION_H



