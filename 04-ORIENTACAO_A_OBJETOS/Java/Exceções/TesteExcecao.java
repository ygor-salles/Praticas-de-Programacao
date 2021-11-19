
package orientação.a.objetos;

public class TesteExcecao {
    public void metodo1(){
        try{
            metodo2();
        } catch(MinhaExcecao e){
            System.out.println("Erro: "+e.getMessage());
        } finally{
            System.out.println("--finally");
        }
        
    }
    
    public void metodo2() throws MinhaExcecao{
        throw new MinhaExcecao("Erro ao executar!!!");
    }
}
