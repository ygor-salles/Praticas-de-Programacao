"""
18 - Escreva um programa em que leia 3 cadeias de caracteres de tamanho máximo 50,
e as imprime na tela em ordem alfabética.
"""

vetor = []
for i in range(3):
  vetor.append(str(input('Digite nome: ')))

print(sorted(vetor))