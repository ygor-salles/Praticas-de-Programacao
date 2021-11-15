/*
6 - Elabore um programa que leia dois números n e m (m>=n) e escreva todos os números
pares entre n e m.
*/


const m: number = 2
const n: number = 20

for (let i = m; i <= n; i++)
    if (i % 2 == 0)
        console.log(i)

