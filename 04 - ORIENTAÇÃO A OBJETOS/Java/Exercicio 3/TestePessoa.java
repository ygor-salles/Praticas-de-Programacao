
public class TestePessoa {
    public static void main(String[] args) {
        Pessoa pe1 = new Pessoa("João", 21, 75.4);
        Pessoa pe2 = new Pessoa("Carlos");
        System.out.println(pe1.dizerInfo());
        System.out.println(pe2.dizerInfoNome());
        
        Carro car = new Carro();
        System.out.println("\nPiloto do carro 1: "+car.piloto.nome);
        Carro car2 = new Carro(pe1);
        System.out.println("Piloto do carro 2: "+car2.piloto.dizerInfo());
    }
}
