
package orientação.a.objetos;

public class PrincipalAbstract {
    public static void main(String[] args) {
        Cachorro a1 = new Cachorro();
        System.out.println(a1.andar("Sul"));
        System.out.println(a1.comer("carne"));
        
        //o novo objeto instanciado deve ser apenas do filho conforme se vê abaixo 
        Animal a2 = new Cachorro();
        System.out.println(a2.andar());
        System.out.println(a2.comer("ração"));
    }
}
