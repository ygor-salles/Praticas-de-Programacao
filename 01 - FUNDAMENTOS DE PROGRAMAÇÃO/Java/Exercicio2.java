/*
2 - Dado um número inteiro positivo de 3 algarismos, inverter a ordem de seus
algarismos. Os três algarismos do número dado são diferentes de zero.
 */

import java.util.Scanner;

public class exercicio2 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner (System.in);
        int centena, dezena, unidade;
        System.out.println("Digite um numero inteiro de 3 algarismos diferente de 0: ");
        int num = teclado.nextInt();
        
        centena = num/100;
        dezena = (num%100)/10;
        unidade = (num%100)%10;
        
        System.out.println("A ordem ivertida é: " +unidade +dezena + centena);
    }
}
