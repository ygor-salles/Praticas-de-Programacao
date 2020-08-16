
package orientação.a.objetos;


public class ClasseFechar implements AutoCloseable{
    @Override
    public void close() {
        System.out.println("ClasseFechar: .. Fechando...");
    }
    
}
