#include "Producto.h"

//Constructor default 
Producto::Producto(){
    nombre = "Marco Antonio López de la Puente";
    precio = 1285789;
    peso = 19;
}
//Constructor parametros
Producto::Producto(string _nombre, int _precio, int _peso){
    nombre = _nombre;
    precio = _precio;
    peso = _peso;
}

//Modifican un valor del atributo
void Producto::setNombre(string _nombre){
     nombre = _nombre;
}
void Producto::setPrecio(int _precio){
    precio = _precio;
}
void Producto::setPeso(int _peso){
     peso = _peso;
}

//Metodos de acceso, retornan un valor del atributo
string Producto::getNombre(){
    return nombre;
}
int Producto::getPrecio(){
    return precio;
}
int Producto::getPeso(){
   return peso;
}

//Metodos 
string Producto::str(){
    return nombre + 
        "-$" + std::to_string(precio) + 
        "-" + std::to_string(peso) +
        "-$" + std::to_string(calculaTotalPagar());
}

int Producto::calculaTotalPagar(){
    int totalAPagar = 0;
    totalAPagar = precio*peso;
    return totalAPagar;
}
