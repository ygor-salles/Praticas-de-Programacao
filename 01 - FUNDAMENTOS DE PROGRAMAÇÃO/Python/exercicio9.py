"""
9 - Suponha que no ano N a população dos EUA seja maior que a brasileira. Sabendo-se que os Estados Unidos possuem um crescimento anual de 2% na sua população e que o Brasil tem
crescimento anual de 4%, determine o ano em que as duas populações estarão próximas em  quantidade.
"""

bra=210
eua=327.2
ano=2019

print('O ano é: '+str(ano))
print('A população brasileira é de: '+str(bra)+' MI')
print('A população americana é de: '+str(eua)+' MI')

while(bra<eua):
  bra += (bra*0.04)
  eua += (eua*0.02)
  ano += 1

print("\nO ano em que a população brasileira se igulará ou ultrapassará a do EUA será em: "+str(ano))
print("Basil: " +str(bra)+ " MI\nEUA: "+str(eua)+ " MI\n")
