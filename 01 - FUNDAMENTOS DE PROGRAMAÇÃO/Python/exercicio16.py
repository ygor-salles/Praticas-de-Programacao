"""
16 - Escreva um programa que recebe uma cadeia de caracteres verifica se esta cadeia é um palíndromo.
Uma palavra é dita ser palíndromo se a sequência de seus caracteres da esquerda para a direita é
igual à sequência de seus caracteres da direita para a esquerda. Ex.: arara.
"""

#FUNÇÃO TESTA PALINDROMO
def palindromo(str):
  for i in range(int(len(str)/2)):
    if str[i] != str[len(str) - i - 1]:
        return False
  return True

#FUNÇÃO PRINCIPAL
str = input("Digite uma palavra: ")
print()

if palindromo(str):
    print(str + " é palindromo!!")
else:
    print(str + " nao é palindromo!!")