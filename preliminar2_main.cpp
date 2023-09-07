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










void showTop5(vector <News *> noticias){
    Newsapi newsapi;

        vector<News *> noticias = newsapi.getRecords();

            cout << "Las top 5 noticias: " << endl;
            for (int i = 0; i < 5; i++)
            {
                cout << "Noticia " << i + 1 << ":" << endl;
                cout << "Autor: " << noticias[i]->getAuthor() << endl;
                cout << "Título: " << noticias[i]->getTitle() << endl;
                cout << "Descripción: " << noticias[i]->getDescription() << endl;
            }

}

void mostrarNoticias(vector <News *> noticias){
    Newsapi newsapi;

        vector<News *> noticias = newsapi.getRecords();

        for (int i=0;i<999;i++){
            std::cout<<noticias[i]<<std::endl;
        }
}

void borrarNoticias(vector <News *> noticias, int posicion){
    Newsapi newsapi;
    vector<News *> noticias = newsapi.getRecords();
        noticias[posicion]=nullptr;
}