/*
22.1 - Realizar as funções de fibonachi, fatorial e a somatória de 1 até N, todas com recursividade.
obs: Utilizando Aerrow Function e ternário nos casos possíveis
*/

function fib(nn: number) {
  if (nn == 0) return 0
  if (nn == 1) return 1
  return fib(nn - 1) + fib(nn - 2)
}

function fatorial(nn: number) {
  return (nn == 0 || nn == 1) ? 1 : nn * fatorial(nn - 1)
}

var soma2 = (nn: number) => nn == 1 ? 1 : nn + soma2(nn - 1)

//FUNÇÃO PRINCIPAL
let nn: number = 5
console.log('\nFibonachi: ', fib(nn))
console.log('Fatorial: ', fatorial(nn))
console.log(`Somatória de 1 até ${nn}: ${soma2(nn)}`)