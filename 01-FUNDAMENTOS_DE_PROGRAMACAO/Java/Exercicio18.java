/*
18 - Escreva um programa em que leia 3 cadeias de caracteres de tamanho m�ximo 50,
e as imprime na tela em ordem alfab�tica.
 */

import java.util.Arrays;
import java.util.Scanner;

public class exercicio18 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        
        String vetor[] = new String[3];
        for(int i=0; i<3; i++){
            System.out.println("Nome "+i+": ");
            vetor[i] = teclado.next();
        }
        
        //com o .sort voc� ordena o vetor
        Arrays.sort(vetor);

        //Impress�o
        System.out.print ("\nO nomes em ordem alfab�tica s�o \n");
        for (int i = 0 ; i<vetor.length; i++)
            System.out.print (vetor[i]+", \n");
    }    
}
