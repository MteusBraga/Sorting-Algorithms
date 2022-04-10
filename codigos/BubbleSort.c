#include <stdio.h>

void BubbleSort(int *v, int n){
    int i, fim, aux;
    for(fim=n-1; fim >0;fim --){
        for (i=0; i<fim; i++){
            if (v[i]> v[i+1]){
                aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
            }
        }
    }
}
int main(){
    int v[]={67,59,15,83,60,71,31,91};
    BubbleSort(v, 8);
    for(int i=0; i<8; i++){
        printf(" %d", v[i]);
    }
    return 0;
}