/* 
12 - Faça um programa que contenha uma função que recebe dois números
positivos e retorna a soma dos N números inteiros existentes entre eles (inclusive).
Use a função no programa principal 
*/

function soma (x,y)
{
    soma=0
    if (y>x){
        for (i=x; i<=y; i++)
            soma=soma+i
    }
    else {
        for (i=y; i<=x; i++)
            soma=soma+i
    }
    return soma
}

x=2;  y=5;
funcao = soma (x, y)
console.log ('\n O valor da soma eh: ',funcao)
