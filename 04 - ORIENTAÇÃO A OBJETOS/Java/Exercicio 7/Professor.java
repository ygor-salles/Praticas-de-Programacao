
import java.util.ArrayList;


public class Professor extends Pessoa {
    private String titulacao;

    public Professor(String nome, String endereco, int idade, String titulacao, ArrayList<Disciplina> listaDisc) {
        super(nome, endereco, idade, listaDisc);
        this.titulacao = titulacao;
    }
    
    String getTitulacao(){
        return this.titulacao;
    }

    @Override
    void printDescricao() {
        System.out.println("Professor: "+super.getNome());
        System.out.println("Endereço: "+super.getEndereco());
        System.out.println("Idade: "+super.getIdade());
        System.out.println("Titulação: "+this.titulacao);
        System.out.println("Disciplina(s) ministrada(s): ");
        ArrayList<Disciplina> listaDisc = super.getListaDisc();
        for(Disciplina disc : listaDisc){
            System.out.println("Nome: "+disc.getNomeDisc()+" - Carga Horária: "+disc.getCargaHoraria());
        }
    }
    
}
