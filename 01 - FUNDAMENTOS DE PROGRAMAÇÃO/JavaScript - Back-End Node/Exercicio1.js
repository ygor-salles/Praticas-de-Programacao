/*
1 - Faça um algoritmo que receba o peso de uma pessoa, calcule e mostre:
a. O novo peso quando a pessoa engorda 15% do peso digitado
b. O novo peso quando a pessoa engorda 20% do peso digitado
*/

//Em javaScript para comandos de entrada precisa do HTML por isso será feito sem entrada do usuário
//exemplo de dados de entrada ===>   var num = prompt('DIgite o valor de num: ') 

// const peso = prompt('Digite seu peso: ')
//const peso = window.prompt('Digite seu peso: ')

const peso=18
novopeso15 = peso+(peso*0.15)
novopeso20 = peso+(peso*0.20)

console.log('Novo peso com 15%: ',novopeso15)
console.log('Novo peso com 20%: ',novopeso20)