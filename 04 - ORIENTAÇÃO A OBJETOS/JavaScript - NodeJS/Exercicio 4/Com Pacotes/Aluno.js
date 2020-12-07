let Pessoa = require('./Pessoa')

module.exports = class Aluno extends Pessoa {
    constructor(nome, idade, matricula){
        super(nome, idade)
        this.matricula = matricula
    }

    dizerMatricula(){
        return 'Minha matricula é: '+this.matricula
    }

    dizerNomeMatricula(){
        return super.dizerNome()+' e '+this.dizerMatricula()
    }
}