#include "preliminar2.cpp"
#include <string>

std::string eliminarNoticia(std::string array[9999],std::string palabra){
    std::string x = borrar(array,palabra);
    return ("Se eliminaron todas las noticias que contiene la palabra "+ x);

}

std::string ordenarNoticias(std::string array [9999],int posicion, int posicion_mover){
    std::string auxiliar = insertar(array, array[posicion], posicion-posicion_mover);
    std::string x = std::to_string(posicion_mover);
    return ("Se ordenó la noticia a la posicion ") + x;
}
void showTop5(std::string array[9999]){
    for (int i =0; i<5;i++){
        std::cout<<mostrar(array,i)<<std:: endl;
    }
}
