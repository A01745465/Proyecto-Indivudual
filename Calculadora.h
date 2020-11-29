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
        empleado = empleado;
        desc_empleado = .15;
        descuento_extra = .0;
        cout<<"------------------------\n+\n+"<<endl;
        cout<<"Empleado: " + empleado<< endl;
        cout<<"Descuento de empleado: " + to_string(desc_empleado) + "del total"<< endl;
        cout<<"Descuento extra: " + to_string(descuento_extra)+ "del total" << endl;
        cout<<"+\n+\n------------------------"<<endl;
        cout<<""<< endl;
    }
    void modificar_desc_empleado(float desc, string pass){
        
        if (pass=="pass"){
            desc_empleado = desc;
            cout<< "El nuevo descuento ha sido establecido"<< endl;
            

        }
        else if ()
        {
            cout<< "Error, contrasena incorrecta."<< endl;
        }
        {
            cout<< "Error, contrasena incorrecta."<< endl;
        }
    }
    void modificar_desc_extra(float desc, string pass){

        if (pass=="pass"){
            descuento_extra = desc;
            cout<< "El nuevo descuento ha sido establecido"<< endl;
            

        }
        else{
            cout<< "Error, contrasena incorrecta."<< endl;
        }
    }
    float calculo(vector<Producto>carrito){
        

    }


    

    

};

#endif