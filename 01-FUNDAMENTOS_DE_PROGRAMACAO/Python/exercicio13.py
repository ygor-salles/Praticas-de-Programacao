"""
13 - Faça um programa que preencha um vetor com seis elementos numéricos inteiros.
Calcule e mostre: todos os números pares; a quantidade de números pares;
todos os números ímpares; a quantidade de números ímpares. 
"""

vetor = []
print('\nDigite 6 numeros inteiros: ')
for i in range(6):
  num = int(input())
  vetor.append(num)
print()

par=0
impar=0
for i in range(6):
  if vetor[i]%2==0:
    print('Par: '+str(vetor[i]))
    par += 1
  else:
    print('Impar: '+str(vetor[i]))
    impar += 1

print('\nQuantidade de Par: '+str(par)+'\nQuantidade de ímpar: '+str(impar))





