
package pacote1;

public class ClasseQualquerPacote1 {
    public static void main(String[] args) {
        ClassePaiPacote1 c  = new ClassePaiPacote1();
        System.out.println("Atributos que podem ser acessados na classe do mesmo pacote: ");
        System.out.println("Default = "+c.atributoDefault);
        System.out.println("Public = "+c.atributoPublico);
        
        System.out.println("\nPara acessar o atributo privado ou protected da classe de mesmo pacote deve utilizar o get()");
        System.out.println("Privado get() = "+c.getAtributoPrivado());
        System.out.println("Protected get() = "+c.getAtributoProtected());
        
        System.out.println("\nPara mudar o atributo privado ou protected da classe de mesmo pacote deve utilizar o set()");
        c.setAtributoPrivado(8);
        System.out.println("Visualizar o atributo privado ou protected após a mudança de valor, com o get() ==> PRIVADO = "+c.getAtributoPrivado());
        
        System.out.println("\n\nobs: ISSO TAMBÉM SERVE TANTO PARA ATRIBUTOS QUANTO PARA MÉTODOS");
    }
}
