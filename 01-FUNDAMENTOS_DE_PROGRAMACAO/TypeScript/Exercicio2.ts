/*
2 - Dado um número inteiro positivo de 3 algarismos, inverter a ordem de seus
algarismos. Os três algarismos do número dado são diferentes de zero.
*/

//1ª Forma
const num: number = 125
let centena = (num / 100) | 0
let dezena = ((num % 100) / 10) | 0
let unidade = (num % 10) % 10
console.log(unidade, dezena, centena)

//2ª Forma
const num3: number = 125
centena = Math.floor(num3 / 100)
dezena = Math.floor((num3 % 100) / 10)
unidade = (num3 % 10) % 10
console.log(unidade, dezena, centena)

//3ª Forma
const outro: string = '125'
console.log(outro.charAt(2), outro.charAt(1), outro.charAt(0))


