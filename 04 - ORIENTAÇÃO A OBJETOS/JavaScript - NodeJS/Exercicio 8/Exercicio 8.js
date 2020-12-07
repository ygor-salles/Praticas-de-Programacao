/*
JavaScript não trabalha com atributos privados diretamente, não possui métodos getters e setters
e não possui classes abstratas. Um modo de fazer essa configuções seria com funções pois o foco de 
JavaScript não é Orientação Objetos, e o JS utiliza-se mais das funções para trabalhar com POO
*/

class Pessoa {
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

class Professor extends Pessoa {
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

class Aluno extends Pessoa {
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

class Disciplina{
    constructor(nomeDisc, cargaHoraria){
        this.nomeDisc = nomeDisc
        this.cargaHoraria = cargaHoraria
    }
}

disc1 = new Disciplina('Programacao OO', 64)
disc2 = new Disciplina('Estruturas de Dados', 96)
disc3 = new Disciplina('Banco de Dados', 64)

prof = new Professor('Joao', 'Av. BPS, 1303', 33, 'Doutorado', [])
prof.insereDisc(disc1)
prof.insereDisc(disc2)
prof.printDescricao()
console.log()
aluno = new Aluno('Pedro', 'Av. Cesario Alvin, 234', 20, 'SIN', [])
aluno.insereDisc(disc2)
aluno.insereDisc(disc3)
aluno.printDescricao()  
aluno.insereDisc(disc1) 
aluno.printDescricao()  