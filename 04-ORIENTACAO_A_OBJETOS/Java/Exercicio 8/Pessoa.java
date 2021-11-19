
import java.util.ArrayList;

public abstract class Pessoa {
    private String nome;
    private String endereco;
    private int idade;
    private ArrayList<Disciplina> listaDisc = new ArrayList();
    
    Pessoa(String nome, String endereco, int idade, ArrayList<Disciplina> listaDisc){
        this.nome = nome;
        this.endereco = endereco;
        this.idade = idade;
        this.listaDisc = listaDisc;
    }
    
    String getNome(){
        return this.nome;
    }
    
    String getEndereco(){
        return this.endereco;
    }
    
    int getIdade(){
        return this.idade;
    }
    
    ArrayList<Disciplina> getListaDisc(){
        return this.listaDisc;
    }
    
    void insereDisc(Disciplina disc){
        this.listaDisc.add(disc);
    }
    
    abstract void printDescricao();

}
