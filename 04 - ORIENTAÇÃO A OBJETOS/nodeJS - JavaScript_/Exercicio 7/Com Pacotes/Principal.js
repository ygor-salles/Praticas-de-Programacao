var Aluno = require('./Aluno')
var Professor = require('./Professor')
var Disciplina = require('./Disciplina')

disc1 = new Disciplina('Programação OO', 64)
disc2 = new Disciplina('Estrutura de Dados', 96)
disc3 = new Disciplina('Banco de Dados', 64)
listaDisc1 = [disc1, disc2]
listaDisc2 = [disc2, disc3, disc1]

prof = new Professor('João', 'Av. BPS, 1303', 33, 'Doutorado', listaDisc1)
prof.printDescricao()
console.log()
aluno = new Aluno('Pedro', 'Av. Cesario Alvin, 234', 20, 'SIN', listaDisc2)
aluno.printDescricao()