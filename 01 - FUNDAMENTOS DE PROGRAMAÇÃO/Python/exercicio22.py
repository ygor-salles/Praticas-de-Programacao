"""
22 - Realizar as funções de fibonachi, fatorial e a somatória de 1 até N, todas com recursividade.
"""

#FUNÇÃO FIBONACHI
def fib(n):
  if (n==0): return 0
  if (n==1): return 1
  return fib(n-1) + fib(n-2)

#FUNÇÃO FATORIAL
def fatorial(n):
  if (n==0 or n==1): return 1
  return n*fatorial(n-1)

#FUNÇÃO SOMATÓRIA
def soma(n):
  if (n==1): return 1;
  return n + soma(n-1)

#FUNÇÃO PRINCIPAL
n = int(input('Digite valor de N(inteiro): '))
print('\nFibonachi: '+str(fib(n)))
print('Fatorial: '+str(fatorial(n)))
print('Somatória de 1 até N: '+str(soma(n)))
