/*
9 - Suponha que no ano N a população dos EUA seja maior que a brasileira. Sabendo-se que os
Estados Unidos possuem um crescimento anual de 2% na sua população e que o Brasil tem
crescimento anual de 4%, determine o ano em que as duas populações estarão próximas em 
quantidade.
 */

public class exercicio9 {
    public static void main(String[] args) {
        double bra=210, eua=327.2;
        int ano=2019;
        System.out.println("O ano é: "+ano);
        System.out.println("A população brasileira é: "+bra+" MI");
        System.out.println("A população americana é: "+eua+" MI");
        
        while(bra<eua){
            bra += (bra*0.04);
            eua += (eua*0.02);
            ano += 1;
        }
        System.out.println("\nO ano em que a população brasileira se igulará ou ultrapassará"
                + " a do EUA será em: "+ano);
        System.out.println("Basil: " +bra+ " MI\nEUA: "+eua+ " MI\n");
    }
}
