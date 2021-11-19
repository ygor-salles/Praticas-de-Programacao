
package orientação.a.objetos;

/*
Os atributos em interfaces devem ser constantes.
Os métodos em interface são apenas o escopo da classe que o implementa, no caso 
da classe Cachorro, que também pode ser considerada ou não filha da interface Terrestre.

A diferença de interface para Classe abstrata é que em interfaces todos atributos 
devem ser constante e não variáveis e todos os métodos são apenas o escopo
e referência da classe que o implementa. 
Já para uma classe ser considerada abstrata
deve haver pelo menos um método escopo e referência da classe filho que o imlementa
*/

public interface Terrestre {
    final int QUADRUPEDE=4; 
    
    String andar(String direcao);
}
