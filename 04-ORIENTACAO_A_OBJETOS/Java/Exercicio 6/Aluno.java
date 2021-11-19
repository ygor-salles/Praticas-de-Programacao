
public class Aluno extends Pessoa {
    double nota;
    
    Aluno(String nome, String cpf, double nota){
        super(nome, cpf);
        this.nota = nota;
    }
    
    void mostraAtributos(){
        System.out.println("Aluno: "+super.nome+". CPF: "
                +super.cpf+". Nota: "+this.nota);
    }
}
