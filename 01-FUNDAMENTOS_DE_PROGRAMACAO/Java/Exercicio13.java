/*
13 - Faça um programa que preencha um vetor com seis elementos numéricos inteiros.
Calcule e mostre: todos os números pares; a quantidade de números pares;
todos os números ímpares; a quantidade de números ímpares. 
*/

import java.util.Scanner;

public class exercicio13 {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);    
        int []vetor = new int[6];
        int i, par=0, impar=0;
        
        System.out.println("\nDigite 6 numeros inteiros: ");
        for(i=0; i<6; i++){
            vetor[i] = leitor.nextInt();
        }
        
        for(i=0; i<6; i++){
            if (vetor[i]%2==0){
                System.out.println("\nPar: "+vetor[i]);
                par++;
            }
            else{
                System.out.println("\nImpar: "+vetor[i]);
                impar++;
            }
        }
        
        System.out.println("\nQuantidade de PAR: " +par+ "\nQuantidade de Ímpar: "+impar);
    }
}
