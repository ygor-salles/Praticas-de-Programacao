/*
TestePessoa.java
 */
public class Pessoa {
    String nome;
    int idade;
    
    Pessoa(String nome, int idade){
        this.nome = nome;
        this.idade = idade;
    }
    
    String dizerNome(){
        return "Meu nome é "+this.nome+" possuo "+this.idade+" anos";
    }
}
