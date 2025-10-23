#include <stdio.h>

extern int soma (int a, int b);
extern long long soma2 (long long a, long long b);
extern int soma3 (int a, int b, int c);
extern int tamanho (char string[]);

int main ()
{
	int x = soma (2, 3);
	long long y = soma2 (2, 3);
    int z = soma3 (2, 3, 4);
	printf ("x = %d, y = %lld e z = %d \n", x, y, z);
    char string[] = "Arquitetura";
	int tm = tamanho(string);
	printf("O tamanho da string é %d\n", tm);

	return 0;
}