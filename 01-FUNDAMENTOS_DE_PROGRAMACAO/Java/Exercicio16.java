/*
16 - Escreva um programa que recebe uma cadeia de caracteres verifica se esta cadeia � um pal�ndromo.
Uma palavra � dita ser pal�ndromo se a sequ�ncia de seus caracteres da esquerda para a direita �
igual � sequ�ncia de seus caracteres da direita para a esquerda. Ex.: arara.
 */

import java.util.Scanner;

public class exercicio16 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        System.out.println("Entre com a cadeia de caracter: ");
        String string1 = teclado.next();
        
        if (palindromo(string1))
            System.out.println("\n� PALINDROMO\n");
        else
            System.out.println("\nN�O � palindromo\n");
    }
    
    public static boolean palindromo(String palavra) {
        int meio = palavra.length() / 2;
        for (int i = 0; i < meio; i++) 
            if (palavra.charAt(i) != palavra.charAt(palavra.length()-1 - i))
                return false;
        return true;
    }
}
