//Utilizando Função Construtora

let CaixaDeNumero = function(numeroSecreto){
    this.numeroSecreto = numeroSecreto

    this.ehPar = function(){
        return this.numeroSecreto%2 == 0
    }

    this.dizerTabuada = function(){
        let vetor = []
        for(let i=0; i<10; i++)
            vetor[i] = this.numeroSecreto * (i+1)
        return vetor
    }

    this.dizerQualNumero = function(){
        return this.numeroSecreto
    }
}

module.exports = CaixaDeNumero