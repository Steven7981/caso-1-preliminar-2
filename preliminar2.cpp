#include <iostream>
#include <cstring>
#include <string>
const int TAMANO=9999;

int conseguir_tamano(std::string arrays[TAMANO]){
int contador=0;
    for (int i = 0;i<TAMANO;i++){
        if (!arrays[i].empty()){
            contador++;
        }
        else break;
    }
    return contador;
}
std::string insertar(std::string arrays[TAMANO],std:: string dato, int posicion){
    int contador=conseguir_tamano(arrays);

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
        arrays[posicion]=dato;}
std::string j = std::to_string(posicion);
return "El dato fue insertado correctamente a la posicion " + j;
}

void agregar(std::string arrays[TAMANO],std:: string dato)
    {
        int contador=conseguir_tamano(arrays);
        arrays[contador+1]=dato;
    }

std::string borrar(std::string arrays[TAMANO],std::string palabra){
    std::string palabra_borrar= palabra;
    int contador=conseguir_tamano(arrays);
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
    
    return palabra;
}

std::string mostrar(std::string arrays[TAMANO], int posicion){
    int contador=conseguir_tamano(arrays);
    if (posicion<=contador){
        std::string i = std::to_string(posicion+1);
        std::string dato = arrays[posicion] + " " + i;
        return dato;
    }
    return "No hay nada que mostrar";}

void mostrar_todo(std::string arrays [TAMANO],std::string palabra){
    int contador=conseguir_tamano(arrays);
    for (int i=0; i<=contador; i++){
        if(arrays[i].find(palabra)!=std::string::npos){
        std::cout<<arrays[i]<<std::endl;
        }
    }

}