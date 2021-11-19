
public class Disciplina {
    private String nomeDisc;
    private int cargaHoraria;
    
    Disciplina(String nomeDisc, int cargaHoraria){
        this.nomeDisc = nomeDisc;
        this.cargaHoraria = cargaHoraria;
    }

    String getNomeDisc() {
        return this.nomeDisc;
    }

    int getCargaHoraria() {
        return this.cargaHoraria;
    }
}
