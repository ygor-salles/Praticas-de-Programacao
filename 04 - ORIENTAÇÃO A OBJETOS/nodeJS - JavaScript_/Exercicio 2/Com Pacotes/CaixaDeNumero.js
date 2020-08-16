let CaixaDeNumero = class {
    constructor(numeroSecreto){
        this.numeroSecreto = numeroSecreto
    }

    ehPar = () => this.numeroSecreto%2==0 ? 'É par' : 'É ímpar'

    dizerTabuada(){
        let vetor = []
        for(let i=0; i<10; i++){
            vetor[i] = this.numeroSecreto * (i+1)
        }
        return vetor
    }

    dizerNumeroSecreto = () => this.numeroSecreto

    estaEntre(inicio, fim){
        if(inicio>=this.numeroSecreto && fim<=this.numeroSecreto)
            console.log('Está dentro do intervalo informado')
        else
            console.log('Não está dentro do intervalo')
    }

    arriscaPalpite(palpite){
        if(palpite == this.numeroSecreto)
            console.log('PARABÉNS, VOCÊ ACERTOU!!')
        else
            console.log(`Infelizmente não é o ${palpite}, tente novamente`)
    }
}

module.exports = CaixaDeNumero