
package pacote2;

import pacote1.*; //Asterisco referencia todas as classes do pacote 1

public class ClasseFilhaPacote2 extends ClassePaiPacote1 {
    public static void main(String[] args) {
        ClassePaiPacote1 c  = new ClassePaiPacote1();
        System.out.println("Atributos que podem ser acessados da classe pai de pacote diferente: ");
        System.out.println("Public = "+c.atributoPublico);
        
        System.out.println("\nPara acessar o atributo privado, protected e default da classe pai de pacote diferente"
                + "  deve utilizar o get()");
        System.out.println("Privado get() = "+c.getAtributoPrivado());
        System.out.println("Protected get() = "+c.getAtributoProtected());
        System.out.println("Default get() = "+c.getAtributoDefault());
        
        System.out.println("\nPara mudar o atributo privado, protected ou default da classe pai de pacote diferente deve utilizar o set()");
        c.setAtributoPrivado(8);
        System.out.println("Visualizar o atributo privado, protected ou default após a mudança de valor, com o get() ==> PRIVADO = "+c.getAtributoPrivado());
        
        System.out.println("\n\nobs: ISSO TAMBÉM SERVE TANTO PARA ATRIBUTOS QUANTO PARA MÉTODOS");
    }
}
