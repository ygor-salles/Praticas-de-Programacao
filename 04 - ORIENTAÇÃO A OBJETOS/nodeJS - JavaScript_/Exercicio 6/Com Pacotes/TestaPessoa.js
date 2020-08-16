var Aluno = require('./Aluno')
var Professor = require('./Professor')

var prof = new Professor("Vidarte", "156.252.333-77", 7000)
var al1 = new Aluno("Rogério", "147.897.785-96", 0)
var al2 = new Aluno('Patricia', '258.897.785-00', 0)

al1.nota = prof.atribuiNota(8.5)
al2.nota = prof.atribuiNota(5.4)
prof.salario = prof.reajustaSalario()

console.log(al1.mostraAtributos())
console.log(al2.mostraAtributos())
console.log(prof.mostraAtributos())