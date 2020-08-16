"""  5 - A partir de valores digitados pelo usuário, das notas b1 e b2 de um aluno,
informar se ele foi aprovado (media > = 6), reprovado (media < 3), ou se ficou de exame (3<=media<6).
Se ficou de exame, solicitar a nota do exame ex e informar se o aluno foi aprovado ou reprovado. """

b1 = float(input('Digite valor nota1: '))
b2 = float(input('Digite valor nota2: '))

media = (b1+b2)/2

if media>=6:
  print('\nAPROVADO!')
elif media<3:
  print('\nREPROVADO')
else:
  print('\nFicou de exame!\n')
  exame = float(input('\nDigite sua nota do exame: '))
  if exame>=6:
    print('\nAPROVADO')
  else:
    print('\nREPROVADO')