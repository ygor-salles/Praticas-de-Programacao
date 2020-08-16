/*
4 - Escreva um algoritmo para calcular as raízes de uma equação do segundo grau (Ax2
+ Bx + C). Considere que o valor de A <> 0 e (B2– 4AC) > 0. Escreva os valores na tela.
*/

// Teste 2 raízes (a=1 b=-3 c=-10) //Teste 1 raíz (a=9 b=-12 c=4) //Teste 0 raíz (a=5 b=3 c=5

a=1; b=-3; c=-10; 
//a=9; b=-12; c=4
//a=5; b=3; c=5

if(a!=0){
    delta = b**2 -4*a*c
    if(delta>0){
        console.log('Equação possui 2 raízes reais\n')
        x1 = (-b + Math.sqrt(delta))/(2*a)
        x2 = (-b - Math.sqrt(delta))/(2*a)
        console.log('X1: ',x1,'\nX2: ',x2)
    }
    else if(delta==0){
        console.log('Equação possui 2 raízes reais\n')
        x1 = (-b + Math.sqrt(delta))/(2*a)
        console.log('X1: ',x1)
    }
    else
        console.log('Equação não possui raízes reais\n')
}
else
    console.log('Valor de A deve ser diferente de 0!')
