/*
19 - Imprimir Dia m�s e Ano da data atual
 */

import java.time.LocalDateTime; 
import java.time.format.DateTimeFormatter;

public class exercicio19 {
  public static void main(String[] args) {
    LocalDateTime myDateObj = LocalDateTime.now();
    System.out.println("Formato americano: " + myDateObj);
    
    DateTimeFormatter myFormatObj = DateTimeFormatter.ofPattern("dd-MM-yyyy HH:mm:ss");
    String formattedDate = myDateObj.format(myFormatObj);
    System.out.println("Formato PT-BR: " + formattedDate);
  }
}
