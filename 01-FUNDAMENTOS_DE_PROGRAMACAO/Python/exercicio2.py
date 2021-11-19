""" 2 - Dado um número inteiro positivo de 3 algarismos, inverter a ordem de seus
algarismos. Os três algarismos do número dado são diferentes de zero. """

num = int(input('Digite um numero inteiro de 3 algarismos diferente de 0: '))

centena = int(num/100)
dezena = int((num%100)/10)
unidade = int((num%100)%10)

print('O numero invertido é: ' +str(unidade) +str(dezena) +str(centena))