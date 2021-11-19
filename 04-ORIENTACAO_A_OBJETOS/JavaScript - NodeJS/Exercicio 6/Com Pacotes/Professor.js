var Pessoa = require('./Pessoa')

module.exports = class Professor extends Pessoa{
    constructor(nome, cpf, salario){
        super(nome, cpf)
        this.salario = salario
    }

    atribuiNota(nota){
        return nota
    }

    reajustaSalario(){
        return this.salario+(this.salario * 0.05)
    }

    /*um ponto a ser destacado é que em JS, após a declaração atributos no construtor referentes
     a super classe, para utilizá-los depois deve ser com o operador this e não com o super, diferentemente
     do Java. Veja conforme a função abaixo, os atributos nome e cpf são da super classe mais como
     já foram declarados no construtor dessa classe são reconhecidos agora como this */
    mostraAtributos(){
        return `Professor: ${this.nome}, CPF: ${this.cpf}, Salario: ${this.salario}`
    }
}