#include <iostream>
#include <vector>
#include "Producto.h"
#include "Venta.h"
#include "Registro.h"

int main(){

    cout<< "CLASE PRODUCTO"<<endl;

    cout<<"INICIALIZACION"<< endl;
    Producto prod1{"Jabon", "AA09", 15.9};

    cout<< "CONSULTA_ID y CONSULTA_PRECIO"<< endl;
    prod1.consulta_id();
    prod1.consulta_precio();

    cout<< "CAMBIO DE PRECIO" << endl;
    prod1.cambiar_precio("contra",0);
    prod1.cambiar_precio("pass",25.5);
    prod1.consulta_precio();

    vector<int> numeros;
    cout<< numeros.size()<< endl;

    cout<<"CLASE VENTA"<< endl;
    Producto prod2{"Agua","H2O0",10};

    cout<<"INICIALIZACION"<< endl;
    Venta venta1{"externo", "Adrian"};

    cout<<"AGREGAR_CARRITO"<< endl;
    vector<Producto> lista_prods ={prod1, prod2};
    venta1.agregar_carrito(lista_prods);

    cout<< "RETIRAR_CARRITO"<<endl;
    venta1.retirar_carrito();

    cout<<"MOSTRAR_CARRITO"<<endl;
    venta1.mostrar_carrito();

    cout<<"MOSTRAR_CLIENTE MOSTRAR_TCLIENTE y MOSTRAR_TOTAL" << endl;
    venta1.mostrar_cliente();
    venta1.mostrar_Tcliente();
    venta1.mostrar_total();

    cout<<"CLASE REGISTRO"<< endl;

    Registro r1{"26/11/2020"};

    cout<<"REGISTRAR_VENTA"<< endl;
    r1.registrar_venta(venta1);

    cout<<"MOSTRAR_TOTAL"<<endl;
    r1.mostrar_total();

    cout<<"MOSTRAR_R_CLIENTES"<<endl;
    r1.mostrar_R_clientes();

    cout<<"MOSTRAR_R_VENTAS"<<endl;
    r1.mostrar_R_ventas();


    cout<<"REGISTRO DE DOS CLIENTES"<< endl;
    Producto prod3 {"Aceite", "OL55",10};
    Producto prod4 {"Escoba", "BR89",50};

    Venta venta2 {"empleado", "Favio"};

    vector<Producto> lista_prods2 ={prod3, prod4};
    venta2.agregar_carrito(lista_prods2);

    cout<<"REGISTRAR_VENTA"<< endl;
    r1.registrar_venta(venta2);

    cout<<"MOSTRAR_TOTAL"<<endl;
    r1.mostrar_total();

    cout<<"MOSTRAR_R_CLIENTES"<<endl;
    r1.mostrar_R_clientes();

    cout<<"MOSTRAR_R_VENTAS"<<endl;
    r1.mostrar_R_ventas();


    

}