""" 1 - Faça um algoritmo que receba o peso de uma pessoa, calcule e mostre:
a. O novo peso quando a pessoa engorda 15% do peso digitado
b. O novo peso quando a pessoa engorda 20% do peso digitado """

peso = float(input('Digite seu peso: '))

np15 = peso + (peso*0.15)
np20 = peso + (peso*0.20)

print('Peso mais 15% é: ' + str(np15))
print('Peso mais 15% é: ' + str(np20))