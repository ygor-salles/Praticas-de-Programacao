/*
13 - Faça um programa que preencha um vetor com seis elementos numéricos inteiros. Calcule e mostre:
º todos os números pares;
ºa quantidade de números pares; 
º todos os números ímpares;
º a quantidade de números ímpares. 
*/

vet = []
var i
for (i=0; i<=6; i++)
    vet[i] = i+1

c1=0 
c2=0
for (i=0; i<=6; i++){
    if (vet[i] % 2 == 0){
        c1++
        console.log ('Par: ',vet[i])
    }
    else{
        c2++
        console.log ('Impar: ',vet[i])
    }
}
console.log (`\nA quantidade de numeros pares é ${c1} e impares eh ${c2}\n`)
