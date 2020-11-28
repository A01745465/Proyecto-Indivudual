//Clase Producto        PI

#ifndef CALCULADORA_H
#define CALCULADORA_H
#include "Producto.h"
#include "Venta.h"
#include <iostream>
#include <string>

using namespace std;
class Calculadora{
    float desc_empleado;
    bool empleado;
    float descuento_extra;
    public:
    

    Calculadora(float desc_empleado, bool empleado ,float descuento_extra){
        empleado = ;
        desc_empleado = .25;
        descuento_extra = .10;
        cout<<"------------------------\n+\n+"<<endl;
        cout<<"Empleado: " + empleado<< endl;
        cout<<"Descuento de empleado: " + to_string(desc_empleado)<< endl;
        cout<<"Descuento extra: " + to_string(descuento_extra)<< endl;
        cout<<"+\n+\n------------------------"<<endl;
        cout<<""<< endl;
    }
    


    

    

};

#endif