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
        return self.numeroSecreto

import random
numero = random.randrange(1, 10)
caixa = CaixaDeNumero(numero)

if caixa.ehPar():
    print('O numero é par')
else:
    print('O número é ímpar')

print(caixa.dizerTabuada())

print(caixa.dizerNumero())

    