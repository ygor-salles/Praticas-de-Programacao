/*
3 - Ler dois números, armazenando-os nas variáveis num1 e num2. Verificar se o valor de
num1 é maior que o valor de num2 e, em caso positivo, trocar os conteúdos das variáveis.
*/


num1 = 10
num2 = 4

if(num1>num2){
    aux = num1
    num1 = num2
    num2 = aux
}

console.log('NUM1: ',num1,'\nNUM2: '+num2)