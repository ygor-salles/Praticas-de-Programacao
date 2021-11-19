/*
1 – Elabore um programa “Caixa de Numero” contendo duas classes no qual deve
gerar um valor randômico de 1 a 10, dizer se o numero é par, mostrar a
tabuada desse número e exibir esse número secreto no final.
 */

import java.util.Random;
import java.util.Scanner;

public class PrincipalCaixaDeNumero {
    public static void main(String[] args) {
        CaixaDeNumero caixa = new CaixaDeNumero();
        Random random = new Random();
        Scanner teclado = new Scanner(System.in);
        int opcao, palpite;
        
        //NÚMERO SORTEADO
        caixa.numeroSecreto = random.nextInt(10);
        System.out.println("Sorteio do número realizado de 1 a 10, "
                + "favor escolher as opções para tentar advinhá-lo:.. \n");
        
        //EXIBINDO MENU
        do{
            System.out.println("1 - VERIFICA SE É PAR OU ÍMPAR");
            System.out.println("2 - VERIFICA SE ESTÁ ENTRE UM INTERVALO FORNECIDO PELO USUÁRIO");
            System.out.println("3 - ARRISCAR DIZER QUAL NÚMERO");
            System.out.println("4 - EXIBI A TABUADA DO NÚMERO SECRETO");
            System.out.println("5 - MOSTRA O NÚMERO SECRETO");
            System.out.println("6 - SAIR");
            System.out.println("opção:.. "); opcao = teclado.nextInt();
            System.out.println("\n");
            
            switch (opcao){    
                case 1:
                    if(caixa.ehPar())
                        System.out.println("O número é par!");
                    else
                        System.out.println("Não é par!");
                    break;

                case 2:
                    System.out.println("Forneça um intervalo para verificar se o numero se encontr nele:.. ");
                    System.out.println("Digite ponto de inicio e fim do intervalo respectimvamente: ");
                    int numInicio = teclado.nextInt(); int numFim = teclado.nextInt();
                    if (caixa.estaEntreDoisNumeros(numInicio, numFim))
                        System.out.println("O número secreto está dentro do intervalo!");
                    else
                        System.out.println("o número secreto NÃO está dentro do intervalo");
                    break;
                
                case 3:
                    System.out.println("Tente advinhar, digite seu palpite:.. ");
                    palpite = teclado.nextInt();
                    if(caixa.palpiteRealizado(palpite))
                        System.out.println("PARABÉNS, ACERTOU!");
                    else
                        System.out.println("Infelizmente não é este, continue tentando.");
                    break;

                case 4:
                    System.out.println("Tabuada: ");
                    int[] vetResp = caixa.dizerTabuada(10);
                    for(int i : vetResp)
                        System.out.println(i);
                    break;

                case 5:
                    caixa.dizerNumero();
                    break;
                
                case 6:
                    System.out.println("Finalizando");
                    break;
                
                default:
                    System.out.println("Opção incorreta!");
                    break;

            }
        } while (opcao != 6);
    }
}
