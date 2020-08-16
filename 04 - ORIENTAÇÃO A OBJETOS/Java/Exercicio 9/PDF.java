
public class PDF extends Documento {
    PDF(String nome) {
        super(nome);
    }
    
    @Override
    String visualizar() {
        return "Exibi no Adobe Acrobat";
    }
}
