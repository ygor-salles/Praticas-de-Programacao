var Carro = require('./Carro')
var Motocicleta = require('./Motocicleta')

var car = new Carro('Renault', 'Azul', false, 'Sedan', false)
var moto = new Motocicleta("Suzuki", 'Vermelha', false, 'Esportiva')

moto.ligaDesligaMotor(true)
console.log('Moto da '+moto.mostraAtributos())

console.log()
car.encheEsvaziaPortaMalas(true)
car.ligaDesligaMotor(true)
console.log('Carro da '+car.mostraAtributos())