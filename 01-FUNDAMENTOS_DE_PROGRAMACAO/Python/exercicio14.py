"""
14 - Leia um conjunto de nomes e os armazene em um vetor de forma 
din�mica. Em seguida, leia um nome e verifique se o mesmo faz parte
desse vetor.
"""

array_nomes = []
while True:
    teste = ' '
    nome = str(input('Digite nome: '))
    array_nomes.append(nome)

    while teste not in 'SsNn':
        teste = str(input('Deseja continuar alocando nomes no array? [S/N] '))
    if teste in 'Nn': break

print('\nSeu array de nomes �: \n'+str(array_nomes))
nome_buscar = input('Digite o nome de busca: ')

if nome_buscar in array_nomes:
    print('\nO nome (' +nome_buscar+ ') est� no array nomes\n')
else:
    print('\nO nome ('+nome_buscar+') N�O est� no array\n')
