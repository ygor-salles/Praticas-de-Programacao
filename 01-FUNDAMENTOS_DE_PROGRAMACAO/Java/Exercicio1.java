/* 
1 - Faça um algoritmo que receba o peso de uma pessoa, calcule e mostre:
a. O novo peso quando a pessoa engorda 15% do peso digitado
b. O novo peso quando a pessoa engorda 20% do peso digitado
*/

import java.util.Scanner;

public class exercicio1 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner (System.in);
        float np15, np20, peso;
        
        System.out.println("Digite seu peso: "); 
        peso = teclado.nextFloat();
        np15 = (float) (peso + (peso*0.15));
        np20 = (float) (peso + (peso*0.20));
        
        System.out.println("Peso + 15% é: " + np15);
        System.out.println("Peso + 20% é: " + np20);
    }
}
