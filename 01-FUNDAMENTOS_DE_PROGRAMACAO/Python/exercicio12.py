"""
12 - Fa�a um programa que contenha uma fun��o que recebe dois n�meros positivos e retorna a soma dos N n�meros inteiros existentes entre eles (inclusive).
Use a fun��o no programa principal.
"""

#FUN��O SOMA
def soma(menor, maior):
  soma=0
  for i in range(menor,maior+1):
    soma += i
  return soma

#FUN��O PRINCIPAL
print('Digite dois numeros positivos: ')
a = int(input())
b = int(input())

if (a==0 or b==0):
  print('\nO dois n�meros devem ser positivos')
elif a>b:
  print('\nA soma entre os numeros digitados: '+str(soma(b, a)))
else:
  print('\nA soma entre os numeros digitados: '+str(soma(a, b)))