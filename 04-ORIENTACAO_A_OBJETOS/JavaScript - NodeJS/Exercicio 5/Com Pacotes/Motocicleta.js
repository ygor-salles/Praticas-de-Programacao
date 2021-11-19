var Veiculo = require('./Veiculo')

module.exports = class Motocicleta extends Veiculo {
    constructor(marca, cor, motorLigado, estilo){
        super(marca, cor, motorLigado, estilo)
    }

}