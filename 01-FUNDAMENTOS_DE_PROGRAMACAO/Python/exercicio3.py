""" 3 - Ler dois n�meros, armazenando-os nas vari�veis num1 e num2. Verificar se o valor de
num1 � maior que o valor de num2 e, em caso positivo, trocar os conte�dos das vari�veis. """

num1 = int(input('Digite NUM1: '))
num2 = int(input('Digite NUM2: '))

if num1 > num2:
  aux = num1
  num1 = num2
  num2 = aux

print('\nNUM1: ' +str(num1)+ '\nNUM2: ' +str(num2))