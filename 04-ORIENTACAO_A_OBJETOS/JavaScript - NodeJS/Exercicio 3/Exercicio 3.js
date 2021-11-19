class Carro{
    constructor(piloto){
        this.piloto = piloto
    }
}

class Pessoa {
    constructor(nome, idade, peso){
        this.nome = nome
        this.idade = idade
        this.peso = peso
    }

    dizerInfo(){
        return `${this.nome} idade: ${this.idade}, peso: ${this.peso}`
    }

    dizerNome(){
        return this.nome
    }
}

let pe1 = new Pessoa('João', 21, 75.3)
let pe2 = new Pessoa('Carlos')
console.log(pe1.dizerInfo())
console.log(pe2.dizerNome())

//Os parametros do construtor devem seguir conforme a ordem de passagem.
let car = new Carro('Marcos')
console.log('\nPiloto do carrro 1: '+car.piloto)
let car2 = new Carro(pe1)
console.log('Piloto do carrro 2: '+car2.piloto.dizerInfo())