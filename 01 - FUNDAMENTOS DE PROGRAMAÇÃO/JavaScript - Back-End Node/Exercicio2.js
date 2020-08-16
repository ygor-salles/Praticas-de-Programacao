/*
2 - Dado um número inteiro positivo de 3 algarismos, inverter a ordem de seus
algarismos. Os três algarismos do número dado são diferentes de zero.
*/

//1ª Forma
num = 125
centena = (num/100)|0
dezena = ((num%100)/10)|0
unidade = (num%10)%10
console.log(unidade,dezena,centena)

//2ª Forma
num3 = 125
centena = Math.floor(num3/100)
dezena = Math.floor((num3%100)/10)
unidade = (num3%10)%10
console.log(unidade,dezena,centena)

//3ª Forma
num2='125'
console.log(num2.charAt(2), num2.charAt(1), num2.charAt(0))


