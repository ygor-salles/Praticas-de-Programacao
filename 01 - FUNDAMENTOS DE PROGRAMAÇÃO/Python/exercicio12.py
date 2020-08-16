"""
12 - Faça um programa que contenha uma função que recebe dois números positivos e retorna a soma dos N números inteiros existentes entre eles (inclusive).
Use a função no programa principal.
"""

#FUNÇÃO SOMA
def soma(menor, maior):
  soma=0
  for i in range(menor,maior+1):
    soma += i
  return soma

#FUNÇÃO PRINCIPAL
print('Digite dois numeros positivos: ')
a = int(input())
b = int(input())

if (a==0 or b==0):
  print('\nO dois números devem ser positivos')
elif a>b:
  print('\nA soma entre os numeros digitados: '+str(soma(b, a)))
else:
  print('\nA soma entre os numeros digitados: '+str(soma(a, b)))