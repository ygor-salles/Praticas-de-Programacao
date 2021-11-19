/* 4 - Escreva um algoritmo para calcular as ra�zes de uma equa��o do segundo grau (Ax2 + Bx + C). Considere que o valor de A <> 0 e (B2� 4AC) > 0, = 0 e <>0. Escreva os valores na tela. */

/* Teste 2 ra�zes (a=1 b=-3 c=-10) //Teste 1 ra�z (a=9 b=-12 c=4) //Teste 0 ra�z (a=5 b=3 c=5) */

#include<stdio.h>
#include<math.h>

int main ()
{
    float a, b, c, delta, x1, x2;

    printf (" Digite o valor de A: ");
    scanf (" %f",&a);
    printf ("\n Digite o valor de B: ");
    scanf (" %f",&b);
    printf ("\n Digite o valor de C: ");
    scanf (" %f",&c);

    if (a == 0)
        printf ("\n O A deve ser diferente de 0! \n\n");
    else{

        delta = pow(b,2) -4*a*c;

        if (delta>0) {
            x1 = (-b -sqrt(delta))/(2*a);
            x2 = (-b +sqrt(delta))/(2*a);
            printf ("\n Equacao possui raizes reais: \n");
              printf ("\n x1 = %.2f\n\n",x1);
              printf (" x2 = %.2f\n\n",x2);
            }
            else{
                if (delta == 0){
                  x2= (-b +sqrt(delta))/(2*a);
                  printf ("\n Equacao possui uma raiz real \nx: %.2f\n\n",x2);
                }
                else{
                    printf ("\n Equacao nao possui raizes reais!!");
                }
            }
    }
    return 0;
}