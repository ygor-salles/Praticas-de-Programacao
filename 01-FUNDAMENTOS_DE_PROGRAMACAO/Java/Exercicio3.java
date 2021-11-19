/*
 3 - Ler dois números, armazenando-os nas variáveis num1 e num2. Verificar se o valor de
num1 é maior que o valor de num2 e, em caso positivo, trocar os conteúdos das variáveis.
 */

import java.util.Scanner;

public class exercicio3 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        int aux;
        System.out.println("Digite NUM1: ");
        int num1 = teclado.nextInt();
        System.out.println("Digite NUM2: ");
        int num2 = teclado.nextInt();
        
        if(num1 > num2){
            aux = num1;
            num1 = num2;
            num2 = aux;
        }
        
        System.out.println("\nNUM1: " +num1+ "\nNUM2: " +num2);
    }
}
