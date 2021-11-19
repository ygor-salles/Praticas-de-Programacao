/*
21 - Elabore um programa que receba a matrícula, a nota 1 e nota 2 de uma lista de alunos e
escreva essas informações em um arquivo (nome do arquivo é exercicioArquivo.dat). A
leitura de dados deve ser interrompida quando for digitado a matricula = 0.
*/

import java.io.FileWriter;  
import java.io.IOException;  
import java.util.Scanner;

public class exercicio21 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        int mat;
        float n1, n2;

        try (FileWriter myWriter = new FileWriter("filename.txt")){
            System.out.println("Digite a matrícula: ");
            mat = (int) teclado.nextLong();
            while(mat!=0){
                System.out.println("Digite a Nota 1: ");
                n1 = teclado.nextFloat();
                System.out.println("Digite a Nota 2: ");
                n2 = teclado.nextFloat();

                myWriter.write("\nMatrícula: "+mat);
                myWriter.write("\nNota 1: "+n1);
                myWriter.write("\nNota 2: "+n2);
                
                System.out.println("\nDigite a matrícula: ");
                mat = (int) teclado.nextLong();
            }
        }
        catch (IOException e){
            System.out.println("Ocorreu um erro!.");
        }   
    }
}