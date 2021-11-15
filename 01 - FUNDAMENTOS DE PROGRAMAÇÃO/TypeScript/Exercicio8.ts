/* 
8 - Elabore um algoritmo para calcular e imprimir o valor de S, sendo S = -1/2 + 2/4 - 3/6 + 4/8
-5/10 +, ..., +10/20 
*/

let s = 0
let den = 2

for (let i = 1; i <= 10; i++) {
    if (i % 2 == 0)
        s = s + (i / den)
    else
        s = s + ((-i) / den)
    den += 2
}
console.log("\n A soma é de: ", s)

