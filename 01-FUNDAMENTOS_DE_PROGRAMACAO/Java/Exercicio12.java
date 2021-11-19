/*
12 - Fa�a um programa que contenha uma fun��o que recebe dois n�meros positivos
e retorna a soma dos N n�meros inteiros existentes entre eles (inclusive).
Use a fun��o no programa principal.
*/

import java.util.Scanner;

public class exercicio12 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        System.out.println("Digite dois numeros positivos: ");
        int a = teclado.nextInt();
        int b = teclado.nextInt();
        
        if (a==0 || b==0)
            System.out.println("\nOs dois numeros devem ser positivos: ");
        else{
            if (a>b)
                System.out.println("\nA soma entre os numeros digitados: "+soma(b, a));
            else
                System.out.println("\nA soma entre os numeros digitados: "+soma(a, b));
        }
    }
    
    public static int soma(int menor, int maior){
        int soma=0;
        for(int i=menor; i<=maior; i++)
            soma += i;
        return soma;
    }
}
