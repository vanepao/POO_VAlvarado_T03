#include <iostream>
#include "Fraccion.h"

int main() {
//f1 es fracción 1, f2 es fracción 2.
    Fraccion f1(24,6);
    Fraccion f2(14,8);
    Fraccion totalsum;
    totalsum= f1 +f2;
    Fraccion totalrest= f1-f2;
    Fraccion totalmult= f1*f2;
    Fraccion totaldiv= f1/f2;

    //se declara una variable tipo boolean.
    bool comparadores;
    //Aquí puedes introducir los comparadores lógicos
    f1<f2? comparadores=true:comparadores= false;

    bool comparamayor;
    f1>f2? comparamayor=true:comparamayor= false;

    bool comparamenorigual;
    f1<=f2? comparamenorigual=true:comparamenorigual= false;

    bool comparamayorigual;
    f1>=f2? comparamayorigual=true:comparamayorigual= false;

    bool igual;
    f1==f2? igual=true:igual= false;

    bool diferente;
    f1!=f2? diferente=true:diferente= false;

    std::cout<<"\n";
    std::cout <<"TOTAL SUMA: "<< totalsum.to_String() << std::endl;
    std::cout<<"\n";
    std::cout <<"TOTAL RESTA: " <<totalrest.to_String()<<"\n";
    std::cout<<"\n";
    std::cout<<"TOTAL MULTIPLICACIÓN: "<<totalmult.to_String();
    std::cout<<"\n";
    std::cout<<"\n";
    std::cout<<"TOTAL DIVISIÓN: " <<totaldiv.to_String()<<"\n";
    std::cout<<"\n";

    std::cout<<"¿FRACCIÓN 1 ES MENOR QUE FRACCIÓN 2?" <<"\n";
    std::cout<<f1.to_String()<<"<" <<f2.to_String()<<"\n";
    if(comparadores==true){
        std::cout<<"This is: TRUE"; }
    else{ std::cout<<"This is: FALSE";
    };
    std::cout<<"\n";
    std::cout<<"¿FRACCIÓN 1 ES MAYOR QUE FRACCIÓN 2?" <<"\n";
    std::cout<<f1.to_String()<<">" <<f2.to_String()<<"\n";
    if(comparamayor==true){
        std::cout<<"This is: TRUE"; }
    else{ std::cout<<"This is: FALSE";
    };
    std::cout<<"\n";
    std::cout<<"¿FRACCIÓN 1 ES MENOR IGUAL QUE FRACCIÓN 2?" <<"\n";
    std::cout<<f1.to_String()<<"<=" <<f2.to_String()<<"\n";
    if(comparamenorigual==true){
        std::cout<<"This is: TRUE"; }
    else{ std::cout<<"This is: FALSE";
    };
    std::cout<<"\n";
    std::cout<<"¿FRACCIÓN 1 ES MAYOR IGUAL QUE FRACCIÓN 2?" <<"\n";
    std::cout<<f1.to_String()<<">=" <<f2.to_String()<<"\n";
    if(comparamayorigual==true){
        std::cout<<"This is: TRUE"; }
    else{ std::cout<<"This is: FALSE";
    };
    std::cout<<"\n";
    std::cout<<"¿FRACCIÓN 1 ES IGUAL QUE FRACCIÓN 2?" <<"\n";
    std::cout<<f1.to_String()<<"==" <<f2.to_String()<<"\n";
    if(igual==true){
        std::cout<<"This is: TRUE"; }
    else{ std::cout<<"This is: FALSE";
    };
    std::cout<<"\n";
    std::cout<<"¿FRACCIÓN 1 ES DIFERENTE QUE FRACCIÓN 2?" <<"\n";
    std::cout<<f1.to_String()<<"!=" <<f2.to_String()<<"\n";
    if(diferente==true){
        std::cout<<"This is: TRUE"; }
    else{ std::cout<<"This is: FALSE";
    };
    std::cout<<"\n";


}