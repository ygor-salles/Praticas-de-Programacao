/*
16 - Escreva um programa que recebe uma cadeia de caracteres verifica se esta cadeia é um palíndromo.
Uma palavra é dita ser palíndromo se a sequência de seus caracteres da esquerda para a direita é
igual à sequência de seus caracteres da direita para a esquerda. Ex.: arara.
 */

import java.util.Scanner;

public class exercicio16 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        System.out.println("Entre com a cadeia de caracter: ");
        String string1 = teclado.next();
        
        if (palindromo(string1))
            System.out.println("\nÉ PALINDROMO\n");
        else
            System.out.println("\nNÃO é palindromo\n");
    }
    
    public static boolean palindromo(String palavra) {
        int meio = palavra.length() / 2;
        for (int i = 0; i < meio; i++) 
            if (palavra.charAt(i) != palavra.charAt(palavra.length()-1 - i))
                return false;
        return true;
    }
}
