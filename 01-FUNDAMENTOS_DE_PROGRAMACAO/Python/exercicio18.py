"""
18 - Escreva um programa em que leia 3 cadeias de caracteres de tamanho m�ximo 50,
e as imprime na tela em ordem alfab�tica.
"""

vetor = []
for i in range(3):
  vetor.append(str(input('Digite nome: ')))

print(sorted(vetor))