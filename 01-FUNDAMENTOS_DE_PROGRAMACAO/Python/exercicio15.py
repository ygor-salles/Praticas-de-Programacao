"""
15 - Escreva um programa que leia uma matriz 5 x 5 de forma randômica e imprima
sua diagonal primária e secundária.
"""

import random

n = int(input('Digite valor de N <=5: \n'))
if n>0 and n<=5:
  matriz = []
  for i in range(n):
    linha = []
    for j in range(n):
      x = random.randrange(0,99)
      linha.append(x)
    matriz.append(linha)

  print('\nMATRIZ GERADA: \n')
  for i in range(n):
    for j in range(n):
      print(f'[{matriz[i][j]:^2}]', end='')
    print()

  print('\nDiagonal Primaria: \n')
  for i in range(n):
      for j in range(n):
          if (j == i):
              print(' '+str(matriz[i][j]))
        

  print ("\n\nDiagonal Secundaria: \n")
  for i in range(n):
      for j in range(n):
          if (j == (n-1-i)):
              print(' '+str(matriz[i][j]))

else:
   print('\nDados incorretos!\n')
  






