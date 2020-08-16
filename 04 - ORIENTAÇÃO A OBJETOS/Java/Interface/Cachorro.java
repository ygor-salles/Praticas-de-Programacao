
package orientação.a.objetos;

/* Para fazer ligação a uma interface a classe Cachorro deve ter implements Terrestre
em sua extensão conforme pode ser ver abaixo.

e @Override é a parte que implementa o método andar de Terrestre.
OBS: o método andar também pertence a classe Cachorro.
*/

public class Cachorro implements Terrestre {
    
    @Override
    public String andar(String direcao) {
        return "Indo para "+direcao+"...Wolf Wolf ...";
    }
}
