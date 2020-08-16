/*

 */
public class Main {
    public static void main(String[] args) {
        Aluno aluno = new Aluno("Maurici", 23, 1234);
        System.out.println(aluno.dizerNome());
        System.out.println(aluno.dizerMatricula());
        aluno.dizerNomeMatricula();
    }
}
