/*
PrincipalCaixaDeNumero.java
*/

public class CaixaDeNumero {
    int numeroSecreto;
    
    boolean ehPar(){
        //Retorna true se satisfazer a condição ou false senão satisfazer
        return this.numeroSecreto%2 == 0; 
    }
    
    int[] dizerTabuada(int quantidade){
        int[] vetor = new int[quantidade];
        for(int i=1; i<=quantidade; i++)
            vetor[i-1] = this.numeroSecreto * i;
        
        return vetor;
    }
    
    boolean estaEntreDoisNumeros(int numInicio, int numFim){
        return numInicio <= this.numeroSecreto && numFim >= this.numeroSecreto;
    }
    
    boolean palpiteRealizado(int palpite){
        return palpite==this.numeroSecreto;
    }
    
    void dizerNumero(){
        System.out.println("O número secreto é: "+this.numeroSecreto);
    }
}
