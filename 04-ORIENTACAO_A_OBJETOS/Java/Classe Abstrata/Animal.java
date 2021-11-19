
package orientação.a.objetos;

/* Classes abstratas são classes que possuem filhos quem implementam pelo menos um
ou mais de seus métodos, funcionado como uma tad.h da tad.c em C, onde só é definido
o escopo do método(função). 
Sobre a utilização: da mesma forma que a classe filha herda atributos e métodos de seu pai
a parte abstrata do classe pai "herda de seu filho", porém de maneira diferente, como pode
ser visto abaixo.
*/

public abstract class Animal {
    double peso;
    
    public String andar(){
        return "andadno...";
    }
    
    abstract String comer(String alimento);
}
