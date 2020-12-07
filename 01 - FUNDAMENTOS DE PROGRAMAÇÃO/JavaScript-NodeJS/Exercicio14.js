/*
14 - Leia um conjunto de elementos e os armazene em um vetor de forma 
dinâmica. Em seguida, leia um nome e verifique se o mesmo faz parte
desse vetor.
*/

const array_elementos = ['Lucas', 'José', 'Adriana', 'Joana', 'Larissa', 'Marcos', 1, true, 5.3, {id: 3}]
var array_recebe = []

var i=0
do{
    array_recebe.push(array_elementos[i])
    //array_recebe[i] = array_elementos[i] ==>> PODE SER FEITO PELA FORMA TRADICIONAL TB
    i++
} while(i < array_elementos.length)

array_recebe.sort() //ordenando array
console.log('\nSeu novo array é: ',array_recebe)

nome = 'Adriana'
if (array_recebe.indexOf(nome) != -1)
    console.log(`\nO nome ${nome} existe no array!`)
else
    console.log(`\nO nome ${nome} NÃo existe no array!`)
