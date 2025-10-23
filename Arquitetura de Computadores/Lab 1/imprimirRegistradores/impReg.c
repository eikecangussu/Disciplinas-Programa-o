#include <stdio.h>
extern void pilha_registradores();

void imprimir_registradores(void* regs){

    unsigned long long* reg = (unsigned long long*) regs;
    char* nomes[]= {
        "RAX", "RBX", "RCX", "RDX",
        "RSI", "RDI", "RBP", "RSP",
        "R8",  "R9",  "R10", "R11",
        "R12", "R13", "R14", "R15"
    };

    for (int i = 0; i < 16; i++)
    {
        printf("%s = %lld\n", nomes[i], reg[i]);
    }

}


int main(){
    pilha_registradores();
    return 0;
}