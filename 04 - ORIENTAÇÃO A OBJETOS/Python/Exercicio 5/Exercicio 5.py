class Veiculo:
    def __init__(self, marca, cor, motorLigado):
        self.marca = marca
        self.cor = cor
        self.motorLigado = motorLigado
    
    def isMotorLigado(self):
        return self.motorLigado
    
    def ligaMotor(self):
        if self.motorLigado == True:
            print('O motor está ligado')
        else:
            self.motorLigado = True
            print('O motor acaba de ser ligado')

class Carro(Veiculo):
    def __init__(self, marca, cor, motorLigado, portaMalasCheio):
        super().__init__(marca, cor, motorLigado)
        self.portaMalasCheio = portaMalasCheio
    
    def isPortaMalasCheio(self):
        return self.portaMalasCheio
    
    def enchePortaMalas(self):
        if self.portaMalasCheio == True:
            print('Porta malas já está cheio')
        else:
            self.portaMalasCheio = True
            print('Porta Malas acaba de ser carregado')
    
    def mostraAtributos(self):
        print('Este carro é um {} {}'.format(self.marca, self.cor))
        if(self.isMotorLigado()):
            print('Seu motor está ligado')
        else:
            print('Seu motor está desligado')
        if(self.isPortaMalasCheio()):
            print('Seu porta malas está cheio')
        else:
            print('Seu porta malas está vazio')

class Motocicleta(Veiculo):
    def __init__(self, marca, cor, motorLigado, estilo):
        super().__init__(marca, cor, motorLigado)
        self.estilo = estilo
    
    def mostraAtributos(self):
        print('Esta moto é uma {} {} estilo {}'.format(self.marca, self.cor, self.estilo))
        if(self.isMotorLigado()):
            print('Seu motor está ligado')
        else:
            print('Seu motor está desligado')


moto = Motocicleta('Honda', 'Azul', False, 'Naked')
moto.mostraAtributos()
moto.ligaMotor()
moto.mostraAtributos()
print()
carro = Carro('Chevrolet', 'Branco', False, False)
carro.mostraAtributos()
carro.enchePortaMalas()
carro.ligaMotor()
carro.mostraAtributos()



    
