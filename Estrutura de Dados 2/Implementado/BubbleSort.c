//Bubble sort
//A partir do primeiro elemento, "Sobe" com ele enquanto ele for menor do que seu elemento seguinte.

#include <stdio.h>
#include <stdlib.h>

void imprimirVetor(int A[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("%d  ", A[i]);
    }
}

void bubbleSort(int A[],int tamanho){
    int temporario;
    for(int i = tamanho; i > 0; i--){
        for(int j = 0; j < i; j++){
            if(A[j + 1] < A[j]){
                temporario = A[j + 1];
                A[j + 1] = A[j];
                A[j] = temporario;
            }
        }
    }
}

int main(){
    int B[10];
        for(int i = 0; i < 10; i++){
        scanf("%d" , &B[i]);
    }
    
    imprimirVetor(B, 10);
    bubbleSort(B, 10);
    printf("\n");
    imprimirVetor(B, 10);

}