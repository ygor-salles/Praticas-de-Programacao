
package orientação.a.objetos;

/*
Poliformismo é quando a classe pai e as subclasses possuem uma função com a 
mesma nomeclatura e criar um objeto para cada classe e passar cada objeto
para a mesma função conforme se vê abaixo
 */

public class PrincipalPolimorfismo {
    public static void main(String[] args) {
        Transporte t = new Transporte();
        Veiculo v = new Veiculo();
        Carro c = new Carro();
        
        System.out.println("Passando o transporte");
        moverTransporte(t);
        System.out.println("\nPassando o veículo");
        moverTransporte(v);
        System.out.println("\nPassando o carro");
        moverTransporte(c);
    }
    
    static void moverTransporte(Transporte trans){
        System.out.println(trans.mover());
    }
}
