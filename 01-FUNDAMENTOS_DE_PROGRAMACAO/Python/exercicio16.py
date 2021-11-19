"""
16 - Escreva um programa que recebe uma cadeia de caracteres verifica se esta cadeia � um pal�ndromo.
Uma palavra � dita ser pal�ndromo se a sequ�ncia de seus caracteres da esquerda para a direita �
igual � sequ�ncia de seus caracteres da direita para a esquerda. Ex.: arara.
"""

#FUN��O TESTA PALINDROMO
def palindromo(str):
  for i in range(int(len(str)/2)):
    if str[i] != str[len(str) - i - 1]:
        return False
  return True

#FUN��O PRINCIPAL
str = input("Digite uma palavra: ")
print()

if palindromo(str):
    print(str + " � palindromo!!")
else:
    print(str + " nao � palindromo!!")