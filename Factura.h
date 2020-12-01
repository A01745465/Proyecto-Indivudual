//Clase Producto                 PI

#ifndef FACTURA_H
#define FACTURA_H
#include "Producto.h"
#include "Venta.h"
#include <iostream>
#include <string>
using namespace std;

class Factura{
    bool fac;
    string Producto;
    float precio;
    int unidades;
    public:

    Factura(bool fac, string Producto, float precio,int unidades ){
        fac = false;
        this -> Producto = Producto;
        precio = 0;
        unidades = 0;
    };
    bool DeseasFac(int op){
         cout<<"¿Deseas realizar tu factura?"<<endl;
         cout<<"1.SI 2.NO"<<endl;cin>>op;
        if(op==1){
            bool fac=true;
        };
        if (op==2){
            bool fac=false;
            cout << "Gracias por su preferencia."<<endl;
        };
        return fac;
    };
    string Porductos(vector<string>product){


    };



};
#endif