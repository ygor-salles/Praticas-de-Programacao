module.exports = class Pessoa {
    constructor(nome, endereco, idade, listaDisc){
        this.nome = nome
        this.endereco = endereco
        this.idade = idade
        this.listaDisc = listaDisc
    }

    insereDisc(disc){
        this.listaDisc.push(disc)
    }
}