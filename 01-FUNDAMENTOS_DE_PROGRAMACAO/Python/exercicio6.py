"""  6 - Elabore um programa que leia dois números n e m (m>=n) e escreva todos os números
pares entre n e m. """

n = int(input('Digite valor do ponto de origem: '))
m = int(input('Digite valor do ponto de destino: '))

if m>=n:
  print('\nTodos pares dentro do intervalo(inclusive): \n')
  for i in range(n,m+1):
    if(i%2==0):
      print(i)
else:
  print('\nPonto de destino deve ser maior que ponto de origem\n')