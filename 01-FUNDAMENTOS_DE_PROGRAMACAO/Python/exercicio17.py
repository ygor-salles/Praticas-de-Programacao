"""
17 - Fa�a uma fun��o para criptografar uma frase digitada pelo usu�rio.
A criptografia dever� substituir todas as vogais por *. 
Utilize a fun��o no programa principal. A frase poder� ter, no m�ximo, 50 caracteres.
"""

#FUN��O CRIPTOGRAFIA
def criptografia(frase):
  for i in range(len(frase)):
    if frase[i] in 'AaEeIiOoUu':
      frase = frase.replace(frase[i], '*')

  print(frase)

#FUN��O PRINCIPAL
frase = str(input('Digite uma frase: '))
criptografia(frase)