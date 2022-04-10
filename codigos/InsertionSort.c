
#include <stdio.h>

void InsertionSort(int *v, int n){
    int i, j, aux;
    for (i=0; i<n; i++){
        aux=v[i];
        for (j=i; (j > 0) && (aux < v[j-1]); j--){
            v[j]=v[j-1];
        }
        v[j]=aux;
    }
}

int main(){
    int v[]={67,59,15,83,60,71,31,91};
    InsertionSort(v, 8);
    for(int i=0; i<8; i++){
        printf(" %d", v[i]);
    }
    return 0;
}