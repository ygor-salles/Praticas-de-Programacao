/*
15 - Escreva um programa que leia uma matriz 5 x 5 de forma randômica e
imprima sua diagonal primária e secundária.
 */

import java.util.Random;
import java.util.Scanner;

public class exercicio15 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Random random = new Random();
        
        System.out.println("Digite o valor de N: ");
        int n = scan.nextInt();
        int[][]matriz = new int[n][n];
        
        if(n>0 && n<=5){
            int i, j;
            System.out.println("\nMATRIZ GERADA: \n");
            for (i=0;i<n;i++){
               for (j=0;j<n;j++){
                   matriz[i][j] = random.nextInt(10);
                   System.out.print("_"+matriz[i][j]+"_|");
                }
                System.out.println(" ");
            }
            
            System.out.println("\nDiagonal Primaria: \n"); 
            for (i=0;i<n;i++)
                for (j=0;j<n;j++)
                    if (j == i)
                        System.out.print(" "+matriz[i][j]);

            System.out.println("\n\nDiagonal Secundaria: \n");
            for (i=0;i<n;i++)
                for (j=0;j<n;j++)
                    if (j == (n-1-i))
                        System.out.print(" "+matriz[i][j]);
            
            
            System.out.println("\n");
        }
        else
            System.out.println("\nDados incorretos!\n");
    }
}
