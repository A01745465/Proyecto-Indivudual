#include <iostream>
#include <string>
#include <vector>
#include "Producto.h"
#include "Venta.h"
#include "Registro.h"
#include "Calculadora.h"
#include "Factura.h"

int main(){
     //###########################################################################################################
    cout<< "CLASE PRODUCTO"<<endl;

    cout<<"INICIALIZACION"<< endl;
    Producto prod1{"Lapiz", "UTL88", 10.4};
    Producto prod2{"Pluma","UTP64",13.4};
    Producto prod3 {"Aceite", "OL55",10};
    Producto prod4 {"Escoba", "BR89",50};

    cout<< "CONSULTA_ID y CONSULTA_PRECIO"<< endl;
    prod1.consulta_id();
    prod1.consulta_precio();

    cout<< "CAMBIO DE PRECIO" << endl;
    prod1.cambiar_precio("contra",0);
    prod1.cambiar_precio("pass",9.5);
    prod1.consulta_precio();
    
    cout<<"***********************************************************************************************"<<endl;
    system("pause");


    //###########################################################################################################
    cout<<"CLASE VENTA"<< endl;

    cout<<"INICIALIZACION"<< endl;
    Venta venta1{"externo", "Jose Luis"};

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

    cout<<"***********************************************************************************************"<<endl;
    system("pause");

    //###########################################################################################################
    cout<<"CLASE REGISTRO"<< endl;

    Registro r1{"30/11/2020"};

    cout<<"REGISTRAR_VENTA"<< endl;
    r1.registrar_venta(venta1);

    cout<<"MOSTRAR_TOTAL"<<endl;
    r1.mostrar_total();

    cout<<"MOSTRAR_R_CLIENTES"<<endl;
    r1.mostrar_R_clientes();

    cout<<"MOSTRAR_R_VENTAS"<<endl;
    r1.mostrar_R_ventas();

    cout<<"***********************************************************************************************"<<endl;
    system("pause");


    //###########################################################################################################
    cout<<"REGISTRO DE DOS CLIENTES"<< endl;

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

    cout<<"***********************************************************************************************"<<endl;
    system("pause");


    //###########################################################################################################
    cout<< "CLASE CALCULADORA"<< endl;
    
    cout<< "INICIALIZACION" << endl;

    Calculadora calc1{.5,.1};
    venta2.calcular_total(calc1);

    venta2.mostrar_total();
    

    cout<<"\nPRUEBAS MODIFICAR_DESC_EMPLEADO"<< endl;
    calc1.modificar_desc_empleado(15,"pass");
    calc1.modificar_desc_empleado(0.1,"pass");


    cout<<"\nPRUEBAS MODIFICAR DESC_EXTRA"<< endl;
    calc1.modificar_desc_extra(15,"contra");
    calc1.modificar_desc_extra(0.1,"pass");

    cout<<"\nCALCULO DE TOTAL A TRAVES DE VENTA"<< endl;
    venta2.calcular_total(calc1);
    venta2.mostrar_total();

    cout<<"***********************************************************************************************"<<endl;
    system("pause");


    //###########################################################################################################
    cout<<"REGISTRAR VENTA CON PRECIO CALCULADO"<<endl;

    Registro r2{"12/12/2020"};
    r2.registrar_venta(venta2);

    cout<<"MOSTRAR_TOTAL"<<endl;
    r2.mostrar_total();

    cout<<"MOSTRAR_R_CLIENTES"<<endl;
    r2.mostrar_R_clientes();

    cout<<"MOSTRAR_R_VENTAS"<<endl;
    r2.mostrar_R_ventas();
//--------------------------------------------PARTE INDIVIDUAL FAVIO---------------------------------------------------------------------------------
    int op;
    cout<<"---Parte individual Favio---"<<endl;
    cout<<"---BIENVENIDO AL SISTEMA DE FACTURACIÓN MANUAL---"<<endl;
    cout<<"¿Deseas crear tu factura?"<<endl;
    cout<<"1. Si 2. No"<<endl;
    cin >> op;
    if(op==2){
        cout<<"Gracias por su preferencia!"<<endl;
    }
    if (op==1){
        string Name;
        string Prod;
        float precio;
        int unidad;
        int ops;
        cout<< "Ingresa tu nombre: "<<endl;
        cin>>Name;
        cout<<"Ingresa el nombre de tu producto: "<<endl;
        cin>>Prod;
        cout<<"Ingresa cuanto pagaste por el producto: "<<endl;
        cin>>precio;
        cout<<"Ingresa el numero de unidades: "<<endl;
        cin>>unidad;
        Factura factura1 {Name, Prod, precio,unidad};
        cout<<"-----------------------------------------"<<endl;
        cout<<"CLIENTE: " + (factura1.getNombre())<<endl;
        cout<<"-----------------------------------------"<<endl;
        cout<<"Concepto: " + (factura1.getProducto())<<endl; 
        cout<<"Unidades: "+to_string(factura1.getUnidades())<<endl;
        cout<<"Total: "+to_string(factura1.getPrecioFinal(precio,unidad))<<endl;
        cout<<"-----------------------------------------"<<endl;
        cout<<"Desea realizar otra factura?"<<endl;
        cout<<"1. Si 2.No"<<endl;
        cin>>ops;
        while (ops==1){
            cout<<"Ingresa el nombre de tu producto: "<<endl;
            cin>>Prod;
            cout<<"Ingresa cuanto pagaste por el producto: "<<endl;
            cin>>precio;
            cout<<"Ingresa el numero de unidades: "<<endl;
            cin>>unidad;
            Factura factura1 {Name, Prod, precio,unidad};
            cout<<"-----------------------------------------"<<endl;
            cout<<"CLIENTE: " + (factura1.getNombre())<<endl;
            cout<<"-----------------------------------------"<<endl;
            cout<<"Concepto: " + (factura1.getProducto()) <<endl; 
            cout<<"Unidades: "+to_string(factura1.getUnidades())<<endl;
            cout<<"Total: "+to_string(factura1.getPrecioFinal(precio,unidad))<<endl;
            cout<<"-----------------------------------------"<<endl;
            cout<<"Desea realizar otra factura?"<<endl;
            cout<<"1. Si 2.No"<<endl;
            cin>>ops;
        };
        cout<<"Gracias por su preferencia, vuelva pronto."<<endl;
        











    }
};