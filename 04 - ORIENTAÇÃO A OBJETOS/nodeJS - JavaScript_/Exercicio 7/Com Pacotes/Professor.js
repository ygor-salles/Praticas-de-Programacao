var Pessoa = require('./Pessoa')

module.exports = class Professor extends Pessoa {
    constructor(nome, endereco, idade, titulacao, listaDisc){
        super(nome, endereco, idade, listaDisc)
        this.titulacao = titulacao
    }

    printDescricao(){
        console.log(`Professor: ${this.nome}`)
        console.log(`Idade: ${this.idade}`)
        console.log(`Titulação: ${this.titulacao}`)
        const lista = this.listaDisc
        for(let i=0; i<lista.length; i++)
            console.log(`Nome: ${lista[i].nomeDisc} - Carga Horária: ${lista[i].cargaHoraria}`)
    }
}