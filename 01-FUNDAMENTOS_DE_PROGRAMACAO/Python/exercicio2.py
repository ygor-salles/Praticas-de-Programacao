""" 2 - Dado um n�mero inteiro positivo de 3 algarismos, inverter a ordem de seus
algarismos. Os tr�s algarismos do n�mero dado s�o diferentes de zero. """

num = int(input('Digite um numero inteiro de 3 algarismos diferente de 0: '))

centena = int(num/100)
dezena = int((num%100)/10)
unidade = int((num%100)%10)

print('O numero invertido �: ' +str(unidade) +str(dezena) +str(centena))