/*
9 - Suponha que no ano N a popula��o dos EUA seja maior que a brasileira. Sabendo-se que os
Estados Unidos possuem um crescimento anual de 2% na sua popula��o e que o Brasil tem
crescimento anual de 4%, determine o ano em que as duas popula��es estar�o pr�ximas em 
quantidade.
 */

public class exercicio9 {
    public static void main(String[] args) {
        double bra=210, eua=327.2;
        int ano=2019;
        System.out.println("O ano �: "+ano);
        System.out.println("A popula��o brasileira �: "+bra+" MI");
        System.out.println("A popula��o americana �: "+eua+" MI");
        
        while(bra<eua){
            bra += (bra*0.04);
            eua += (eua*0.02);
            ano += 1;
        }
        System.out.println("\nO ano em que a popula��o brasileira se igular� ou ultrapassar�"
                + " a do EUA ser� em: "+ano);
        System.out.println("Basil: " +bra+ " MI\nEUA: "+eua+ " MI\n");
    }
}
