/*
17 - Fa�a uma fun��o para criptografar uma frase digitada pelo usu�rio.
A criptografia dever� substituir todas as vogais por *. Utilize a fun��o no programa principal.
A frase poder� ter, no m�ximo, 50 caracteres 
*/

#include<stdio.h>
#include<string.h>
#include<locale.h>

void criptografia (char vogal[]);

int main ()
{
    char vogal[50];
    setlocale(LC_ALL, "Portuguese");
    printf ("Digite uma frase: ");
    scanf (" %[^\n]",vogal);

    criptografia (vogal);
    printf ("\n %s \n",vogal);
    return 0;
}

void criptografia (char vogal[])
{
    for (int i=0; i<=50; i++){
        if (vogal[i]=='a' || vogal[i]=='e' || vogal[i]=='i' || vogal[i]=='o' || vogal[i]=='u' || vogal[i]=='A' || vogal[i]=='E' || vogal[i]=='I' || vogal[i]=='O' || vogal[i]=='U'){
            vogal[i] = '*';
            i++;
        }
    }
    return ;
}
