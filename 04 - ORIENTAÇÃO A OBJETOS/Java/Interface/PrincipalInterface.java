
package orientação.a.objetos;


public class PrincipalInterface {
    public static void main(String[] args) {
        Terrestre cao = new Cachorro();
        System.out.println(cao.andar("Norte"));
        
        Cachorro c = new Cachorro();
        System.out.println(c.andar("Sul"));
        
        
    }
}
