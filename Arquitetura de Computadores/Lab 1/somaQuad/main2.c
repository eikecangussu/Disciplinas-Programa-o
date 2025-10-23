#include <stdio.h>

extern int quad (void);		//Declaração da função externa quad

int somaC (int a, int b)	//Declaração da função somaC
{
	return a + b;			//Soma os dois parâmetros e retorna o resultado
}

int main ()
{
	int q = quad ();		//Guarda o valor do quadrado
	printf ("O resultado foi %d\n", q);	
	return 0;
}