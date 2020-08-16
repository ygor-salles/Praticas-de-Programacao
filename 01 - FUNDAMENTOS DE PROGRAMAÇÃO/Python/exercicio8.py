"""
8 - Elabore um algoritmo para calcular e imprimir o valor de S, sendo S = -1/2 + 2/4 - 3/6 + 4/8 -5/10 +, ..., +10/20
"""

s=0
numerador=1
denominador=2

for numerador in range(1, 10+1):
  if(numerador%2==0):
    s += (float)(numerador/denominador)
  else:
    s += (float)((-numerador)/denominador)
  denominador += 2

print(s)