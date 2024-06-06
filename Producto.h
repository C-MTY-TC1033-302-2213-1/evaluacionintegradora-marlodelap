#ifndef Producto_h
#define Producto_h

#include <stdio.h>
#include <string>
#include <math.h>

using namespace std;

class Producto {

    protected: 

        string nombre;
        int precio;
        int peso;

    public: 

        //Constructor default 
        Producto();
        //Constructor parametros
        Producto(string _nombre, int _precio, int _peso);

        //Modifican un valor del atributo
        void setNombre(string _nombre);
        void setPrecio(int _precio);
        void setPeso(int _peso);

        //Metodos de acceso, retornan un valor del atributo
        string getNombre();
        int getPrecio();
        int getPeso();

        //Metodos 
        virtual string str();
        virtual int calculaTotalPagar();
};



#endif /* Producto_hpp */