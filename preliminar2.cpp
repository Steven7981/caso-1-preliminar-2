#include <iostream>
#include <cstring>
#include <string>
const int TAMANO=9999;

std::string insertar(std::string arrays[TAMANO],std:: string dato, int posicion){
    int contador=0;
    for (int i = 0;i<TAMANO;i++){
        if (!arrays[i].empty()){
            contador++;
        }
        else break;
    }

    if (posicion == contador+1){
        if (arrays[posicion+1].empty()){
            arrays[posicion+1]=arrays[posicion];
            arrays[posicion]=dato;
        }
    }
    if (arrays[posicion].empty()){
        arrays[posicion]=dato;
    }

    if (!arrays[posicion].empty()){
        int i = contador-1;
        while (i>=posicion){
            arrays[i+1]=arrays[i];
            i--;
        }
        arrays[posicion]=dato;
}
}

void agregar(std::string arrays[TAMANO],std:: string dato)
    {
        int contador=0;
        for (int i = 0;i<TAMANO;i++){
        if (!arrays[i].empty()){
            contador++;
        }
        else break;
    }
        arrays[contador+1]=dato;
    }

std::string borrar(std::string arrays[TAMANO],std::string palabra){
    std::string palabra_borrar= palabra;
    int contador=0;
    for (int i = 0;i<TAMANO;i++){
        if (!arrays[i].empty()){
            contador++;
        }
        else break;
        
        }
    for (int i = 0; i<contador;i++){
        if (arrays[i].find(palabra_borrar) != std::string::npos) {
            for (int j = i; j < contador - 1; j++) {
                arrays[j] = arrays[j + 1];
                arrays[j+1].erase();
            }
            contador--; 
            i--;
    }
    }
    
    return ("Se eliminaron todas las noticias que contenia la palabra "+ palabra);
}

std::string mostrar(std::string arrays[TAMANO], int posicion){
    int contador=0;
    for (int i = 0;i<TAMANO;i++){
        if (!arrays[i].empty()){
            contador++;
        }
        else break;
    }
    if (posicion<=contador){
        std::string i = std::to_string(posicion);
        std::string dato = arrays[posicion] + " " + i;
        return dato;
    }
}