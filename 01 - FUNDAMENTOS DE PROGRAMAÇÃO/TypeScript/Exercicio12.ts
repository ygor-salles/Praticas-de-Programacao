/* 
12 - Faça um programa que contenha uma função que recebe dois números
positivos e retorna a soma dos N números inteiros existentes entre eles (inclusive).
Use a função no programa principal 
*/

function somaXY(x: number, y: number) {
    let soma = 0
    if (y > x) {
        for (let i = x; i <= y; i++)
            soma = soma + i
    }
    else {
        for (let i = y; i <= x; i++)
            soma = soma + i
    }
    return soma
}

let x = 2; let y = 5;
const funcao = somaXY(x, y)
console.log('\n O valor da soma eh: ', funcao)
