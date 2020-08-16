import javax.swing.JOptionPane; 

public class Adicao {
    public static void main( String args[] ) {
    String primeiroNumero;
    String segundoNumero; 
    int numero1; 
    int numero2;
    float media;
    
    // ler o primeiro número (na forma string)
    primeiroNumero = JOptionPane.showInputDialog("Digite o Primeiro Nº Inteiro" );
    // ler o segundo número (na forma string)
    segundoNumero = JOptionPane.showInputDialog( "Digite o Segundo Nº Inteiro" );
   
    // convertendo os strings em números inteiros
    numero1 = Integer.parseInt(primeiroNumero);
    numero2 = Integer.parseInt(segundoNumero);
    
    media = (float)(numero1 + numero2)/2;
 
    JOptionPane.showMessageDialog(null, "A média é "+media,"Resultado da média: ", JOptionPane.PLAIN_MESSAGE);
    System.exit( 0 ); 
    } 
} 
