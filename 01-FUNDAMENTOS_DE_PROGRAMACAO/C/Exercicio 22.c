/*
22 - Realizar as funções de fibonachi, fatorial e a somatória de N até 1,  todas com recursividade.
*/

#include<stdio.h>

int fib(int n);
int fatorial(int n);
int soma(int n);

int main ()
{
    int n, resultado, i;
    printf ("Digite o valor de N: ");
    scanf ("%d",&n);

    resultado = fib(n);
    printf ("\nFibonachi: %d",resultado);

    resultado = fatorial(n);
    printf ("\nFatorial: %d\n",resultado);

    resultado = soma(n);
    printf ("\nSoma: %d\n",resultado);


    return 0;
}

int fib(int n)
{
    if (n==0)
        return 0;
    if (n==1)
        return 1;
    return fib(n-1) + fib(n-2);
}

int fatorial(int n)
{
    if (n==0 || n==1)
        return 1;
    return n*fatorial(n-1);
}

int soma(int n)
{
    if (n==1)
        return 1;
    return n + soma(n-1);
}