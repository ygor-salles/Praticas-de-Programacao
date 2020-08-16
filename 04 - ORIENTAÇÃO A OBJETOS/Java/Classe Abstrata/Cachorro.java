
package orientação.a.objetos;

/* @Override mostra que este método da classe animal tb implementa a classe
Animal que é seu pai.
*/

public class Cachorro extends Animal {

    public String andar(String direcao) {
        return "Indo para "+direcao+"...Wolf Wolf ...";
    }

    @Override
    String comer(String alimento) {
        return "Comendo "+alimento+"...Wolf Wolf ...";
    }
    
}
