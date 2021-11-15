/*
14 - Leia um conjunto de elementos e os armazene em um vetor de forma 
dinâmica. Em seguida, leia um nome e verifique se o mesmo faz parte
desse vetor.
*/

const array_elementos = ['Lucas', 'José', 'Adriana', 'Joana', 'Larissa', 'Marcos', 1, true, 5.3, { id: 3 }]
let array_recebe = []

let k = 0
do {
    array_recebe.push(array_elementos[k])
    //array_recebe[k] = array_elementos[k] ==>> PODE SER FEITO PELA FORMA TRADICIONAL TB
    k++
} while (k < array_elementos.length)

array_recebe.sort() //ordenando array
console.log('\nSeu novo array é: ', array_recebe)

const nomeA = 'Adriana'
if (array_recebe.indexOf(nomeA) != -1)
    console.log(`\nO nomeA ${nomeA} existe no array!`)
else
    console.log(`\nO nome ${nomeA} NÃo existe no array!`)
