#include <stdio.h>

void quickSort(int *v, int inicio, int fim){
    int pivo;
    if(inicio<fim){
        pivo=particiona(v,inicio,fim);
        quickSort(v, inicio, pivo-1);
        quickSort(v,pivo+1,fim);
    }
}

int particiona(int *v, int inicio, int final){
    int esq, dir, pivo, aux;
    esq=inicio;
    dir=final;
    pivo=v[inicio];
    while(esq<dir){
        while(esq <= final && v[esq] <= pivo)
            esq++;

        while(dir >= 0 && v[dir] > pivo)
            dir--;

        if (esq<dir){
            aux=v[esq];
            v[esq]=v[dir];
            v[dir]=aux;

        }
    }
    v[inicio]=v[dir];
    v[dir]=pivo;
    return dir;
}

int main(){
    int v[]={67,59,15,83,60,71,31,91};
    quickSort(v, 0, 7);
    for(int i=0; i<8; i++){
        printf(" %d", v[i]);
    }
    return 0;
}