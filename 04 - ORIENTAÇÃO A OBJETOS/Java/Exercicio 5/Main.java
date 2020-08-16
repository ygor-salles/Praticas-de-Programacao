/*

 */
public class Main {
    public static void main(String[] args) {
        Carro carro = new Carro("Chevrolet", "Preto", false, false);
        carro.mostraAtributos();
        carro.enchePortaMalas();
        carro.ligaMotor();
        carro.mostraAtributos();
        System.out.println();

        Motocicleta moto = new Motocicleta("Suzuki", "Vermelha", false, "Hornet");
        moto.mostraAtributos();
        moto.ligaMotor();
        moto.mostraAtributos();
    }
}
