
package pacote1;

public class ClasseFilhaPacote1 extends ClassePaiPacote1 {
    public static void main(String[] args) {
        ClassePaiPacote1 c  = new ClassePaiPacote1();
        System.out.println("Atributos que podem ser acessados da classe pai do mesmo pacote: ");
        System.out.println("Default = "+c.atributoDefault);
        System.out.println("Public = "+c.atributoPublico);
        System.out.println("Protected = "+c.atributoProtected);
        
        System.out.println("\nPara acessar o atributo privado da classe pai deve utilizar o get()");
        System.out.println("Privado get() = "+c.getAtributoPrivado());
        
        System.out.println("\nPara mudar o atributo privado da classe pai deve utilizar o set()");
        c.setAtributoPrivado(8);
        System.out.println("Visualizar o atributo privado após a mudança de valor, com o get() = "+c.getAtributoPrivado());
        
        System.out.println("\n\nobs: ISSO TAMBÉM SERVE TANTO PARA ATRIBUTOS QUANTO PARA MÉTODOS");
    }
}