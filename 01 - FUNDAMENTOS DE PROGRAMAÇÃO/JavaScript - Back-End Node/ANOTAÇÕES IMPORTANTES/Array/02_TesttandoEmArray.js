array = ['Bia', 'Carlos', 'Ana', 'Maria']

//SORT - Ordena
array.sort()
console.log(array)

//SPLICE - no exexplo abaixo a partir do indice 1 exclui 2 elementos do array e adiciona os demais paramentros
array.splice(1, 2, 'Pedro', 'João', 'José')
console.log(array)

//DELETE - Deleta determinado elemento do array
delete array[0]
console.log(array)