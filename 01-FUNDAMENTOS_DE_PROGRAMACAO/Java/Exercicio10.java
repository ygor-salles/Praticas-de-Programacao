/* 
10 - Leia valores num�ricos at� que o valor 0 for digitado. Em seguida,
calcule a m�dia dos valores digitados e informe o usu�rio. 
*/

import java.util.Scanner;

public class exercicio10 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        float num, soma=0; 
        int cont=0;
        
        System.out.println("Digite valores, encerra quando for digitado zero: \n");
        do{
            num = teclado.nextFloat();
            cont += 1;
            soma += num;
        }while(num!=0);
        
        System.out.println("\nA m�dia dos numeros digitados excluindo o zero �: "+(soma/(float)(cont-1)));
    }
}