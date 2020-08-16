""" 4 - Escreva um algoritmo para calcular as raízes de uma equação do segundo grau (Ax2 + Bx + C). Considere que o valor de A <> 0 e (B2– 4AC) > 0, = 0 e <>0. Escreva os valores na tela.

/* Teste 2 raízes (a=1 b=-3 c=-10) //Teste 1 raíz (a=9 b=-12 c=4) //Teste 0 raíz (a=5 b=3 c=5) """

import math

a = float(input('Digite valor de A: '))
b = float(input('Digite valor de B: '))
c = float(input('Digite valor de C: '))

if a!=0:
  delta = (b**2) - 4*a*c
  if delta > 0:
    x1 = ((-b + math.sqrt(delta)) / (2*a))
    x2 = ((-b - math.sqrt(delta)) / (2*a))
    print('\nEquação possui duas raízes reais: \n')
    print('X1: ' +str(x1)+ '\nX2: '+str(x2))
  elif delta==0:
    x1 = ((-b + math.sqrt(delta)) / (2*a)) 
    print('\nEquação possui uma raiz real: \n')
    print('X: '+str(x1))
  else:
    print('\nEquação não possui raízes reais\n')

else:
  print('\nA deve ser diferente de zero!\n')