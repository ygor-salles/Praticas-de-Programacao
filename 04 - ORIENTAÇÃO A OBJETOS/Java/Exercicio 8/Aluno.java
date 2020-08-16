
import java.util.ArrayList;

public class Aluno extends Pessoa {
    String curso;
    
    public Aluno(String nome, String endereco, int idade, String curso, ArrayList<Disciplina> listaDisc) {
        super(nome, endereco, idade, listaDisc);
        this.curso = curso;
    }
    
    String getCurso(){
        return this.curso;
    }

    @Override
    void printDescricao() {
        System.out.println("Aluno: "+super.getNome());
        System.out.println("Endereço: "+super.getEndereco());
        System.out.println("Idade: "+super.getIdade());
        System.out.println("Curso: "+this.curso);
        System.out.println("Disciplina(s) cursada(s): ");
        ArrayList<Disciplina> listaDisc = super.getListaDisc();
        for(Disciplina disc : listaDisc){
            System.out.println("Nome: "+disc.getNomeDisc()+" - Carga Horária: "+disc.getCargaHoraria());
        }
    }
    
}
