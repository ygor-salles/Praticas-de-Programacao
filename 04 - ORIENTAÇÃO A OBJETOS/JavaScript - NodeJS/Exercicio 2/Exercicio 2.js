class CaixaDeNumero {
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

function teste(incio, fim, palpite){
    var numeroSecreto = Math.floor(Math.random() * 10)
    let caixa = new CaixaDeNumero(numeroSecreto)
    var op=1
    do{
        switch(op){
            case 1:
                console.log(caixa.ehPar())
                break
            case 2:
                caixa.estaEntre(incio, fim)
                break
            case 3:
                caixa.arriscaPalpite(palpite)
                break
            case 4:
                console.log('A tabuada: '+caixa.dizerTabuada())
                break
            case 5:
                console.log('O número secreto é: '+caixa.dizerNumeroSecreto())
                break
            case 6:
                console.log('Saindo...\n')
                break
            default:
                console.log('Opção incorreta!')
                break
        }
        op++
    } while(op != 7)
}

teste(2, 6, 4)
teste(1, 5, 8)
