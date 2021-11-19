/*
3 - Ler dois números, armazenando-os nas variáveis numeradorA e numeradorB. Verificar se o valor de
numeradorA é maior que o valor de numeradorB e, em caso positivo, trocar os conteúdos das variáveis.
*/

let aux: number;

let numeradorA = 10;
let numeradorB = 4;

if (numeradorA > numeradorB) {
    aux = numeradorA;
    numeradorA = numeradorB;
    numeradorB = aux;
}

console.log('numeradorA:', numeradorA, '\nnumB: ' + numeradorB);