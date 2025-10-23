//Insertion sort
//Ordena os dois primeiros e a partir do terceiro volta buscando o local correto para inseri-lo de maneira ordenada

#include <stdio.h>
#include <stdlib.h>

void imprimirVetor(int A[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("%d  ", A[i]);
    }
}

void insertionSort(int A[], int tamanho){
    int chave, j;
    for(int i = 1; i < tamanho; i++){
        chave = A[i];
        j = i - 1;
        while(j >= 0 &&  A[j] > chave){
            A[j + 1] = A[j];
            j = j - 1; 
        }
        A[j + 1] = chave;
    }

}

int main(){
    int B[10];
        for(int i = 0; i < 10; i++){
        scanf("%d" , &B[i]);
    }
    
    imprimirVetor(B, 10);
    insertionSort(B, 10);
    printf("\n");
    imprimirVetor(B, 10);

}