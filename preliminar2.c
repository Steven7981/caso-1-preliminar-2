#include <stdio.h>
#include <string.h>

void insertarNoticias(char array[][100],const char *noticia, int posicion){
    printf("hello");
    if (array[posicion+1]==NULL){
        strcpy(array[posicion+1], array[posicion]);
        strcpy(array[posicion], noticia);
        printf("hello");
    }
    if (array[posicion]==NULL){
        strcpy(array[posicion],noticia);
        int num_noticias = 3;
        for (int i = 0; i < num_noticias; i++) {
            printf("Noticia %d: %s\n", i, array[i]);}
        printf("hello");
    }
}

void agregarNoticia(char array [],const char noticia)
    {
        #define POSITION_END 99999999
        strcpy(array[POSITION_END],noticia);
    }

int main(){
    char todas_noticias[][100]= {"hola","que tal"};
    
    insertarNoticias(todas_noticias,"no se", 2);
    for (int i=0;i!=sizeof(todas_noticias)/sizeof(todas_noticias[0]);i++){
        printf("Noticia %d: %s\n", i, todas_noticias[i]);
    }
    return 0;
}

