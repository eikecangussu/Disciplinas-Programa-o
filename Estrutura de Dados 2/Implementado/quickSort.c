//Quick sort
//Define um pivô e organiza valores menores ou maiores que ele, e chama recursivamente a função para os menores e maiores

#include <stdio.h>
#include <stdlib.h>

void imprimirVetor(int A[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("%d  ", A[i]);
    }
}

int menor(int a, int b, int c){
    int menor = a;
    if (menor > b) menor = b;
    if (menor > c) menor = c;
    return menor;
}

int particaoAleatorizado(int A[], int p, int r){
    int i = menor((rand() % (r - p + 1)) + p,(rand() % (r - p + 1)) + p,(rand() % (r - p + 1)) + p);
    int temp = A[i];
    A[i] = A[r];
    A[r] = temp;
    return particao(A, p ,r);
}

void quickSortAleatorizado(int A[], int p, int r){
    if( p < r ){
        int q = particaoAleatorizado(A,p,r);
        quickSortAleatorizado(A, p, q-1);
        quickSortAleatorizado(A, q+1, r);
    }
}
/*int particao(int A[],int p, int r){
    int i = p - 1;
    int j = p;
    int temp;
    while(i != j && j < r){
        if(A[j]<=A[r]){
            j++;
            if(A[i + 1]<=A[r])i++;
        }else {
            j++;
            if(A[j]<A[r]){
                temp = A[i + 1];
                A[i + 1] = A[j];
                A[j] = temp;
                i++;
            }
        }
    }
    temp = A[r];
    A[r] = A[i + 1];
    A[i + 1] = temp;
    return i + 1;
}*/

int particao(int A[],int p, int r){
    int i = p - 1;
    int temp;
    int pivo = A[r];
    for(int j = p; j < r; j++){
        if(A[j]<=pivo){
            i++;
            temp = A[i];
            A[i] = A[j]; 
            A[j] = temp;
        }
    }
    temp = A[r];
    A[r] = A[i+1];
    A[i+1] = temp;
    return i+1;
}

void quickSort(int A[],int p,int r){
    if(p<r){
        int q = particao(A,p,r);
        quickSort(A, p, q-1);
        quickSort(A, q+1, r);
    }
}

int main(){
    int B[10];
        for(int i = 0; i < 10; i++){
        scanf("%d" , &B[i]);
    }
    
    imprimirVetor(B, 10);
    quickSort(B, 0, 9);
    printf("\n");
    imprimirVetor(B, 10);

}