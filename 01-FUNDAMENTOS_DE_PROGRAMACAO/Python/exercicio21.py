"""
21 - Elabore um programa que receba a matr�cula, a nota 1 e nota 2 de uma lista de alunos e
escreva essas informa��es em um arquivo (nome do arquivo � arquivo.txt). A
leitura de dados deve ser interrompida quando for digitado a matricula = 0.
"""

f = open("arquivo.txt", "w")
mat = int(input('Digite a matr�cula: '))
while(mat!=0):
    n1 = float(input('Digite a Nota 1: '))
    n2 = float(input('Digite a Nota 2: '))
    f.write(f'\n Matricula: '+str(mat))
    f.write(f'\n Nota 1: '+str(n1))
    f.write(f'\n Nota 2: '+str(n2))
    f.write('\n')
    mat = int(input('\nDigite a matr�cula: '))
f.close()

#open and read the file after the appending:
f = open("arquivo.txt", "r")
print(f.read())