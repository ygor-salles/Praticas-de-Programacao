/*EXEMPLO 1: Pode se armazenar qualquer tipo de dado em um array no JavaScript*/
function fun1(){}

fun2 = function (){
    return 'Fala Mané'
}

const obj = {numero: 3}
obj.falar = function(){return 'Olá mundo'}
obj.nome = 'NomeObjeto'

const array = [function(a, b){return a+b}, fun1, fun2, 'locao', 'a', 1, 2.333, true, obj.falar,  obj.nome, obj.numero]

//Necessário chamar as funções de cada elemento do array para que seja executadas
array[0] = array[0](1, 3) 
array[1] = array[1]()
array[2] = array[2]()
array[8] = array[8]()
console.log('\n'+array)

//Quantidade de elemntos dentro do array
console.log(array.length+' Elementos')

//Alterando elementos
array[3] = 'Não é locao'

//Adicionando mais elementos no array
array.push('adicionado', 100)

console.log('\n'+array)
console.log(array.length+' Elementos')