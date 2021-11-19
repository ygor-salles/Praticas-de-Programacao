/*
4 - Escreva um algoritmo para calcular as raízes de uma equação do segundo grau (Ax2 + Bx + C).
Considere que o valor de A <> 0 e (B2– 4AC) > 0, = 0 e <>0. Escreva os valores na tela.
 */

/* Teste 2 raízes (a=1 b=-3 c=-10) //Teste 1 raíz (a=9 b=-12 c=4) //Teste 0 raíz (a=5 b=3 c=5) */

import static java.lang.Math.sqrt;
import java.util.Scanner;

public class exercicio4 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        float delta, x1, x2;
        
        System.out.println("Digite valor de A B e C respectivamente: ");
        float a = teclado.nextInt(); 
        float b = teclado.nextInt(); 
        float c = teclado.nextInt();
        
        if (a != 0) {
            delta = (float) (Math.pow(b,2) - 4*a*c);
            
            if (delta>0){
                x1 = (float) ((-b +Math.sqrt(delta))/(2*a));
                x2 = (float) ((-b -Math.sqrt(delta))/(2*a));
                System.out.println("Equação possui duas raízes reais: ");
                System.out.println("\n X': "+x1+"\n X'': "+x2);
            }
            else if (delta==0){
                x1 = (float) ((-b +sqrt(delta))/(2*a));
                System.out.println("\nEquação possui uma raiz real: ");
                System.out.println("\n X: "+x1);
            }
            else
                System.out.println("\nEquação não possui raízes reais!\n");
        }
        else
            System.out.println("\nA deve ser diferente de Zero!");
    }
}
