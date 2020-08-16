/*
17 - Faça uma função para criptografar uma frase digitada pelo usuário.
A criptografia deverá substituir todas as vogais por *. Utilize a função no programa principal.
A frase poderá ter, no máximo, 50 caracteres 
*/

import java.util.Scanner;

public class exercicio17 {
    public static void criptografia(String frase){
        String[] nulos = {"A", "E", "I", "O", "U", "a", "e", "i", "o", "u"};
        for (String nulo : nulos) { 
            frase = frase.replaceAll(nulo, "*");
        }
        
        System.out.println(frase);
    }
    
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        System.out.println("Digite uma frase: ");
        String frase = teclado.nextLine();
       
        criptografia(frase);
    }
}
