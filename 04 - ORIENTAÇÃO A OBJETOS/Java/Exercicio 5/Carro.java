/*

 */
public class Carro extends Veiculo {
    boolean portaMalasCheio;

    Carro(String marca, String cor, boolean motorLigado, boolean portaMalasCheio) {
        super(marca, cor, motorLigado);
        this.portaMalasCheio = portaMalasCheio;
    }
    
    boolean isPortaMalasCheio(){
      return this.portaMalasCheio;
    }
    
    void enchePortaMalas(){
      if (this.portaMalasCheio == true)
        System.out.println("O porta malas já está cheio");
      else{
        this.portaMalasCheio = true;
        System.out.println("O porta malas acaba de ser preenchido");
      }
    }

    void mostraAtributos(){
        System.out.println ("O carro é da Marca: "+super.marca+". Cor: "+super.cor);
        if(isMotorLigado())
          System.out.println("Seu motor está ligado");
        else
          System.out.println("Seu motor está desligado");
        if(isPortaMalasCheio())
          System.out.println("Seu porta malas está cheio");
        else
          System.out.println("Seu porta malas está vazio");
    }
    
}
