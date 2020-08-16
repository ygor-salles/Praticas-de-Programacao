class Pessoa:
    def __init__(self, nome, idade):
        self.nome = nome
        self.idade = idade
    
    def dizerNome(self):
        return 'Meu nome é: {}'.format(self.nome)

class Aluno(Pessoa):
    def __init__(self, nome, idade, matricula):
        super().__init__(nome, idade)
        self.matricula = matricula
    
    def dizerMatricula(self):
        return 'Minha matrícula é: {}'.format(self.matricula)
    
    def dizerNomeMatricula(self):
        print('{} e {}'.format(self.dizerNome(), self.dizerMatricula()))

aluno = Aluno('Ygor', 23, '2017586')
print(aluno.dizerNome())
print(aluno.dizerMatricula())
aluno.dizerNomeMatricula()
