/*
7 - Elabore um programa para calcular e escrever a seguinte soma:
    37 * 38       36 * 37     35 * 36             1 * 2
S = ---------- + --------- + ---------- + ..... + ------
        1           2           3                   37
 
*/
public class exercicio7 {
    public static void main(String[] args) {
        int numerador1=37, numerador2=38, denominador;
        float soma=0;
        
        for(denominador=1; denominador<=37; denominador++){
            soma += ((numerador1*numerador2)/(float)denominador);
            numerador1--;
            numerador2--;
        }
        
        System.out.println("Resultado da somatória: "+soma);
    }
}
