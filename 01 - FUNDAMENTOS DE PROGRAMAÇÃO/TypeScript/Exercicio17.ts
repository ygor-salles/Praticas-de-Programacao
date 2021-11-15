/*
17 - Faça uma função para criptografar uma frase digitada pelo usuário.
A criptografia deverá substituir todas as vogais por *. 
Utilize a função no programa principal. A frase poderá ter, no máximo, 50 caracteres.
*/

function criptografia(frase: string) {
    frase = frase.replace(/a/gi, '*')
    frase = frase.replace(/e/gi, '*')
    frase = frase.replace(/i/gi, '*')
    frase = frase.replace(/o/gi, '*')
    frase = frase.replace(/u/gi, '*')
    console.log(frase)
}

//FUNÇÃO PRINCIPAL
const frase = 'Aprendendo JavaScript'
criptografia(frase)
