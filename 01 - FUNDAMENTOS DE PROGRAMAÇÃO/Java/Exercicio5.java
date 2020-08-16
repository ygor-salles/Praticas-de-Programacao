/*
 5 - A partir de valores digitados pelo usuário, das notas b1 e b2 de um aluno, informar se ele
foi aprovado (media > = 6), reprovado (media < 3), ou se ficou de exame (3<=media<6). Se
ficou de exame, solicitar a nota do exame ex e informar se o aluno foi aprovado ou
reprovado.
 */

import java.util.Scanner;

public class exercicio5 {
    public static void main(String[] args) {
        Scanner tec = new Scanner(System.in);
        float media, exame;
        
        System.out.println("Digite a nota1: ");
        float n1 = tec.nextFloat();
        System.out.println("Digite a nota2: ");
        float n2 = tec.nextFloat();
        
        media = (n1+n2)/2;
        
        if(media>=6)
            System.out.println("\nAPROVADO!");
        else if(media<3)
            System.out.println("\nREPROVADO!");
        else{
	    System.out.println("\nFicou de exame!\n");	
            System.out.println("Digite sua nota do exame: ");
            exame = tec.nextFloat();
            if(exame >= 6)
                System.out.println("\nAPROVADO!");
            else
                System.out.println("\nREPROVADO!");
        }
    }
}
