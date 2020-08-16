
public class Main {
    public static void main(String[] args) {
        Professor prof = new Professor("Vidarte", "156.252.333-77", 7000);
        Aluno al1 = new Aluno("Rogério", "147.897.785-96", 0);
        Aluno al2 = new Aluno("Patricia", "258.897.785-00", 0);

        al1.nota = prof.atribuiNota(8.5);
        al2.nota = prof.atribuiNota(5.4);
        prof.salario = prof.reajustaSalario();

        al1.mostraAtributos();
        al2.mostraAtributos();
        prof.mostraAtributos();
    }
}
