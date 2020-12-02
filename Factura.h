#ifndef FACTURA_H
#define FACTURA_H
#include <iostream>
#include <string>
using namespace std;
class Factura{
string Nombre;
string Producto;
float Precio;
int Unidades;
public: 
Factura(string n,string p,float pre,int uni){
    Nombre=n;
    Producto=p;
    Precio=pre;
    Unidades=uni;
    

};
void setNombre(string nom){Nombre=nom;};
void setProducto(string prod){Producto=prod;};
void setPrecio(float pr){Precio=pr;};
void setUnidades(int uni){Unidades=uni;};
string getNombre(){return Nombre;};
string getProducto(){return Producto;};
int getUnidades(){return Unidades;};
float getPrecioFinal(float pr, int un){
    Precio=pr;
    Unidades=un;
    Precio= pr*un;
    return Precio;

    };




};
#endif