/* Uma função pode ter como retorno uma outra função */

function soma(a, b){
    return function(c){
        console.log(a+b+c)
    }
}

soma(1, 2)(4)
//1 é o parametro a, 2 o parametro b, 4 o parametro c

//só soma(1, 2) dessa forma constaria erro

const tres = soma(1, 2)
tres(4)
//Pode ser feito dessa forma tb