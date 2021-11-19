/*
1 - Faça um algoritmo que receba o peso de uma pessoa, calcule e mostre:
a. O novo peso quando a pessoa engorda 15% do peso digitado
b. O novo peso quando a pessoa engorda 20% do peso digitado
*/

const peso: number = 18
const novopeso15: number = peso + (peso * 0.15)
const novopeso20: number = peso + (peso * 0.20)

console.log('Novo peso com 15%: ', novopeso15)
console.log('Novo peso com 20%: ', novopeso20)