"""
13 - Fa�a um programa que preencha um vetor com seis elementos num�ricos inteiros.
Calcule e mostre: todos os n�meros pares; a quantidade de n�meros pares;
todos os n�meros �mpares; a quantidade de n�meros �mpares. 
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

print('\nQuantidade de Par: '+str(par)+'\nQuantidade de �mpar: '+str(impar))





