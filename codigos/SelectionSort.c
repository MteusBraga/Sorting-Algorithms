#include <stdio.h>

void SelectionSort(int *v, int n){
    int i, j, min, aux;
    for (i=0; i < (n-1); i++){
        min=i;
        for (j=(i+1); j<n; j++){
            if (v[j]< v[min])
                min=j;
        }
        if (v[i]!= v[min]){
            aux=v[i];
            v[i]=v[min];
            v[min]=aux;
        }
        
    }

}

int main(){
    int v[]={67,59,15,83,60,71,31,91};
    SelectionSort(v, 8);
    for(int i=0; i<8; i++){
        printf(" %d", v[i]);
    }
    return 0;
}