//
// Created by Vanessa Paola Alvarado on 22/03/18.
//

#include "Fraccion.h"
Fraccion::Fraccion() {
    numerador,denominador=1;
}

Fraccion::Fraccion(int numerador, int denominador) {
    this->numerador=numerador;
    this->denominador=denominador;

}


//OPERADOR QUE CONTIENE LA DEFINICIÓN DE SUMA
Fraccion operator + (const Fraccion &n1, const Fraccion &n2){
    Fraccion fr;
        fr.denominador= n1.denominador*n2.denominador;
        fr.numerador= n1.numerador *n2.denominador + n2.numerador * n1.denominador;
        return fr;
}
//OPERADOR QUE CONTIENE LA DEFINICIÓN DE RESTA
Fraccion operator-(const Fraccion &n1, const Fraccion &n2) {
    Fraccion fr;
    fr.denominador= n1.denominador*n2.denominador;
    fr.numerador=n1.numerador * n2.denominador - n2.numerador* n1.denominador;
    return fr;

}
Fraccion operator*(const Fraccion &n1, const Fraccion &n2){
    Fraccion fr;
    fr.denominador= n1.denominador*n2.denominador;
    fr.numerador= n1.numerador*n2.numerador;
    return fr;
}
Fraccion operator / (const Fraccion &n1, const Fraccion &n2){
    Fraccion fr;
    fr.numerador= n1.numerador*n2.denominador;
    fr.denominador= n1.denominador*n2.numerador;
    return fr;
}
bool operator <(const Fraccion &n1, const Fraccion &n2){

    float a= n1.numerador/n1.denominador;
    float b= n2.numerador/n2.denominador;
    return a<b;
}
bool operator >(const Fraccion &n1, const Fraccion &n2){
    float a= n1.numerador/n1.denominador;
    float b= n2.numerador/n2.denominador;
    return a<b;
}
bool operator <=(const Fraccion &n1, const Fraccion &n2){
    float a= n1.numerador/n1.denominador;
    float b= n2.numerador/n2.denominador;
    return a<=b;
}
bool operator >=(const Fraccion &n1, const Fraccion &n2){
    float a= n1.numerador/n1.denominador;
    float b= n2.numerador/n2.denominador;
    return a>=b;
}
bool operator ==(const Fraccion &n1, const Fraccion &n2){
    float a= n1.numerador/n1.denominador;
    float b= n2.numerador/n2.denominador;
    return a==b;
}
bool operator !=(const Fraccion &n1, const Fraccion &n2){
    float a= n1.numerador/n1.denominador;
    float b= n2.numerador/n2.denominador;

    return a!=b;
}
std::string Fraccion::to_String() {

    return std::to_string(numerador) + "/" + std::to_string(denominador);
}


