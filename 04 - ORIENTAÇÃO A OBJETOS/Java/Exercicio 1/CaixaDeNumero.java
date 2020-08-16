/*
PrincipalCaixaDeNumero.java
*/

public class CaixaDeNumero {
    int numeroSecreto;
    
    boolean ehPar(){
        return this.numeroSecreto%2 == 0;
    }
    
    int[] dizerTabuada(){
        int[] vetor = new int[10];
        for(int i=1; i<=10; i++)
            vetor[i-1] = this.numeroSecreto * i;
        
        return vetor;
    }
    
    String dizerQualNumero(){
        return "O número secreto é: "+this.numeroSecreto;
    }
}
