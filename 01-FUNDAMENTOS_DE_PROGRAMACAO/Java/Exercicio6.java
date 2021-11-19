/*
6 - Elabore um programa que leia dois números n e m (m>=n) e escreva todos os números
pares entre n e m.
 */

import java.util.Scanner;

public class exercicio6 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
       
        System.out.println("Digite valor do ponto de origem: ");
        int n = teclado.nextInt();
        System.out.println("Digite valor do ponto de destino: ");
        int m = teclado.nextInt();
        
        if(m>=n){
            System.out.println("\nValores pares dentro do intervalo(inclusive): \n");
            for(int i=n; i<=m; i++)
                if(i%2==0)
                    System.out.println(" "+i);
        }
        else
            System.out.println("\nValor de destino deve ser maior que o de origem");
    }
}
