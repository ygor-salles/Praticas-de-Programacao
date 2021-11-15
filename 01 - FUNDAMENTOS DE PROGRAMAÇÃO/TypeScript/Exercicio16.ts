/*
16 - Escreva um programa que recebe uma cadeia de caracteres verifica se esta cadeia é um palíndromo.
Uma palavra é dita ser palíndromo se a sequência de seus caracteres da esquerda para a direita é
igual à sequência de seus caracteres da direita para a esquerda. Ex.: arara.
*/

function palindromo(str: string) {
  for (let i = 0; i < str.length; i++)
    if (str[i] != str[str.length - i - 1])
      return false
  return true
}

//FUNÇÃO PRINCIPAL
const str = 'arara'
if (palindromo(str))
  console.log(str + " é palindromo!!")
else
  console.log(str + " nao é palindromo!!")