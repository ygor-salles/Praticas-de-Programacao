"""
11 - imprimir o cabe�alho definido em uma fun��o
Curso: Sisitemas de Informacao
Disciplina: Fundamentos de Progaramacao
Universidade federal de Itajuba - Unifei

e retornar em uma nova fun��o o  conceito conforme a media do aluno que ser�o digitadas pelo usu�rio.
Segue a tabela abaixo:


    NOTA            CONCEITO
de 0,0 a 4,9            D
de 5,0 a 6,9            C
de 7,0 a 8,9            B
de 9,0 a 10,0           A
"""

def cabecalho():
  print ('Curso: Sisitemas de Informacao')
  print ('Disciplina: Fundamentos de Progaramacao')
  print ('Universidade federal de Itajuba - Unifei\n\n')

def retorna_conceito(media):
  if media>=0 and media<=4.9:
    return 'D'
  elif media>=5 and media<=6.9:
    return 'C'
  elif media>=7 and media<=8.9:
    return 'B'
  elif media>=9 and media<=10:
    return 'A'

cabecalho()
media = float(input('Digite a sua m�dia final: '))
if media>=0 and media<=10:
  print('\nO coneceito �: '+str(retorna_conceito(media)))
else:
  print('\nDigite uma m�dia existente!\n')

