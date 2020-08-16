var Pessoa = require('./Pessoa')

module.exports = class Aluno extends Pessoa{
    constructor(nome, cpf, nota){
        super(nome, cpf)
        this.nota = nota
    }

    mostraAtributos(){
        return `Aluno: ${this.nome}, CPF: ${this.cpf}, Nota: ${this.nota}`
    }
}