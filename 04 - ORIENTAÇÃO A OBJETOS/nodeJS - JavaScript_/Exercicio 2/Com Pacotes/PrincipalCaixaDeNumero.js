let CaixaDeNumero = require('./CaixaDeNumero')

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

