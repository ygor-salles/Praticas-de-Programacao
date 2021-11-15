import { Person } from "./models/Person";

const person = new Person('Ygor', 25, 1.8, 70);

console.log(`O IMC deve retornar 21.60: ${person.getImc()}`);
console.log(`O nome deve ser Rogério: ${person.getName()}`);
console.log(`Deve ser maior de idade: ${person.isOfLegalAge() ? 'Maior de idade' : 'Menor de idade'}`);