/*
11 - imprimir o cabeçalho definido em uma função
Curso: Sisitemas de Informacao
Disciplina: Fundamentos de Progaramacao
Universidade federal de Itajuba - Unifei

e retornar em uma nova função o  conceito conforme a media do aluno que serão digitadas pelo usuário.
Segue a tabela abaixo:


    NOTA            CONCEITO
de 0,0 a 4,9            D
de 5,0 a 6,9            C
de 7,0 a 8,9            B
de 9,0 a 10,0           A
 */

#include<stdio.h>

void imprima ()
{
    printf ("Curso: Sisitemas de Informacao");
    printf ("Disciplina: Fundamentos de Progaramacao");
    printf ("Universidade federal de Itajuba - Unifei\n\n");
}

char conceito (int nota)
{
    if ((nota>=0) && (nota<=4.9)){
        return ('D');
    }
    else if ((nota>=5) && (nota<=6.9)){
        return ('C');
    }
    else if ((nota>=7) && (nota<=8.9)){
        return ('B');
    }
    else if ((nota>=9) && (nota<=10)){
        return ('A');
    }
}

int main ()
{
    float nota;
    char funcao;
    imprima ();
    printf ("Digite a nota de sua media: ");
    scanf ("%f",&nota);
    if ((nota<0) || (nota>10)){
        printf ("\nDigite uma nota valida!\n");
        return 0;
    }
    else{
    	funcao = conceito (nota);
    	printf ("\nO conceito eh: %c\n",funcao);
    }
}