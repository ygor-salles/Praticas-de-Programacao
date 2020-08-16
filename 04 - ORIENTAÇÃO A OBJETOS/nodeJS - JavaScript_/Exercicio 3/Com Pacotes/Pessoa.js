module.exports = class Pessoa {
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
