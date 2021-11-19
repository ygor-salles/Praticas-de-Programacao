/*

 */
public class Motocicleta extends Veiculo {
    String estilo;

    Motocicleta (String marca, String cor, boolean motorLigado, String estilo){
        super(marca, cor, motorLigado);
        this.estilo = estilo;
    }
    
    void mostraAtributos(){
        System.out.println ("A moto é da Marca: "+super.marca+". Cor: "+super.cor+". Estilo: "+this.estilo);
        if(isMotorLigado())
          System.out.println("Seu motor está ligado");
        else
          System.out.println("Seu motor está desligado");
    }
}
