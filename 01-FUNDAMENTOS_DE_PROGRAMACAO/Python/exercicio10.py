"""
10 - Leia valores numéricos até que o valor 0 for digitado. Em seguida, calcule a média dos valores digitados e informe o usuário.
"""

print('Digite valores, será encerrado quando for digitado zero:\n')

soma=0
cont=0
while True:
  num = float(input())
  soma += num
  cont += 1
  if num==0: break;

resultado=soma/(cont-1);
print('\nA média dos numeros digitados excluindo o zero é: '+str(resultado))