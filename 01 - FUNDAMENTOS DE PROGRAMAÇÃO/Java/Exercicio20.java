/*
20 - Leia uma data no passado e informe em qual dia da semana essa data caiu.
*/

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.GregorianCalendar;
import java.util.Scanner;

public class exercicio21 {
    public static void main(String[] args) throws ParseException {
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
        Scanner teclado = new Scanner(System.in);
        
        System.out.println("\nDigite a data de nascimento [dd/MM/yyyy]: ");
        String nascimento = teclado.nextLine();
        Date dt = sdf.parse(nascimento);
        
        GregorianCalendar gc = new GregorianCalendar();
        gc.setTime(dt);
        int diaDaSemana = gc.get(GregorianCalendar.DAY_OF_WEEK);
        
        switch (diaDaSemana) {
            case 1:
                System.out.println("\nDomingo\n"); break;
            case 2:
                System.out.println("\nSeguda-feira\n"); break;
            case 3:
                System.out.println("\nTerça-feira\n"); break;
            case 4:
                System.out.println("\nQuarta-feira\n"); break;
            case 5:
                System.out.println("\nQuinta-feira\n"); break;
            case 6:
                System.out.println("\nSexta-feira\n"); break;
            case 7:
                System.out.println("\nSábado\n"); break;
            default:
                break;
        }
    }
}