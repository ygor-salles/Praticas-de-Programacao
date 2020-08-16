var Pessoa = require('./Pessoa')

module.exports = class Disciplina{
    constructor(nomeDisc, cargaHoraria){
        this.nomeDisc = nomeDisc
        this.cargaHoraria = cargaHoraria
    }
}