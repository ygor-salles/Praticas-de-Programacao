"""
10 - Leia valores num�ricos at� que o valor 0 for digitado. Em seguida, calcule a m�dia dos valores digitados e informe o usu�rio.
"""

print('Digite valores, ser� encerrado quando for digitado zero:\n')

soma=0
cont=0
while True:
  num = float(input())
  soma += num
  cont += 1
  if num==0: break;

resultado=soma/(cont-1);
print('\nA m�dia dos numeros digitados excluindo o zero �: '+str(resultado))