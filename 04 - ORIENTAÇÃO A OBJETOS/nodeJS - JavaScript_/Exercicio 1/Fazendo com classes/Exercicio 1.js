class CaixaDeNumero {
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

//PRINCIPAL
const geraValor = Math.floor(Math.random() * 10)
const caixa = new CaixaDeNumero(geraValor)

if(caixa.ehPar())
    console.log('É par')
else
    console.log('Não é par')

console.log('O número secreto é: '+caixa.dizerQualNumero())

console.log('A tabuada: '+caixa.dizerTabuada())