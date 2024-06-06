#ifndef Combo_h
#define Combo_h

#include "Producto.h"

using namespace std;

class Combo : public Producto {

    private: 
        int clave;

    public: 

        //Constructor default 
        Combo();
        //Constructor parametros
        Combo(string _nombre, int _precio, int _peso, int _clave);

        //Modifican un valor del atributo
        void setClave(int _clave);

        //Metodos de acceso, retornan un valor del atributo
        int getClave();

        //Metodos 
        string str();
        int calculaTotalPagar();
};


#endif /* Combo_hpp */