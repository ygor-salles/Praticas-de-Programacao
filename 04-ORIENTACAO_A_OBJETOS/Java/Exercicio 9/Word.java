
public class Word extends Documento{
    Word(String nome) {
        super(nome);
    }
    
    @Override
    String visualizar() {
        return "Exibi no Word";
    }
}
