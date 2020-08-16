/*

 */
public class Aluno extends Pessoa {
    int matricula;

    //CONSTRUTOR DA CLASSE HERDADA E DA PRÓPRIA CLASSE
    public Aluno(String nome, int idade, int matricula) {
        super(nome, idade);
        this.matricula = matricula;
    }
    
    String dizerMatricula(){
        return "Minha matricula é: "+this.matricula;
    }
    
    void dizerNomeMatricula(){
        System.out.println (super.dizerNome() + ". "+this.dizerMatricula());
    }
}
