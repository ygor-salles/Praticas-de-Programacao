/*

 */
public class Veiculo {
    String marca;
    String cor;
    boolean motorLigado;
    
    Veiculo(String marca, String cor, boolean motorLigado){
        this.marca = marca;
        this.cor = cor;
        this.motorLigado = motorLigado;
    }
    
    boolean isMotorLigado(){
      return this.motorLigado;
    }

    void ligaMotor(){
        if(this.motorLigado == true)
            System.out.println("O motor está ligado");
        else{
            this.motorLigado = true;
            System.out.println("O motor acaba de ser ligado");
        }
    }
    
}
