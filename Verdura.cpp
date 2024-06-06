#include "Verdura.h"

 //Constructor default 
        Verdura::Verdura():Producto(){
            temporada = "Invierno";
        }
        //Constructor parametros
        Verdura::Verdura(string _nombre, int _precio, int _peso, string _temporada): 
        Producto( _nombre, _precio, _peso){
            temporada = _temporada;

        }

        //Modifican un valor del atributo
        void Verdura::setTemporada(string _temporada){
            temporada = _temporada;
        }

        //Metodos de acceso, retornan un valor del atributo
        string Verdura::getTemporada(){
            return temporada;
        }

        //Metodos 
        string Verdura::str(){
             return nombre + 
            "-$" + std::to_string(precio) + 
            "-" + std::to_string(peso) +
            "-$" + std::to_string(calculaTotalPagar()) +
            "-" + temporada;
        }
        int Verdura::calculaTotalPagar(){
            int totalAPagar = 0;
            if (temporada == "Junio"){
                totalAPagar = precio * peso * 2;
            } else if (temporada == "Regalado"){
                totalAPagar = precio * peso * 3;
            } else{
                totalAPagar = precio * peso * 10;
            };
            return totalAPagar;
        }