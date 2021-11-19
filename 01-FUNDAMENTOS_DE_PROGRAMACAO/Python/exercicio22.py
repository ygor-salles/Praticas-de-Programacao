"""
22 - Realizar as fun��es de fibonachi, fatorial e a somat�ria de 1 at� N, todas com recursividade.
"""

#FUN��O FIBONACHI
def fib(n):
  if (n==0): return 0
  if (n==1): return 1
  return fib(n-1) + fib(n-2)

#FUN��O FATORIAL
def fatorial(n):
  if (n==0 or n==1): return 1
  return n*fatorial(n-1)

#FUN��O SOMAT�RIA
def soma(n):
  if (n==1): return 1;
  return n + soma(n-1)

#FUN��O PRINCIPAL
n = int(input('Digite valor de N(inteiro): '))
print('\nFibonachi: '+str(fib(n)))
print('Fatorial: '+str(fatorial(n)))
print('Somat�ria de 1 at� N: '+str(soma(n)))
