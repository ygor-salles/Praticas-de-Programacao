/*
22 - Realizar as funções de fibonachi, fatorial e a somatória de 1 até N, todas com recursividade.
*/

function fib2(n: number): number {
  if (n == 0) return 0
  if (n == 1) return 1
  return fib2(n - 1) + fib2(n - 2)
}

function fatorial2(n: number): number {
  if (n == 0 || n == 1)
    return 1
  return n * fatorial2(n - 1)
}

function somatoria(n: number): number {
  if (n == 1)
    return 1
  return n + somatoria(n - 1)
}

//FUNÇÃO PRINCIPAL
let n = 5
console.log('\nFibonachi: ', fib2(n))
console.log('Fatorial: ', fatorial2(n))
console.log(`Somatória de 1 até ${n}: ${somatoria(n)}`)