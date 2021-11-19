var Veiculo = require('./Veiculo')

module.exports = class Carro extends Veiculo {
    constructor(marca, cor, motorLigado, estilo, portaMalasCheio){
        super(marca, cor, motorLigado, estilo)
        this.portaMalasCheio = portaMalasCheio
    }

    encheEsvaziaPortaMalas(acao){
        if(acao)
            console.log('Porta malas cheio')
        else
            console.log('Porta Malas vazio')
    }

}