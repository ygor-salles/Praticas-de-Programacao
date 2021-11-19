""" 4 - Escreva um algoritmo para calcular as ra�zes de uma equa��o do segundo grau (Ax2 + Bx + C). Considere que o valor de A <> 0 e (B2� 4AC) > 0, = 0 e <>0. Escreva os valores na tela.

/* Teste 2 ra�zes (a=1 b=-3 c=-10) //Teste 1 ra�z (a=9 b=-12 c=4) //Teste 0 ra�z (a=5 b=3 c=5) """

import math

a = float(input('Digite valor de A: '))
b = float(input('Digite valor de B: '))
c = float(input('Digite valor de C: '))

if a!=0:
  delta = (b**2) - 4*a*c
  if delta > 0:
    x1 = ((-b + math.sqrt(delta)) / (2*a))
    x2 = ((-b - math.sqrt(delta)) / (2*a))
    print('\nEqua��o possui duas ra�zes reais: \n')
    print('X1: ' +str(x1)+ '\nX2: '+str(x2))
  elif delta==0:
    x1 = ((-b + math.sqrt(delta)) / (2*a)) 
    print('\nEqua��o possui uma raiz real: \n')
    print('X: '+str(x1))
  else:
    print('\nEqua��o n�o possui ra�zes reais\n')

else:
  print('\nA deve ser diferente de zero!\n')