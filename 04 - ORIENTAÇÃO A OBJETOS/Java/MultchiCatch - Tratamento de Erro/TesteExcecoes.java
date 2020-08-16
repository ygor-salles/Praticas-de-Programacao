
package orientação.a.objetos;

import java.util.Scanner;


public class TesteExcecoes {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int num=0, i=0;
        int[] vetor = new int[5];
        
        System.out.println("Digite um numero base: ");
        int base = scan.nextInt();
        do{
            System.out.println("Digite 100 para sair!");
            System.out.println("Diigite um numero: ");
            num = scan.nextInt();
            //Tratamento de erro caso anexe mais de 5 elementos
            try(ClasseFechar c = new ClasseFechar()){
                vetor[i++] = base / num; //Não pode ser dividido por zero
            } catch(ArrayIndexOutOfBoundsException | ArithmeticException e){
                System.out.println("Erro!");
            }
        } while(num != 100);
    }
}
