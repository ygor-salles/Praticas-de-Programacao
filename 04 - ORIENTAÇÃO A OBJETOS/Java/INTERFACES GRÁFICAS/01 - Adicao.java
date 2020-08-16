import javax.swing.JOptionPane; 

public class Adicao {
    public static void main( String args[] ) {
    String primeiroNumero;
    String segundoNumero; 
    int numero1; 
    int numero2;
    int soma;
    
    // ler o primeiro número (na forma string)
    primeiroNumero = JOptionPane.showInputDialog("Digite o Primeiro No Inteiro" );
    // ler o segundo número (na forma string)
    segundoNumero = JOptionPane.showInputDialog( "Digite o Segundo No Inteiro" );
   
    // convertendo os strings em números inteiros
    numero1 = Integer.parseInt(primeiroNumero);
    numero2 = Integer.parseInt(segundoNumero);
    
    soma = numero1 + numero2;
 
    JOptionPane.showMessageDialog(null, "A soma é "+soma,"Resultado da Soma: ", JOptionPane.PLAIN_MESSAGE);
    System.exit( 0 ); 
    } 
} 
