#include <stdlib.h>
#include <stdio.h>

extern int abs2(int);

int main(){
    int v = 11123;
    int x = -151;
    printf("%d\n",abs2(v));
    printf("%d\n",abs2(x));
}