#include "preliminar2_main.cpp"
#include <string>


int main(){
    std::string news[99999] = {"hola","que tal","hola que","tal que", "no se"," no deberia","dfdf"};

    mostrar_todo(news,"hola");
    /*std::string x= borrar(news,"que");
    std::cout<<x;
   for (int i = 0; i < TAMANO; i++) {
        if (!news[i].empty()) {
            std::cout << "Noticia " << i << ": " << news[i] << std::endl;
        }*/
    return 0;
}

