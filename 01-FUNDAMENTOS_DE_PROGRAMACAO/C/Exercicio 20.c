/*
20 - Leia uma data no passado e informe em qual dia da semana essa data caiu.
*/
  
#include <stdio.h>
#include<locale.h>

int main(void)
{
     setlocale(LC_ALL, "Portuguese");
     int d, m, a, res, x;
     printf("Digite dia do nascimento: "); scanf("%d", &d); //dia
     printf("Digite mês do nascimento: "); scanf("%d", &m); //mes
     printf("Digite ano do nascimento: "); scanf("%d", &a); //ano

     if (m > 2){
         m = m - 2;
         x = 8;
     }
     else{
         a = a - 1;
         x = 13;
     }

     res = (x + d + 2 * m + ((7 * m) / 12) + a % 7 + a / 4 % 7 - (3 * (1 + a / 100)) / 4 % 7) % 7;

     switch (res){
        case 0:
            printf("\nSabado\n"); break;
        case 1:
            printf("\nDomingo\n"); break;
        case 2:
            printf("\nSegunda-feira\n"); break;
        case 3:
            printf("\nTerça-feira\n"); break;
        case 4:
            printf("\nQuarta-feira\n"); break;
        case 5:
            printf("\nQuinta-feira\n"); break;
        case 6:
            printf("\nSábado\n"); break;
        default:
            break;
     }

     return 0;
 }
