
import java.util.ArrayList;


public class Main {
    public static void main(String[] args) {
        ArrayList<Documento> documentos = new ArrayList();
        PDF p1 = new PDF("PDF1");
        Word w1 = new Word("Word1");
        PDF p2 = new PDF("PDF2");
        
        documentos.add(p1);
        documentos.add(w1);
        documentos.add(p2);
        
        //Utilizando ForEach ao invés de for normal
        documentos.forEach((i) -> {
            System.out.println(i.getNome()+": "+i.visualizar());
        });
    }
}
