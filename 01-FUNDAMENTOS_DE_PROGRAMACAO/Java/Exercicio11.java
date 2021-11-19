/*
11 - imprimir o cabeçalho definido em uma função
Curso: Sisitemas de Informacao
Disciplina: Fundamentos de Progaramacao
Universidade federal de Itajuba - Unifei

e retornar em uma nova função o  conceito conforme a media do aluno que serão digitadas pelo usuário.
Segue a tabela abaixo:

    NOTA            CONCEITO
de 0,0 a 4,9            D
de 5,0 a 6,9            C
de 7,0 a 8,9            B
de 9,0 a 10,0           A
 */

import java.util.Scanner;

public class exercicio11 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        
        cabecalho();
        System.out.println("Digite a sua média final: ");
        float media = teclado.nextFloat();
        if(media>=0 && media<=10){
            System.out.println("\nO coneceito é: "+retorna_conceito(media));
        }
        else
            System.out.println("\nDigite uma média existente!\n");
    }
    
    public static char retorna_conceito(float media){
        if (media>=0 && media<=4.9)
            return 'D';
        else if (media>=5 && media<=6.9)
            return 'C';
        else if (media>=7 && media<=8.9)
            return 'B';
        else if (media>=9 && media<=10)
            return 'A';
        return 0;
    }
    
    public static void cabecalho(){
         System.out.println("Curso: Sisitemas de Informacao");
         System.out.println("Disciplina: Fundamentos de Progaramacao");
         System.out.println("Universidade federal de Itajuba - Unifei\n\n");
    }
}
