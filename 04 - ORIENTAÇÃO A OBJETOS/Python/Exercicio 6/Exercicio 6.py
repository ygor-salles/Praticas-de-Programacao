class Pessoa:
    def __init__(self, nome, cpf):
        self.nome = nome
        self.cpf = cpf
    
class Professor(Pessoa):
    def __init__(self, nome, cpf, salario):
        super().__init__(nome, cpf)
        self.salario = salario
    
    def atribuiNota(self, nota):
        return nota
    
    def reajustaSalario(self):
        return self.salario + (self.salario*0.05)
    
    def mostraAtributos(self):
        print('Professor: {}, CPF: {}, Salário: {}'.format(self.nome, self.cpf, self.salario))
    
class Aluno(Pessoa):
    def __init__(self, nome, cpf, nota):
        super().__init__(nome, cpf)
        self.nota = nota
    
    def mostraAtributos(self):
        print('Aluno: {}, CPF: {}, Nota: {}'.format(self.nome, self.cpf, self.nota))


prof = Professor("Vidarte", "156.252.333-77", 7000)
al1 = Aluno("Rogério", "147.897.785-96", 0)
al2 = Aluno('Patricia', '258.897.785-00', 0)

al1.nota = prof.atribuiNota(8.5)
al2.nota = prof.atribuiNota(5.4)
prof.salario = prof.reajustaSalario()

al1.mostraAtributos()
al2.mostraAtributos()
prof.mostraAtributos()