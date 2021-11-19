/*
8 - Elabore um algoritmo para calcular e imprimir o valor de S, sendo S = -1/2 + 2/4 - 3/6 + 4/8
-5/10 +, ..., +10/20
 */
public class exercicio8 {
    public static void main(String[] args) {
        float s=0;
        int numerador, denominador=2;
        
        for(numerador=1; numerador<=10; numerador++){
            if(numerador%2==0)
                s += (numerador/(float)denominador);
            else
                s += ((-numerador)/(float)denominador);
            denominador += 2;
        }
        System.out.println("\nSoma é: "+s);
    }
}
