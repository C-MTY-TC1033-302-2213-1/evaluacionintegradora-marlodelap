#ifndef Verdura_h
#define Verdura_h

#include "Producto.h"

using namespace std;

class Verdura : public Producto {

    private: 
        string temporada;

    public: 

        //Constructor default 
        Verdura();
        //Constructor parametros
        Verdura(string _nombre, int _precio, int _peso, string _temporada);

        //Modifican un valor del atributo
        void setTemporada(string _temporada);

        //Metodos de acceso, retornan un valor del atributo
        string getTemporada();

        //Metodos 
        string str();
        int calculaTotalPagar();
};


#endif /* Verdura_hpp */