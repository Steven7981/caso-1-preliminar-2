#include "preliminar2.cpp"
#include <string>

std::string eliminarNoticia(std::string array[9999],std::string palabra){
    std::string x = borrar(array,palabra);
}

std::string ordenarNoticias(std::string array [9999],int posicion, int posicion_mover){
    std::string auxiliar = insertar(array, array[posicion], posicion-posicion_mover);
}
void showTop5(std::string array[9999]){
    for (int i =0; i<5;i++){
        std::cout<<mostrar(array,i)<<std:: endl;
    }
}

int main(){
    std::string news[99999] = {"hola","que tal","hola que","tal que", "no se"};

    showTop5(news);
    /*std::string x= borrar(news,"que");
    std::cout<<x;
   for (int i = 0; i < TAMANO; i++) {
        if (!news[i].empty()) {
            std::cout << "Noticia " << i << ": " << news[i] << std::endl;
        }*/
    return 0;
}


