/*
15 - Escreva um programa que leia uma matriz 5 x 5 de forma randômica e imprima
sua diagonal primária e secundária.
*/

//Não é possível trabalhar com matriz dessa forma em JavaScript, só existe Array

array = []
for(i=0; i<4; i++)
    array[i] = Math.floor(Math.random() * 10)

console.log(array)