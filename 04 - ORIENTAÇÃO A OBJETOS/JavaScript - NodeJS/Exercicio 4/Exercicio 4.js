class Pessoa{
    constructor(nome, idade){
        this.nome = nome
        this.idade = idade
    }

    dizerNome(){
        return 'Meu nome é: '+this.nome
    }
}

class Aluno extends Pessoa {
    constructor(nome, idade, matricula){
        super(nome, idade)
        this.matricula = matricula
    }

    dizerMatricula(){
        return 'Minha matricula é: '+this.matricula
    }

    dizerNomeMatricula(){
        console.log (super.dizerNome()+' e '+this.dizerMatricula())
    }
}

let al = new Aluno('Maria Antonieta', 25, '20198745')
console.log(al.dizerNome())
console.log(al.dizerMatricula())
al.dizerNomeMatricula()