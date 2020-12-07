//Utilizando o método tradicional de classes
let CaixaDeNumero = class {
    constructor(numeroSecreto){
        this.numeroSecreto = numeroSecreto
    }

    ehPar(){
        return this.numeroSecreto % 2 == 0
    }

    dizerQualNumero(){
        return this.numeroSecreto
    }

    dizerTabuada(){
        let vetor = []
        for(let i=0; i<10; i++){
            vetor[i] = this.numeroSecreto * (i+1) 
        }
        return vetor
    }
}

//para poder exportar o arquivo
module.exports = CaixaDeNumero
