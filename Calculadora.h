//Clase Calculadora        PI

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
        
        if( ((pass=="pass") && (desc < .99))) {
            desc_empleado = desc;
            cout<< "El nuevo descuento ha sido establecido"<< endl;
            

        }
        else if (pass != "pass")
        {
            cout<< "Error, contrasena incorrecta."<< endl;
        }
         else if (desc > 1)
        {
            cout<< "Error, no se puede establecer ese descuento."<< endl;
        }
        
    }
    void modificar_desc_extra(float desc, string pass){

        if ((pass=="pass") && (desc < .99) ) {
            descuento_extra = desc;
            cout<< "El nuevo descuento ha sido establecido"<< endl;

        }
        else if (pass != "pass")
        {
            cout<< "Error, contrasena incorrecta."<< endl;
        }
        else if (desc > 1)
        {
            cout<< "Error, no se puede establecer ese descuento."<< endl;
        }
        
        
    
    }
    float calculo(vector<Producto>carrito,float suma,float desc){
        suma = 0;
        desc = 0;
        
         for(size_t i = 0; i<carrito.size(); i++){
             
            suma = 0 + carrito[i].consulta_precio();
         }
         

         if (bool empleado = false ){
             suma = suma;
         } 
         if (bool empleado = true){
             desc = desc_empleado + descuento_extra;
             desc = suma * desc;
             suma = suma - desc;
             
         }
         return suma;

        }
       

    


    

    

};

#endif