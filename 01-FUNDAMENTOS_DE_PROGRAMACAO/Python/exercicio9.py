"""
9 - Suponha que no ano N a popula��o dos EUA seja maior que a brasileira. Sabendo-se que os Estados Unidos possuem um crescimento anual de 2% na sua popula��o e que o Brasil tem
crescimento anual de 4%, determine o ano em que as duas popula��es estar�o pr�ximas em  quantidade.
"""

bra=210
eua=327.2
ano=2019

print('O ano �: '+str(ano))
print('A popula��o brasileira � de: '+str(bra)+' MI')
print('A popula��o americana � de: '+str(eua)+' MI')

while(bra<eua):
  bra += (bra*0.04)
  eua += (eua*0.02)
  ano += 1

print("\nO ano em que a popula��o brasileira se igular� ou ultrapassar� a do EUA ser� em: "+str(ano))
print("Basil: " +str(bra)+ " MI\nEUA: "+str(eua)+ " MI\n")
