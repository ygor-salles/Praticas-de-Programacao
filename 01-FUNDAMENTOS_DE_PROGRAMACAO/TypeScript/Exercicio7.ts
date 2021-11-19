/*
7 - Elabore um programa em C para calcular e escrever a seguinte soma:
    37 * 38       36 * 37      35 * 36            1 * 2
S = ---------- + --------- + ---------- + ..... + ------
        1           2           3                   37      
*/

let soma: number = 0;
let numA: number = 37;
let numB: number = 38;

for (let den = 1; den <= 37; den++) {
    soma += ((numA * numB) / den);
    numA--;
    numB--;
}
console.log("A soma é: ", soma);