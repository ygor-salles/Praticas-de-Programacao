"""7 - Elabore um programa para calcular e escrever a seguinte soma:
    37 * 38       36 * 37     35 * 36             1 * 2
S = ---------- + --------- + ---------- + ..... + ------
        1           2           3                   37
"""

soma=0
numerador1=37
numerador2=38
denominador=1

for denominador in range(1,37+1):
  soma += (float) ((numerador1*numerador2)/denominador)
  numerador1 -= 1
  numerador2 -= 1

print('\nResultador da somatória: '+str(soma))
