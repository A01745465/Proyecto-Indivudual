#include <iostream>
#include <vector>
#include "Producto.h"
#include "Venta.h"

int main(){

    Producto prod1{"Jabon", "AA09", 15.9};
    prod1.consulta_id();
    prod1.consulta_precio();

    prod1.cambiar_precio("contra",0);
    prod1.cambiar_precio("pass",25.5);
    prod1.consulta_precio();

    vector<int> numeros;
    cout<< numeros.size()<< endl;

    Producto prod2{"Agua","H2O0",10};

    Venta venta1{"externo", "Adrian"};
    vector<Producto> lista_prods ={prod1, prod2};
    venta1.agregar_carrito(lista_prods);
    venta1.retirar_carrito();
    venta1.mostrar_carrito();

    venta1.mostrar_cliente();
    venta1.mostrar_Tcliente();
    venta1.mostrar_total();
}