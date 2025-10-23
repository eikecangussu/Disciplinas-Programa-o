//Selection Sort
//Seleciona o mínimo e troca pela primeira posição do vetor, até rodar todo o vetor

#include <stdio.h>
#include <stdlib.h>

void imprimirVetor(int A[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("%d  ", A[i]);
    }
}

void selectionSort(int A[],int tamanho){
    int menor;
    int temporario;
    for(int i = 0; i < tamanho; i++){
        menor = i;
        for(int j = i; j < tamanho + 1; j++){
            if(A[j]<A[menor]) menor = j;
        }
        temporario = A[i];
        A[i] = A[menor];
        A[menor] = temporario;
    }
    return A;
}

void main(){
    int B[10];
        for(int i = 0; i < 10; i++){
        scanf("%d" , &B[i]);
    }
    imprimirVetor(B, 10);
    selectionSort(B,10);
    printf("\n");
    imprimirVetor(B,10);
}