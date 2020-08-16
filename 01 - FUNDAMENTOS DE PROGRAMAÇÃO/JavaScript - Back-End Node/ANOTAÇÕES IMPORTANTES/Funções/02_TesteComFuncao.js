/*Pode se passar como parâmetro de uma função uma outra função no JS*/

function run(fun){
    fun()
}

//Chamando a função run e passando para o parametro 'fun' uma outra função
run (function() {console.log('Executando...')})