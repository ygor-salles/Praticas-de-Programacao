class Pessoa {
    constructor(nome, cpf){
        this.cpf = cpf
        this.nome = nome
    }
}

class Professor extends Pessoa{
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
        console.log(`Professor: ${this.nome}, CPF: ${this.cpf}, Salario: ${this.salario}`)
    }
}

class Aluno extends Pessoa{
    constructor(nome, cpf, nota){
        super(nome, cpf)
        this.nota = nota
    }

    mostraAtributos(){
        console.log(`Aluno: ${this.nome}, CPF: ${this.cpf}, Nota: ${this.nota}`)
    }
}

var prof = new Professor("Vidarte", "156.252.333-77", 7000)
var al1 = new Aluno("Rogério", "147.897.785-96", 0)
var al2 = new Aluno('Patricia', '258.897.785-00', 0)

al1.nota = prof.atribuiNota(8.5)
al2.nota = prof.atribuiNota(5.4)
prof.salario = prof.reajustaSalario()

al1.mostraAtributos()
al2.mostraAtributos()
prof.mostraAtributos()