/*
22 - Realizar as funções de fibonachi, fatorial e a somatória de 1 até N,  
todas com recursividade.
 */

import java.util.Scanner;

public class exercicio22 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        System.out.println("Digite valor de N(inteiro): ");
        int n = teclado.nextInt();
        
        System.out.println("\nFibonachi: "+fib(n));
        System.out.println("\nFatorial: "+fatorial(n));
        
        System.out.println("\nSomatória de 1 até N: "+soma(n));
    }
    
    public static int fib(int n){
        if (n==0) return 0;
        if (n==1) return 1;
        return fib(n-1) + fib(n-2);
    }
    
    public static int fatorial(int n){
        if (n==0 || n==1)
            return 1;
        return n*fatorial(n-1);
    }
    
    public static int soma(int n){
        if (n==1) return 1;
        return n + soma(n-1);
    }
}
