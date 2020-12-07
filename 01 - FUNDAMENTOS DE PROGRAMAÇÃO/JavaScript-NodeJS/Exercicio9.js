/* 
9 -Suponha que no ano N a população dos EUA seja maior que a brasileira. Sabendo-se que os
Estados Unidos possuem um crescimento anual de 2% na sua população e que o Brasil tem
crescimento anual de 4%, determine o ano em que as duas populações serão iguais (em
quantidade).
*/

bra=210, eua=327.2;
ano=2019;

console.log("O ano é: ",ano);
console.log("\n A população brasileira é de: "+bra+" MI");
console.log(" A população americana é de: ",eua+" MI");

while (eua>bra) {
    bra=bra+(bra*0.04);
    eua=eua+(eua*0.02);
    ano++;
}
console.log ('\nO ano em que a população brasileira se igulará ou ultrapassará a do EUA será em: ',ano);
console.log(`Brasil: ${bra} MI \nEUA: ${eua} MI \n`);
