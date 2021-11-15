/*
22.1 - Realizar as funções de fibonachi, fatorial e a somatória de 1 até N, todas com recursividade.
obs: Utilizando Aerrow Function e ternário nos casos possíveis
*/

  function fib(n){
    if (n==0) return 0
    if (n==1) return 1
    return fib(n-1) + fib(n-2)
  }

  var fatorial = (n) => (n==0 || n==1) ? 1 : n*fatorial(n-1) 
  
  var soma = n => n==1 ? 1 : n+soma(n-1)
  
  //FUNÇÃO PRINCIPAL
  let n=5
  console.log('\nFibonachi: ',fib(n))
  console.log('Fatorial: ',fatorial(n))
  console.log(`Somatória de 1 até ${n}: ${soma(n)}`)