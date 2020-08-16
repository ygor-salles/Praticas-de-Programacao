/*
TestePessoa.java
 */
public class Pessoa {
    String nome;
    int idade;
    double peso;
    
    //Construtor 1 (Passando todos atributos) - pe1
    Pessoa(String nome, int idade, double peso){
        this.nome = nome;
        this.peso = peso;
        this.idade = idade;
    }
    
    //Construtor 2 (Passando apenas um atributo) - pe2
    Pessoa(String nome){
        this.nome = nome;
    }
    
    String dizerInfo(){
        return this.nome+" idade: "+this.idade+" - peso: "+this.peso;
    }
    
    String dizerInfoNome(){
        return this.nome;
    }
}
