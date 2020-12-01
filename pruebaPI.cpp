#include <iostream>
#include <vector>
#include "Factura.h"
#include "Producto.h"
#include "Venta.h"
#include "Registro.h"
#include "Calculadora.h"

int main(){
   bool op;
   string Producto;
   float precio;
   int unidades;
   Factura ej1{op, Producto, precio, unidades};

   
   cout<<"----SISTEMA DE FACTURACION MANUAL-----"<<endl;
   ej1.DeseasFac(op);
   
  


   

   
}