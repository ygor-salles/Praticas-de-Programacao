module.exports = class Veiculo {
    constructor(marca, cor, motorLigado, estilo){
        this.marca = marca
        this.cor = cor
        this.motorLigado = motorLigado
        this.estilo = estilo
    }

    ligaDesligaMotor(acao){
        if (acao)
            console.log('Motor está ligado')
        else
            console.log('Motor está desligado')
    }
    
    mostraAtributos(){
        return this.marca+' '+this.cor+' '+this.estilo
    }
}