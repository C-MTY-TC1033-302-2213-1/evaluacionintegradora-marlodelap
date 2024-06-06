#include "Combo.h"

  //Constructor default 
        Combo::Combo():Producto(){
            clave = 0;
        }
        //Constructor parametros
        Combo::Combo(string _nombre, int _precio, int _peso, int _clave):Producto(_nombre, _precio, _peso){
            clave = _clave;
        }

        //Modifican un valor del atributo
        void Combo::setClave(int _clave){
            clave = _clave;
        }

        //Metodos de acceso, retornan un valor del atributo
        int Combo::getClave(){
            return clave;
        }

        //Metodos 
        string Combo::str(){
             return nombre + 
            "-$" + std::to_string(precio) + 
            "-" + std::to_string(peso) +
            "-$" + std::to_string(calculaTotalPagar()) +
            "-" + std::to_string(clave);
        }

        int Combo::calculaTotalPagar(){ 
            int totalAPagar = 0;
            int descuento = 0;
            totalAPagar = precio*peso*clave;
            descuento = totalAPagar / 100;
            if (clave == 1){
                totalAPagar = totalAPagar - (25*descuento);
            } else if (clave == 2){
                totalAPagar = totalAPagar - (30*descuento);
            } else{
                return totalAPagar;
            }

            return totalAPagar;
        }