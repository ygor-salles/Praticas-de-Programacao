module.exports = class Pessoa{
    constructor(nome, idade){
        this.nome = nome
        this.idade = idade
    }

    dizerNome(){
        return 'Meu nome é: '+this.nome
    }
}