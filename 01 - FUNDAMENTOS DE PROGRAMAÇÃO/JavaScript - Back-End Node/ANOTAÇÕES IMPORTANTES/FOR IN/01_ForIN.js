/* O FOR IN serve para percorrer um array, objeto ou uma String que já está pré-definido, sem precisar saber
a quantidade de elementos que ele possui. Basta apenas seguir a estrutura conforme abaixo */

//Exemplo de Array
const notas = [6.7, 7.7, 8.8, 9.1, 7.5]

for(let i in notas)
    console.log(i, notas[i])

console.log()

//Exemplo de Objeto
const pessoa = {
    nome: 'Ana',
    sobrenome: 'Silva',
    idade: 29,
    peso: 64
}

for(let atributo in pessoa)
    console.log(`${atributo} = ${pessoa[atributo]}`)


//Exemplo de uma String que é um array de caracteres
palavra = 'Olá Mundo'

for(let j in palavra)
    if('M' == palavra[j])
        letra = palavra[j]

console.log('\n'+letra)