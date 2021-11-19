/*
14 - Leia um conjunto de nomes e os armazene em um vetor de forma dinâmica.
Em seguida, leia um nome e verifique se o mesmo faz parte desse vetor.
 */

import java.util.ArrayList;
import java.util.Scanner;

public class exercicio14 {
    public static void main(String[] args) {
        ArrayList<String> vetor = new ArrayList();
        Scanner teclado = new Scanner(System.in);
        
        char teste;
        int i=0;
        
        do{
            System.out.println("Digite nome: ");
            String nome = teclado.next(); //.next() limpa o buffer, optativo ao invés de .nextLine()
            vetor.add(nome);    
            do{
                System.out.println("Deseja continuar alocando nomes no array? [S/N] ");
                teste = teclado.next().charAt(0);
            }while(teste!='s' && teste!='S' && teste!='n' && teste!='N');     
            i++;
        } while(teste=='S' || teste=='s');
        
        System.out.println("\nSeu array de nomes é: ");
        for (i=0; i<vetor.size(); i++) 
            System.out.println(vetor.get(i));
       
        System.out.println("Digite o nome de busca: "); 
        String nome_busca = teclado.next();
        
        boolean result = false;
        for(String k : vetor)
            if(k.equals(nome_busca)){
                result = true;
                break;
            }
        
        if (result)
            System.out.println("\nO nome ("+nome_busca+") está no array de nomes!\n");
        else
            System.out.println("\nO nome ("+nome_busca+") NÃO está no array de nomes!\n");  
    }
}