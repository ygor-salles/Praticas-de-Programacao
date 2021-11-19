/*
1 – Elabore um programa “Caixa de Numero” contendo duas classes no qual deve
gerar um valor randômico de 1 a 10, dizer se o numero é par, mostrar a
tabuada desse número e exibir esse número secreto no final.
 */

import java.util.Random;

public class PrincipalCaixaDeNumero {
    public static void main(String[] args) {
        CaixaDeNumero caixa = new CaixaDeNumero();
        Random random = new Random();
        
        caixa.numeroSecreto = random.nextInt(10);
        if(caixa.ehPar())
            System.out.println("O número é par!");
        else
            System.out.println("Não é par!");
        
        System.out.println("Tabuada: ");
        int[] vetResp = caixa.dizerTabuada();
        for(int i : vetResp)
            System.out.println(i);
        
        System.out.println("\n"+caixa.dizerQualNumero());
    }
}
