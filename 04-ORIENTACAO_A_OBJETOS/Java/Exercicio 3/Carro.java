/*
TestePessoa.java
 */
public class Carro {
    Pessoa piloto;
    
    Carro(){
        //é criado um novo objeto, uma nova pessoa
        this.piloto = new Pessoa("Marcos");
    }
    
    Carro(Pessoa pes){
        //A classe carro recebe os atributos da classe pessoa
        this.piloto = pes;
    }
}
