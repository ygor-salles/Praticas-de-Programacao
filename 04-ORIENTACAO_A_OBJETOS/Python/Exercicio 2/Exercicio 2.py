class CaixaDeNumero:
    def __init__(self, numeroSecreto):
        self.numeroSecreto = numeroSecreto

    def ehPar(self):
        return self.numeroSecreto % 2 == 0

    def dizerTabuada(self):
        array = []
        for i in range(10):
            array.append(self.numeroSecreto * (i+1))
        return array

    def dizerNumero(self):
        print('O número secreto é: {}'.format(self.numeroSecreto))

    def estaEntre(self, inicio, fim):
        if (inicio <= self.numeroSecreto and fim >= self.numeroSecreto):
            print('Está entre o intervalo informado')
        else:
            print('Não está entre o intervalo informado')
    
    def dizerPalpite(self, palpite):
        if palpite == self.numeroSecreto:
            print('PARABÉNS VOCÊ ACERTOU')
        else:
            print('Infelizmente não é esse tente novamente')

import random
#import os
numero = random.randrange(1, 10)
caixa = CaixaDeNumero(numero)

while True:
    print('\n1 - Verificar se é par')
    print('2 - Verificar se o numero se encontra em um intervalo')
    print('3 - Arriscar um palpite')
    print('4 - Dizer a tabuada')
    print('5 - INFORMAR O NÚMERO')
    print('6 - sair')
    opcao = int(input('Opção >> '))

    if opcao == 1:
        if caixa.ehPar():
            print('O numero é par')
        else:
            print('O número é ímpar')

    elif opcao == 2:
        inicio = int(input('Digite um intervalo\ndgite o ponto de inicio: '))
        fim = int(input('Digite o ponto de fim: '))
        print(caixa.estaEntre(inicio, fim))

    elif opcao == 3:
        palpite = int(input('Digite um palpite: '))
        caixa.dizerPalpite(palpite)

    elif opcao == 4:
        print(caixa.dizerTabuada())

    elif opcao == 5:
        caixa.dizerNumero()

    elif opcao == 6:
        print('SAINDO...')
        break

    else:
        print('Opção Inválida!')
    
    #os.system('pause')
    #os.system('cls') or None