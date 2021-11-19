"""
17 - Faça uma função para criptografar uma frase digitada pelo usuário.
A criptografia deverá substituir todas as vogais por *. 
Utilize a função no programa principal. A frase poderá ter, no máximo, 50 caracteres.
"""

#FUNÇÃO CRIPTOGRAFIA
def criptografia(frase):
  for i in range(len(frase)):
    if frase[i] in 'AaEeIiOoUu':
      frase = frase.replace(frase[i], '*')

  print(frase)

#FUNÇÃO PRINCIPAL
frase = str(input('Digite uma frase: '))
criptografia(frase)