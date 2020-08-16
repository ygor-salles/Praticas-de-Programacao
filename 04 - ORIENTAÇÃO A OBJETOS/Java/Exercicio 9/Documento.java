
public  abstract class Documento {
    private String nome;

    Documento(String nome){
        this.nome = nome;
    }

    String getNome(){
        return this.nome;
    }

    abstract String visualizar();
}
