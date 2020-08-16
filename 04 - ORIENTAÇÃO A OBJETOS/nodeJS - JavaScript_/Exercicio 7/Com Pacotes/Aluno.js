var Pessoa = require('./Pessoa')

module.exports = class Aluno extends Pessoa {
    constructor(nome, endereco, idade, curso, listaDisc){
        super(nome, endereco, idade, listaDisc)
        this.curso = curso
    }

    printDescricao(){
        console.log(`Aluno: ${this.nome}`)
        console.log(`Idade: ${this.idade}`)
        console.log(`Curso: ${this.curso}`)
        const lista = this.listaDisc
        for(let i=0; i<lista.length; i++)
            console.log(`Nome: ${lista[i].nomeDisc} - Carga Horária: ${lista[i].cargaHoraria}`)
    }
}
