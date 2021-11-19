/* 
5 - A partir de valores digitados pelo usu�rio da m�dia de um aluno, informar se ele foi
aprovado (media >= 6), reprovado (0 < media < 3), ou se ficou de exame
(3<=media<6). Se ficou de exame, solicitar a nota do exame e informar se o aluno foi
aprovado (nota do exame >= 6) ou reprovado. 
*/

#include <stdio.h>

int main ()
{
    float media, exame;
    printf ("Digite a nota da sua media: ");
    scanf ("%f",&media);

    if (media < 0) {
        printf ("\n Nota invalida \n\n");
    }
    else if (media >= 6) {
        printf ("\n Aprovado \n\n");
    }
    else if ((media > 0) && (media < 3)) {
        printf ("\n Reprovado \n\n");
    }
    else if ((media >= 3) && (media <= 6)) {
        printf ("\n Ficou de exame \n\n");
    }

    if ((media >= 3) && (media < 6)) {
        printf ("Digite a sua nota do exame: ");
        scanf ("%f",&exame);
        if (exame < 0) {
            printf ("\n Nota invalida! \n\n");
        }
        else if (exame>=3){
            printf ("\n Aprovado \n\n");
        }
        else {
            printf ("\n Reprovado \n\n");
        }
    }
}